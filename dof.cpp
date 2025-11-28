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
        img = cfg->depthMapImage.Copy();
        img = img.ConvertToGreyscale();

    }
    else if (cfg->selected_view == 2) {
        img = cfg->Image.Copy();
        ApplyBlur(img);

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

void dof::ApplyBlur(wxImage& img)
{

    if (!cfg->depthMapImage.IsOk())
        return;

    int w = img.GetWidth();
    int h = img.GetHeight();

    wxImage depth = cfg->depthMapImage.Copy();
    depth = depth.ConvertToGreyscale();

    wxImage src = img.Copy();   // obraz Ÿród³owy
    unsigned char* dst = img.GetData(); // zapis do img

    int maxR = cfg->blur_strenght;   // maksymalny radius

    for (int y = 0; y < h; y++)
    {
        for (int x = 0; x < w; x++)
        {
            // ----- 1. Pobieramy g³êbiê -----
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

            // ----- 3. Wpisujemy uœredniony piksel -----
            int idx = (y * w + x) * 3;
            dst[idx + 0] = sumR / count;
            dst[idx + 1] = sumG / count;
            dst[idx + 2] = sumB / count;
        }
    }
}

