#include "dof.h"

#include <wx/dc.h>
#include <wx/dcclient.h>
#include <wx/pen.h>
#include <wx/brush.h>
#include <wx/font.h>
#include <wx/wxprec.h>


dof::dof(std::shared_ptr<ConfigClass> c) {
	cfg = std::move(c);
}

void dof::Draw(wxDC* dc, int w, int h) {
	if (!dc) return;
    
    


    wxImage img;

    if (cfg->selected_view == 0) {
        img = cfg->Image.Copy();
    }
    else if (cfg->selected_view == 1) {
        if (cfg->draw_status == 1 && cfg->mouseDown)
        {
            DrawCircleOnImage(cfg->depthMapImage,
                cfg->clickPos.x,
                cfg->clickPos.y,
                cfg->rozmiarRys,
                cfg->color1);

            
        }

        img = cfg->depthMapImage.Copy();

        if (cfg->overlap_image) {
            wxImage tmp = cfg->Image.Copy();
            img = img.ConvertToGreyscale();
            OverlapImages(img, tmp);
        }
        else {
        }

        if (cfg->draw_status == 1) {
            dc->SetPen(wxPen(*wxBLUE, 1));
            dc->SetBrush(*wxTRANSPARENT_BRUSH);
            dc->DrawCircle(cfg->mouse_pos.x, cfg->mouse_pos.y, cfg->rozmiarRys);
        }

    }
    else if (cfg->selected_view == 2) {
        img = cfg->Image.Copy();
        ApplyBlur2(img);

        cfg->newImage = img.Copy();
    }
    
    if (!img.IsOk()) {
        return;
    }
    
     img = img.Scale(w, h, wxIMAGE_QUALITY_HIGH);
    
    
    wxBitmap bmp(img);
	if (bmp.IsOk()){
		dc->DrawBitmap(bmp, 0, 0, false);
	}

    


}

inline int getSum(const std::vector<int>& S, int x1, int y1, int x2, int y2, int w)
{
    auto A = (y1 > 0 && x1 > 0) ? S[(y1 - 1) * w + (x1 - 1)] : 0;
    auto B = (y1 > 0) ? S[(y1 - 1) * w + x2] : 0;
    auto C = (x1 > 0) ? S[y2 * w + (x1 - 1)] : 0;
    auto D = S[y2 * w + x2];

    return D - B - C + A;
}
void dof::ApplyBlur2(wxImage& img) {

    if (!cfg->depthMapImage.IsOk())
        return;

    int w = img.GetWidth();
    int h = img.GetHeight();

    wxImage depth = cfg->depthMapImage.Copy();
    depth = depth.ConvertToGreyscale();

    wxImage src = img.Copy();   // obraz źródłowy
    unsigned char* dst = img.GetData(); // zapis do img

    int maxR = cfg->blur_strenght;   // maksymalny radius

    auto srcData = src.GetData();

    std::vector<int> sumR(w * h, 0);
    std::vector<int> sumG(w * h, 0);
    std::vector<int> sumB(w * h, 0);

    for (int y = 0; y < h; y++)
    {
        int rowSumR = 0, rowSumG = 0, rowSumB = 0;

        for (int x = 0; x < w; x++)
        {
            int idx = (y * w + x) * 3;

            rowSumR += srcData[idx];
            rowSumG += srcData[idx + 1];
            rowSumB += srcData[idx + 2];

            int above = (y > 0) ? sumR[(y - 1) * w + x] : 0;
            sumR[y * w + x] = rowSumR + above;

            above = (y > 0) ? sumG[(y - 1) * w + x] : 0;
            sumG[y * w + x] = rowSumG + above;

            above = (y > 0) ? sumB[(y - 1) * w + x] : 0;
            sumB[y * w + x] = rowSumB + above;
        }
    }


    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            unsigned char d = depth.GetRed(x, y);
            d = 255 - d;
            float f = d / 255.0f;
            int r = int(f * maxR);
            if (r < 1) continue;

            int x1 = std::max(0, x - r);
            int x2 = std::min(w - 1, x + r);
            int y1 = std::max(0, y - r);
            int y2 = std::min(h - 1, y + r);

            int area = (x2 - x1 + 1) * (y2 - y1 + 1);

            int R = getSum(sumR, x1, y1, x2, y2, w);
            int G = getSum(sumG, x1, y1, x2, y2, w);
            int B = getSum(sumB, x1, y1, x2, y2, w);

            int idx = (y * w + x) * 3;
            dst[idx] = R / area;
            dst[idx + 1] = G / area;
            dst[idx + 2] = B / area;
        }
    }
}

