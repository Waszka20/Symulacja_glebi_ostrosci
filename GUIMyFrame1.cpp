#include "GUIMyFrame1.h"
#include "ConfigClass.h"
#include <wx/wxprec.h>
#include "dof.h"

GUIMyFrame1::GUIMyFrame1( wxWindow* parent )
:
MyFrame1( parent )
{
 //https://r12a.github.io/apps/conversion/ -> JavaScript
 cfg = std::make_shared<ConfigClass>(this);
 UpdateControls();

}

void GUIMyFrame1::MainFormClose( wxCloseEvent& event )
{
 Destroy();
}

void GUIMyFrame1::WxPanel_Repaint( wxUpdateUIEvent& event )
{
 Repaint();
}






void GUIMyFrame1::m_button1_click(wxCommandEvent& event)
{
    wxFileDialog dlg(
        this,
        _("Wczytaj obraz"),
        wxEmptyString, wxEmptyString,
        "Obrazy (*.bmp;*.png;*.jpg)|*.bmp;*.png;*.jpg",
        wxFD_OPEN | wxFD_FILE_MUST_EXIST
    );

    if (dlg.ShowModal() != wxID_OK)
        return;

    wxString filename = dlg.GetPath();

    if (!cfg->Image.LoadFile(filename)) {
        wxMessageBox("Nie udało się wczytać obrazu.", "Błąd");
        return;
    }
    if (cfg->depthMapImage.IsOk() && cfg->Image.IsOk()) {
        int h = cfg->Image.GetHeight();
        int w = cfg->Image.GetWidth();
        cfg->depthMapImage = cfg->depthMapImage.Scale(w, h, wxIMAGE_QUALITY_HIGH);
    }

    m_radioBtn1->SetValue(true); //zaznacza zeby wyswietlic od razu
    cfg->selected_view = 0;
    UpdateControls();

    Refresh();  // odśwież okno
}


void GUIMyFrame1::m_button2_click( wxCommandEvent& event )
{
    wxFileDialog dlg(
        this,
        _("Wczytaj obraz"),
        wxEmptyString, wxEmptyString,
        "Obrazy (*.bmp;*.png;*.jpg)|*.bmp;*.png;*.jpg",
        wxFD_OPEN | wxFD_FILE_MUST_EXIST
    );

    if (dlg.ShowModal() != wxID_OK)
        return;

    wxString filename = dlg.GetPath();

    if (!cfg->depthMapImage.LoadFile(filename)) {
        wxMessageBox("Nie udało się wczytać obrazu.", "Błąd");
        return;
    }
    if (cfg->depthMapImage.IsOk() && cfg->Image.IsOk()){
        int h = cfg->Image.GetHeight();
        int w = cfg->Image.GetWidth();
        cfg->depthMapImage = cfg->depthMapImage.Scale(w, h, wxIMAGE_QUALITY_HIGH);
    }
    

    m_radioBtn2->SetValue(true); //zaznacza zeby wyswietlic od razu
    cfg->selected_view = 1;
    UpdateControls();

    Refresh();  // odśwież okno

}
void GUIMyFrame1::m_button3_click(wxCommandEvent& event)
{
    if (!cfg->newImage.IsOk()) {
        wxMessageBox("Brak obrazu do zapisania!", "Błąd");
        return;
    }

    wxFileDialog saveDialog(
        this,
        "Zapisz jako...",
        wxEmptyString,
        "output.png",
        "PNG files (*.png)|*.png",
        wxFD_SAVE | wxFD_OVERWRITE_PROMPT
    );

    if (saveDialog.ShowModal() != wxID_OK)
        return;

    wxString path = saveDialog.GetPath();

    if (!cfg->newImage.SaveFile(path, wxBITMAP_TYPE_PNG)) {
        wxMessageBox("Nie udało się zapisać obrazu!", "Błąd");
        return;
    }

    
    wxMessageBox("Zapisano pomyślnie!", "OK");
}
void GUIMyFrame1::m_button4_click(wxCommandEvent& event) {
    int w, h;
    WxPanel->GetSize(&w, &h);

    

}
void GUIMyFrame1::m_radioBtn1_selected(wxCommandEvent& event) {
    cfg->selected_view = 0;
}
void GUIMyFrame1::m_radioBtn2_selected(wxCommandEvent& event) {
    cfg->selected_view = 1;
}
void GUIMyFrame1::m_radioBtn3_selected(wxCommandEvent& event) {
    cfg->selected_view = 2;
}
void GUIMyFrame1::m_scroll_rozmycie_upadate(wxScrollEvent& event) {
    m_staticText3->SetLabel(wxString::Format(wxT("%d"), m_slider1->GetValue()));
    cfg->blur_strenght = m_slider1->GetValue();

}


GUIMyFrame1::~GUIMyFrame1()
{

}

void GUIMyFrame1::Repaint()
{
    wxClientDC dc1(WxPanel);
    wxBufferedDC dc(&dc1);

    dc.SetBackground(*wxWHITE_BRUSH);
    dc.Clear();

    int w, h;
    WxPanel->GetSize(&w, &h);

    dof renderer(cfg);
    renderer.Draw(&dc, w, h);
}


void GUIMyFrame1::UpdateControls()
{
    m_radioBtn1->SetValue(cfg->selected_view == 0);
    m_radioBtn2->SetValue(cfg->selected_view == 1);
    m_radioBtn3->SetValue(cfg->selected_view == 2);

    // --- aktualizacja slidera ---
    m_slider1->SetValue(cfg->blur_strenght);
    m_staticText3->SetLabel(wxString::Format("%d", cfg->blur_strenght));

    
    // --- logiczne blokowanie/odblokowanie ---
    bool hasImage = cfg->Image.IsOk();
    bool hasDepth = cfg->depthMapImage.IsOk();
    bool hasBoth = hasImage && hasDepth;

    // 2. Blokowanie/odblokowanie radiobuttonów
    m_radioBtn1->Enable(hasImage);     // obraz główny
    m_radioBtn2->Enable(hasDepth);     // mapa głębokości
    m_radioBtn3->Enable(hasBoth);      // oba naraz
    
    
    
}