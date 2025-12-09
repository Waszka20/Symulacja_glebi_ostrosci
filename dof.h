#pragma once

#include <wx/dc.h>
#include <memory>
#include "ConfigClass.h"

class dof {
public:
    dof(std::shared_ptr<ConfigClass> c);
    void Draw(wxDC* dc, int w, int h);
    void ApplyBlur(wxImage& img);
    void ApplyBlur2(wxImage& img);
    void OverlapImages(wxImage& image1, wxImage& image2);
    void DrawCircleOnImage(wxImage& img, int cx, int cy, int radius,
        wxColor color);

private:
    std::shared_ptr<ConfigClass> cfg;

};