void dof::ApplyBlur(wxImage& img)
{

    if (!cfg->depthMapImage.IsOk())
        return;

    int w = img.GetWidth();
    int h = img.GetHeight();

    wxImage depth = cfg->depthMapImage.Copy();
    depth = depth.ConvertToGreyscale();

    wxImage src = img.Copy();   // obraz źródłowy
    unsigned char* dst = img.GetData(); // zapis do img

    int maxR = cfg->blur_strenght;   // maksymalny radius

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            // ----- 1. Pobieramy głębię -----
            unsigned char d = depth.GetRed(x, y); // od 0 do 255
            float f = (float)d / 255.0f;          // 0.0 – ostry, 1.0 – max blur

            int radius = (int)(f * maxR);
            if (radius < 1)
                continue; // piksel ostry – bez zmian
            

            int count = 0;
            int sumR = 0, sumG = 0, sumB = 0;

            // ----- 2. Box blur w promieniu radius -----
            for (int dy = -radius; dy <= radius; dy++)
            {
                int yy = y + dy;
                if (yy < 0 || yy >= h)
                    continue;

                for (int dx = -radius; dx <= radius; dx++)
                {
                    int xx = x + dx;
                    if (xx < 0 || xx >= w)
                        continue;

                    sumR += src.GetRed(xx, yy);
                    sumG += src.GetGreen(xx, yy);
                    sumB += src.GetBlue(xx, yy);
                    count++;
                }
            }

            // ----- 3. Wpisujemy uśredniony piksel -----
            int idx = (y * w + x) * 3;
            dst[idx + 0] = sumR / count;
            dst[idx + 1] = sumG / count;
            dst[idx + 2] = sumB / count;
        }
    }
}
void dof::OverlapImages(wxImage& image1, wxImage& image2) {
    unsigned char alpha = cfg->overlapLevel; // 0-255, 128 = 50% przezroczystości

    unsigned char* baseData = image1.GetData();
    unsigned char* depthData = image2.GetData();

    int w = image1.GetWidth();
    int h = image1.GetHeight();

    for (int y = 0; y < h; ++y) {
        for (int x = 0; x < w; ++x) {
            int idx = (y * w + x) * 3; // 3 kanały RGB

            // prosty blending: newColor = alpha * top + (1-alpha) * base
            baseData[idx] = (depthData[idx] * alpha + baseData[idx] * (255 - alpha)) / 255;
            baseData[idx + 1] = (depthData[idx + 1] * alpha + baseData[idx + 1] * (255 - alpha)) / 255;
            baseData[idx + 2] = (depthData[idx + 2] * alpha + baseData[idx + 2] * (255 - alpha)) / 255;
        }
    }

}

void dof::DrawCircleOnImage(wxImage& img, int cx, int cy, int radius, wxColor color){
    int w = img.GetWidth();
    int h = img.GetHeight();
    unsigned char* data = img.GetData();

    for (int y = cy - radius; y <= cy + radius; y++)
    {
        for (int x = cx - radius; x <= cx + radius; x++)
        {
            if (x < 0 || x >= w || y < 0 || y >= h) continue;

            int dx = x - cx;
            int dy = y - cy;

            if (dx * dx + dy * dy <= radius * radius)
            {
                int idx = (y * w + x) * 3;
                data[idx] = color.GetRed();
                data[idx + 1] = color.GetGreen();
                data[idx + 2] = color.GetBlue();
            }
        }
    }
}

