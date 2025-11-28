///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-115-g11c2dec8)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/stattext.h>
#include <wx/radiobut.h>
#include <wx/slider.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxButton* m_button1;
		wxButton* m_button2;
		wxStaticText* m_staticText1;
		wxRadioButton* m_radioBtn1;
		wxRadioButton* m_radioBtn2;
		wxRadioButton* m_radioBtn3;
		wxStaticText* m_staticText2;
		wxSlider* m_slider1;
		wxStaticText* m_staticText3;
		wxButton* m_button3;

		// Virtual event handlers, override them in your derived class
		virtual void MainFormClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void WxPanel_Repaint( wxUpdateUIEvent& event ) { event.Skip(); }
		virtual void m_button1_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button2_click( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBtn1_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBtn2_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_radioBtn3_selected( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_scroll_rozmycie_upadate( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_button3_click( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxPanel* WxPanel;

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Projekt"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 777,497 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

