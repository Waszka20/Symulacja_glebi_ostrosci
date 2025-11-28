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
        



        int selected_view = -1;
        int blur_strenght = 2;

};

#endif
