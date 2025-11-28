#pragma once

#include <wx/dc.h>
#include <memory>
#include "ConfigClass.h"

class dof {
public:
    dof(std::shared_ptr<ConfigClass> c);
    void Draw(wxDC* dc, int w, int h);
    void ApplyBlur(wxImage& img);

private:
    std::shared_ptr<ConfigClass> cfg;

};