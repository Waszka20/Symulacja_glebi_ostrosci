///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-115-g11c2dec8)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,400 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	WxPanel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	WxPanel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer1->Add( WxPanel, 1, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	m_button1 = new wxButton( this, wxID_ANY, _("Wczytaj Obraz"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button1, 0, wxALL|wxEXPAND, 5 );

	m_button2 = new wxButton( this, wxID_ANY, _("Wczytaj mape glebokosci"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button2, 0, wxALL|wxEXPAND, 5 );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Wyswietl"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 15 );

	m_radioBtn1 = new wxRadioButton( this, wxID_ANY, _("Oryginalny Obraz"), wxDefaultPosition, wxDefaultSize, 0 );
	m_radioBtn1->SetValue( true );
	bSizer2->Add( m_radioBtn1, 0, wxALL, 5 );

	m_radioBtn2 = new wxRadioButton( this, wxID_ANY, _("Mapa Glebokosci"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_radioBtn2, 0, wxALL, 5 );

	m_radioBtn3 = new wxRadioButton( this, wxID_ANY, _("Obraz z Glebia Ostrosci"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_radioBtn3, 0, wxALL, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Moc rozmycia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 15 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_slider1 = new wxSlider( this, wxID_ANY, 3, 0, 10, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer10->Add( m_slider1, 1, wxBOTTOM|wxLEFT|wxRIGHT, 5 );

	m_staticText3 = new wxStaticText( this, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer10->Add( m_staticText3, 0, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 4 );


	bSizer2->Add( bSizer10, 0, wxTOP|wxEXPAND, 3 );

	m_button3 = new wxButton( this, wxID_ANY, _("Zapisz"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_button3, 0, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 0, wxALIGN_TOP, 50 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	WxPanel->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button1_click ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button2_click ), NULL, this );
	m_radioBtn1->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn1_selected ), NULL, this );
	m_radioBtn2->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn2_selected ), NULL, this );
	m_radioBtn3->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn3_selected ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button3_click ), NULL, this );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	WxPanel->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::WxPanel_Repaint ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button1_click ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button2_click ), NULL, this );
	m_radioBtn1->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn1_selected ), NULL, this );
	m_radioBtn2->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn2_selected ), NULL, this );
	m_radioBtn3->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( MyFrame1::m_radioBtn3_selected ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_slider1->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_scroll_rozmycie_upadate ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button3_click ), NULL, this );

}
