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

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_toggleBtn11 = new wxToggleButton( this, wxID_ANY, _("Rysuj"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_toggleBtn11, 0, wxALL, 5 );

	m_toggleBtn12 = new wxToggleButton( this, wxID_ANY, _("Gumka"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_toggleBtn12, 0, wxALL, 5 );


	bSizer5->Add( bSizer6, 0, wxEXPAND, 5 );

	m_colourPicker2 = new wxColourPickerCtrl( this, wxID_ANY, wxColour( 255, 255, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	bSizer5->Add( m_colourPicker2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("Rozmiar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer7->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	m_slider4 = new wxSlider( this, wxID_ANY, 15, 1, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer7->Add( m_slider4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Poziom nalozenia"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( 1 );
	bSizer8->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_slider5 = new wxSlider( this, wxID_ANY, 128, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer8->Add( m_slider5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );


	bSizer2->Add( bSizer5, 1, wxEXPAND|wxTOP, 15 );


	bSizer1->Add( bSizer2, 0, wxALIGN_TOP, 50 );


	this->SetSizer( bSizer1 );
	this->Layout();
	m_menubar1 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Nowy") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem1 );

	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Otworz") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem2 );

	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu1, wxID_ANY, wxString( _("Zapisz") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu1->Append( m_menuItem3 );

	m_menubar1->Append( m_menu1, _("Obraz") );

	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _("Nowy") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem4 );

	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _("Otworz") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem5 );

	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _("Zapisz") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu2->Append( m_menuItem6 );

	m_menu2->AppendSeparator();

	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _("Rysuj") ) , wxEmptyString, wxITEM_CHECK );
	m_menu2->Append( m_menuItem7 );

	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem( m_menu2, wxID_ANY, wxString( _("Naloz obraz") ) , _("Nakłada Mape głębokości na obraz."), wxITEM_CHECK );
	m_menu2->Append( m_menuItem8 );

	m_menubar1->Append( m_menu2, _("Mapa glebokosci") );

	m_menu3 = new wxMenu();
	wxMenuItem* m_menuItem11;
	m_menuItem11 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _("Wytnij") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem11 );

	wxMenuItem* m_menuItem12;
	m_menuItem12 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _("Kopiuj") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem12 );

	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem( m_menu3, wxID_ANY, wxString( _("Wklej") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem13 );

	m_menubar1->Append( m_menu3, _("Edytuj") );

	this->SetMenuBar( m_menubar1 );


	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	WxPanel->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MyFrame1::OnMouseDown ), NULL, this );
	WxPanel->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( MyFrame1::OnMouseUp ), NULL, this );
	WxPanel->Connect( wxEVT_MOTION, wxMouseEventHandler( MyFrame1::OnMouseMove ), NULL, this );
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
	m_toggleBtn11->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_toggleBtn_rysuj_toogled ), NULL, this );
	m_toggleBtn12->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_toggle_button_gumka_toggled ), NULL, this );
	m_colourPicker2->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( MyFrame1::m_color1_changed ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_menu2->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MyFrame1::m_menuItem8_selected ), this, m_menuItem8->GetId());
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MyFrame1::MainFormClose ) );
	WxPanel->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MyFrame1::OnMouseDown ), NULL, this );
	WxPanel->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( MyFrame1::OnMouseUp ), NULL, this );
	WxPanel->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MyFrame1::OnMouseMove ), NULL, this );
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
	m_toggleBtn11->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_toggleBtn_rysuj_toogled ), NULL, this );
	m_toggleBtn12->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_toggle_button_gumka_toggled ), NULL, this );
	m_colourPicker2->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( MyFrame1::m_color1_changed ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider4->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rozmiarRys_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );
	m_slider5->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_poziomNalozenia_update ), NULL, this );

}
