#pragma warning(disable: 4996) // Visual Studio: warning C4996: 'XXX': This function or variable may be unsafe. <- wxcrt.h
#include <fstream>
#include "ConfigClass.h"

using namespace std;

ConfigClass::ConfigClass(GUIMyFrame1 *wnd)
{
 MainWindow=wnd;

}



istream& rd2EOL(istream& str)
{
 int ch;
 
 while( (ch=str.get()) != EOF && ch != '\n');
 return str;
}


