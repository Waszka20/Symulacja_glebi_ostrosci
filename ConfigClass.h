#ifndef __ConfigClass__
#define __ConfigClass__

#include "GUIMyFrame1.h"

class ConfigClass
{
    private:
       GUIMyFrame1 *MainWindow;   // wskaznik do glownego okna aplikacji
       
        
    public:
        ConfigClass(GUIMyFrame1 *wnd);

        wxImage Image;        
        wxImage depthMapImage;        
        wxImage newImage;
        

        wxPoint mouse_pos;
        wxPoint clickPos;
        bool mouseDown = false;
        wxColor color1;
        int selected_view = -1;
        int blur_strenght = 2;
        int rozmiarRys = 12;
        int overlapLevel = 128;
        bool overlap_image = false;
        int draw_status = 0; //0 - no draw, 1 - first button, 2 - second itd
};

#endif
