#include "Remis.h"
#include "Druzyna.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(Remis)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(Remis)
const long Remis::ID_STATICTEXT1 = wxNewId();
const long Remis::ID_STATICTEXT2 = wxNewId();
const long Remis::ID_TEXTCTRL1 = wxNewId();
const long Remis::ID_STATICLINE1 = wxNewId();
const long Remis::ID_TEXTCTRL2 = wxNewId();
const long Remis::ID_STATICTEXT3 = wxNewId();
const long Remis::ID_BUTTON1 = wxNewId();
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

BEGIN_EVENT_TABLE(Remis,wxDialog)
	//(*EventTable(Remis)
	//*)
END_EVENT_TABLE()

extern Druzyna remis[2];

Remis::Remis(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Remis)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;

	Create(parent, id, _("Remis"), wxDefaultPosition, wxDefaultSize, 0, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("REMIS W MECZU"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 5, 0, 0);
	Remis1 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer3->Add(Remis1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	R1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer3->Add(R1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer3->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	R2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer3->Add(R2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Remis2 = new wxStaticText(this, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer3->Add(Remis2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	Button1 = new wxButton(this, ID_BUTTON1, _("Zatwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Remis::OnButton1Click);
	//*)

	Remis1->SetLabel(remis[0].GetNazwa());
	Remis2->SetLabel(remis[1].GetNazwa());
	Fit();
	Centre();
}

Remis::~Remis()
{
	//(*Destroy(Remis)
	//*)
}


void Remis::OnButton1Click(wxCommandEvent& event)
{
    if(!(R1->GetValue()).IsNumber() || !(R1->GetValue()).IsNumber())
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
    else if( wxAtoi(R1->GetValue())<0 || wxAtoi(R2->GetValue())<0)
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
    else{
    remis[0].SetKarne(R1->GetValue());
    remis[1].SetKarne(R2->GetValue());

    if(remis[0].GetKarne()==remis[1].GetKarne())
    {
        wxMessageBox(_("Nie można zremisować w rzutach karnych, proszę podać prawidłowe wartości."), _("BŁĄD"));
    } else
    Close();
    }
}
