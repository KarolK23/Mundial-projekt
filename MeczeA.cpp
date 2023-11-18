#include "MeczeA.h"
#include "MundialApp.h"
#include "MundialMain.h"
#include "Menu.h"
#include <wx/msgdlg.h>

using namespace std;

//(*InternalHeaders(MeczeA)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

#undef _
#define _(s) wxString::FromUTF8(s)

//(*IdInit(MeczeA)
const long MeczeA::ID_STATICTEXT17 = wxNewId();
const long MeczeA::ID_STATICTEXT1 = wxNewId();
const long MeczeA::ID_TEXTCTRL1 = wxNewId();
const long MeczeA::ID_STATICLINE3 = wxNewId();
const long MeczeA::ID_TEXTCTRL2 = wxNewId();
const long MeczeA::ID_STATICTEXT2 = wxNewId();
const long MeczeA::ID_STATICTEXT7 = wxNewId();
const long MeczeA::ID_TEXTCTRL10 = wxNewId();
const long MeczeA::ID_STATICLINE6 = wxNewId();
const long MeczeA::ID_TEXTCTRL12 = wxNewId();
const long MeczeA::ID_STATICTEXT12 = wxNewId();
const long MeczeA::ID_STATICTEXT3 = wxNewId();
const long MeczeA::ID_TEXTCTRL3 = wxNewId();
const long MeczeA::ID_STATICLINE2 = wxNewId();
const long MeczeA::ID_TEXTCTRL4 = wxNewId();
const long MeczeA::ID_STATICTEXT4 = wxNewId();
const long MeczeA::ID_STATICTEXT8 = wxNewId();
const long MeczeA::ID_TEXTCTRL9 = wxNewId();
const long MeczeA::ID_STATICLINE5 = wxNewId();
const long MeczeA::ID_TEXTCTRL11 = wxNewId();
const long MeczeA::ID_STATICTEXT11 = wxNewId();
const long MeczeA::ID_STATICTEXT5 = wxNewId();
const long MeczeA::ID_TEXTCTRL5 = wxNewId();
const long MeczeA::ID_STATICLINE1 = wxNewId();
const long MeczeA::ID_TEXTCTRL6 = wxNewId();
const long MeczeA::ID_STATICTEXT6 = wxNewId();
const long MeczeA::ID_STATICTEXT9 = wxNewId();
const long MeczeA::ID_TEXTCTRL7 = wxNewId();
const long MeczeA::ID_STATICLINE4 = wxNewId();
const long MeczeA::ID_TEXTCTRL8 = wxNewId();
const long MeczeA::ID_STATICTEXT10 = wxNewId();
const long MeczeA::ID_STATICTEXT13 = wxNewId();
const long MeczeA::ID_TEXTCTRL13 = wxNewId();
const long MeczeA::ID_STATICLINE7 = wxNewId();
const long MeczeA::ID_TEXTCTRL14 = wxNewId();
const long MeczeA::ID_STATICTEXT14 = wxNewId();
const long MeczeA::ID_STATICTEXT15 = wxNewId();
const long MeczeA::ID_TEXTCTRL15 = wxNewId();
const long MeczeA::ID_STATICLINE8 = wxNewId();
const long MeczeA::ID_TEXTCTRL16 = wxNewId();
const long MeczeA::ID_STATICTEXT16 = wxNewId();
const long MeczeA::ID_STATICTEXT18 = wxNewId();
const long MeczeA::ID_TEXTCTRL17 = wxNewId();
const long MeczeA::ID_STATICLINE17 = wxNewId();
const long MeczeA::ID_TEXTCTRL25 = wxNewId();
const long MeczeA::ID_STATICTEXT32 = wxNewId();
const long MeczeA::ID_STATICTEXT20 = wxNewId();
const long MeczeA::ID_TEXTCTRL19 = wxNewId();
const long MeczeA::ID_STATICLINE19 = wxNewId();
const long MeczeA::ID_TEXTCTRL27 = wxNewId();
const long MeczeA::ID_STATICTEXT26 = wxNewId();
const long MeczeA::ID_STATICTEXT22 = wxNewId();
const long MeczeA::ID_TEXTCTRL21 = wxNewId();
const long MeczeA::ID_STATICLINE21 = wxNewId();
const long MeczeA::ID_TEXTCTRL29 = wxNewId();
const long MeczeA::ID_STATICTEXT28 = wxNewId();
const long MeczeA::ID_STATICTEXT24 = wxNewId();
const long MeczeA::ID_TEXTCTRL23 = wxNewId();
const long MeczeA::ID_STATICLINE24 = wxNewId();
const long MeczeA::ID_TEXTCTRL31 = wxNewId();
const long MeczeA::ID_STATICTEXT30 = wxNewId();
const long MeczeA::ID_STATICTEXT19 = wxNewId();
const long MeczeA::ID_TEXTCTRL18 = wxNewId();
const long MeczeA::ID_STATICLINE18 = wxNewId();
const long MeczeA::ID_TEXTCTRL26 = wxNewId();
const long MeczeA::ID_STATICTEXT33 = wxNewId();
const long MeczeA::ID_STATICTEXT21 = wxNewId();
const long MeczeA::ID_TEXTCTRL20 = wxNewId();
const long MeczeA::ID_STATICLINE20 = wxNewId();
const long MeczeA::ID_TEXTCTRL28 = wxNewId();
const long MeczeA::ID_STATICTEXT27 = wxNewId();
const long MeczeA::ID_STATICTEXT23 = wxNewId();
const long MeczeA::ID_TEXTCTRL22 = wxNewId();
const long MeczeA::ID_STATICLINE22 = wxNewId();
const long MeczeA::ID_TEXTCTRL30 = wxNewId();
const long MeczeA::ID_STATICTEXT29 = wxNewId();
const long MeczeA::ID_STATICTEXT25 = wxNewId();
const long MeczeA::ID_TEXTCTRL24 = wxNewId();
const long MeczeA::ID_STATICLINE23 = wxNewId();
const long MeczeA::ID_TEXTCTRL32 = wxNewId();
const long MeczeA::ID_STATICTEXT31 = wxNewId();
const long MeczeA::ID_BUTTON1 = wxNewId();
const long MeczeA::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MeczeA,wxDialog)
	//(*EventTable(MeczeA)
	//*)
END_EVENT_TABLE()

extern int ktora_kolejka;
extern Grupa A, B, C, D, E, F, G, H;
wxDialog * mundial;
extern void losuj(int n, int tablica[]);
int losowanie[32];




MeczeA::MeczeA(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(MeczeA)
	wxFlexGridSizer* FlexGridSizer10;
	wxFlexGridSizer* FlexGridSizer11;
	wxFlexGridSizer* FlexGridSizer12;
	wxFlexGridSizer* FlexGridSizer13;
	wxFlexGridSizer* FlexGridSizer14;
	wxFlexGridSizer* FlexGridSizer15;
	wxFlexGridSizer* FlexGridSizer16;
	wxFlexGridSizer* FlexGridSizer17;
	wxFlexGridSizer* FlexGridSizer18;
	wxFlexGridSizer* FlexGridSizer19;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer20;
	wxFlexGridSizer* FlexGridSizer21;
	wxFlexGridSizer* FlexGridSizer22;
	wxFlexGridSizer* FlexGridSizer23;
	wxFlexGridSizer* FlexGridSizer24;
	wxFlexGridSizer* FlexGridSizer25;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer32;
	wxFlexGridSizer* FlexGridSizer33;
	wxFlexGridSizer* FlexGridSizer34;
	wxFlexGridSizer* FlexGridSizer35;
	wxFlexGridSizer* FlexGridSizer36;
	wxFlexGridSizer* FlexGridSizer37;
	wxFlexGridSizer* FlexGridSizer38;
	wxFlexGridSizer* FlexGridSizer39;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer40;
	wxFlexGridSizer* FlexGridSizer41;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer6;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer9;
	wxGridBagSizer* GridBagSizer1;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	FlexGridSizer16 = new wxFlexGridSizer(0, 3, 0, 0);
	KolejkaX = new wxStaticText(this, ID_STATICTEXT17, _("Kolejka 1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	wxFont KolejkaXFont(20,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	KolejkaX->SetFont(KolejkaXFont);
	FlexGridSizer16->Add(KolejkaX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2 = new wxFlexGridSizer(10, 4, 0, 0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 5, 0, 0);
	FlexGridSizer9 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1A1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer9->Add(NazwaK1A1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1A1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer9->Add(K1A1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
	FlexGridSizer9->Add(StaticLine3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1A2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer9->Add(K1A2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1A2 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer9->Add(NazwaK1A2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer9, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer10 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1B1 = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer10->Add(NazwaK1B1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1B1 = new wxTextCtrl(this, ID_TEXTCTRL10, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	FlexGridSizer10->Add(K1B1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine6 = new wxStaticLine(this, ID_STATICLINE6, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE6"));
	FlexGridSizer10->Add(StaticLine6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1B2 = new wxTextCtrl(this, ID_TEXTCTRL12, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	FlexGridSizer10->Add(K1B2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1B2 = new wxStaticText(this, ID_STATICTEXT12, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer10->Add(NazwaK1B2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer10, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5 = new wxFlexGridSizer(0, 5, 0, 0);
	FlexGridSizer11 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1C1 = new wxStaticText(this, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer11->Add(NazwaK1C1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1C1 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer11->Add(K1C1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer11->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1C2 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	FlexGridSizer11->Add(K1C2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1C2 = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer11->Add(NazwaK1C2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer11, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer12 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1D1 = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer12->Add(NazwaK1D1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1D1 = new wxTextCtrl(this, ID_TEXTCTRL9, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	FlexGridSizer12->Add(K1D1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine5 = new wxStaticLine(this, ID_STATICLINE5, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE5"));
	FlexGridSizer12->Add(StaticLine5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1D2 = new wxTextCtrl(this, ID_TEXTCTRL11, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	FlexGridSizer12->Add(K1D2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1D2 = new wxStaticText(this, ID_STATICTEXT11, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer12->Add(NazwaK1D2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer12, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7 = new wxFlexGridSizer(0, 5, 0, 0);
	FlexGridSizer13 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1E1 = new wxStaticText(this, ID_STATICTEXT5, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer13->Add(NazwaK1E1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1E1 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	FlexGridSizer13->Add(K1E1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer13->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1E2 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	FlexGridSizer13->Add(K1E2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1E2 = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer13->Add(NazwaK1E2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer13, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer14 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1F1 = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer14->Add(NazwaK1F1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1F1 = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	FlexGridSizer14->Add(K1F1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
	FlexGridSizer14->Add(StaticLine4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1F2 = new wxTextCtrl(this, ID_TEXTCTRL8, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	FlexGridSizer14->Add(K1F2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1F2 = new wxStaticText(this, ID_STATICTEXT10, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer14->Add(NazwaK1F2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8->Add(FlexGridSizer14, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridBagSizer1 = new wxGridBagSizer(0, 0);
	FlexGridSizer32 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1G1 = new wxStaticText(this, ID_STATICTEXT13, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	FlexGridSizer32->Add(NazwaK1G1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1G1 = new wxTextCtrl(this, ID_TEXTCTRL13, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	FlexGridSizer32->Add(K1G1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine7 = new wxStaticLine(this, ID_STATICLINE7, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE7"));
	FlexGridSizer32->Add(StaticLine7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1G2 = new wxTextCtrl(this, ID_TEXTCTRL14, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	FlexGridSizer32->Add(K1G2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1G2 = new wxStaticText(this, ID_STATICTEXT14, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer32->Add(NazwaK1G2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridBagSizer1->Add(FlexGridSizer32, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(GridBagSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer15 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer33 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1H1 = new wxStaticText(this, ID_STATICTEXT15, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer33->Add(NazwaK1H1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1H1 = new wxTextCtrl(this, ID_TEXTCTRL15, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	FlexGridSizer33->Add(K1H1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine8 = new wxStaticLine(this, ID_STATICLINE8, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE8"));
	FlexGridSizer33->Add(StaticLine8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1H2 = new wxTextCtrl(this, ID_TEXTCTRL16, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	FlexGridSizer33->Add(K1H2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1H2 = new wxStaticText(this, ID_STATICTEXT16, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	FlexGridSizer33->Add(NazwaK1H2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer15->Add(FlexGridSizer33, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer34 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1A3 = new wxStaticText(this, ID_STATICTEXT18, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	FlexGridSizer34->Add(NazwaK1A3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1A3 = new wxTextCtrl(this, ID_TEXTCTRL17, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL17"));
	FlexGridSizer34->Add(K1A3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine17 = new wxStaticLine(this, ID_STATICLINE17, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE17"));
	FlexGridSizer34->Add(StaticLine17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1A4 = new wxTextCtrl(this, ID_TEXTCTRL25, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL25"));
	FlexGridSizer34->Add(K1A4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1A4 = new wxStaticText(this, ID_STATICTEXT32, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT32"));
	FlexGridSizer34->Add(NazwaK1A4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer35 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1B3 = new wxStaticText(this, ID_STATICTEXT20, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	FlexGridSizer35->Add(NazwaK1B3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1B3 = new wxTextCtrl(this, ID_TEXTCTRL19, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL19"));
	FlexGridSizer35->Add(K1B3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine19 = new wxStaticLine(this, ID_STATICLINE19, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE19"));
	FlexGridSizer35->Add(StaticLine19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1B4 = new wxTextCtrl(this, ID_TEXTCTRL27, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL27"));
	FlexGridSizer35->Add(K1B4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1B4 = new wxStaticText(this, ID_STATICTEXT26, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	FlexGridSizer35->Add(NazwaK1B4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18->Add(FlexGridSizer35, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer36 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1C3 = new wxStaticText(this, ID_STATICTEXT22, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	FlexGridSizer36->Add(NazwaK1C3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1C3 = new wxTextCtrl(this, ID_TEXTCTRL21, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL21"));
	FlexGridSizer36->Add(K1C3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine21 = new wxStaticLine(this, ID_STATICLINE21, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE21"));
	FlexGridSizer36->Add(StaticLine21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1C4 = new wxTextCtrl(this, ID_TEXTCTRL29, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL29"));
	FlexGridSizer36->Add(K1C4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1C4 = new wxStaticText(this, ID_STATICTEXT28, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	FlexGridSizer36->Add(NazwaK1C4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19->Add(FlexGridSizer36, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer37 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1D3 = new wxStaticText(this, ID_STATICTEXT24, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
	FlexGridSizer37->Add(NazwaK1D3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1D3 = new wxTextCtrl(this, ID_TEXTCTRL23, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL23"));
	FlexGridSizer37->Add(K1D3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine24 = new wxStaticLine(this, ID_STATICLINE24, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE24"));
	FlexGridSizer37->Add(StaticLine24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1D4 = new wxTextCtrl(this, ID_TEXTCTRL31, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL31"));
	FlexGridSizer37->Add(K1D4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1D4 = new wxStaticText(this, ID_STATICTEXT30, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT30"));
	FlexGridSizer37->Add(NazwaK1D4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer20->Add(FlexGridSizer37, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer38 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1E3 = new wxStaticText(this, ID_STATICTEXT19, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	FlexGridSizer38->Add(NazwaK1E3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1E3 = new wxTextCtrl(this, ID_TEXTCTRL18, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL18"));
	FlexGridSizer38->Add(K1E3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine18 = new wxStaticLine(this, ID_STATICLINE18, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE18"));
	FlexGridSizer38->Add(StaticLine18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1E4 = new wxTextCtrl(this, ID_TEXTCTRL26, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL26"));
	FlexGridSizer38->Add(K1E4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1E4 = new wxStaticText(this, ID_STATICTEXT33, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
	FlexGridSizer38->Add(NazwaK1E4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer38, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer39 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1F3 = new wxStaticText(this, ID_STATICTEXT21, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	FlexGridSizer39->Add(NazwaK1F3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1F3 = new wxTextCtrl(this, ID_TEXTCTRL20, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL20"));
	FlexGridSizer39->Add(K1F3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine20 = new wxStaticLine(this, ID_STATICLINE20, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE20"));
	FlexGridSizer39->Add(StaticLine20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1F4 = new wxTextCtrl(this, ID_TEXTCTRL28, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL28"));
	FlexGridSizer39->Add(K1F4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1F4 = new wxStaticText(this, ID_STATICTEXT27, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	FlexGridSizer39->Add(NazwaK1F4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer39, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer40 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1G3 = new wxStaticText(this, ID_STATICTEXT23, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	FlexGridSizer40->Add(NazwaK1G3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1G3 = new wxTextCtrl(this, ID_TEXTCTRL22, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL22"));
	FlexGridSizer40->Add(K1G3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine22 = new wxStaticLine(this, ID_STATICLINE22, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE22"));
	FlexGridSizer40->Add(StaticLine22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1G4 = new wxTextCtrl(this, ID_TEXTCTRL30, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL30"));
	FlexGridSizer40->Add(K1G4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1G4 = new wxStaticText(this, ID_STATICTEXT29, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	FlexGridSizer40->Add(NazwaK1G4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer40, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer41 = new wxFlexGridSizer(0, 5, 0, 0);
	NazwaK1H3 = new wxStaticText(this, ID_STATICTEXT25, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	FlexGridSizer41->Add(NazwaK1H3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1H3 = new wxTextCtrl(this, ID_TEXTCTRL24, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL24"));
	FlexGridSizer41->Add(K1H3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine23 = new wxStaticLine(this, ID_STATICLINE23, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE23"));
	FlexGridSizer41->Add(StaticLine23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	K1H4 = new wxTextCtrl(this, ID_TEXTCTRL32, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL32"));
	FlexGridSizer41->Add(K1H4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	NazwaK1H4 = new wxStaticText(this, ID_STATICTEXT31, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	FlexGridSizer41->Add(NazwaK1H4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer41, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25 = new wxFlexGridSizer(0, 3, 0, 0);
	Zatwierz = new wxButton(this, ID_BUTTON1, _("Zatwierdz"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer25->Add(Zatwierz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	LosujG = new wxButton(this, ID_BUTTON2, _("Losuj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer25->Add(LosujG, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&MeczeA::OnamText);
	Connect(ID_TEXTCTRL10,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&MeczeA::OnTextCtrl4Text);
	Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&MeczeA::OnM2A3Text);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MeczeA::OnZatwierzClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MeczeA::OnLosujGClick);
	//*)





    //USTAWIAMY NAZWY W POSZCZEGOLNYCH KOLEJKACH

    if(ktora_kolejka==1)
    {
    KolejkaX->SetLabel(_("Kolejka 1"));
    #define UN(A, i, j) NazwaK1 ## A ## i -> SetLabel(A.d ## j .GetNazwa());
    #define UstawNazwe(A) UN(A, 1, 1) UN(A, 2, 2) UN(A, 3, 3) UN(A, 4, 4)

    UstawNazwe(A);
    UstawNazwe(B);
    UstawNazwe(C);
    UstawNazwe(D);
    UstawNazwe(E);
    UstawNazwe(F);
    UstawNazwe(G);
    UstawNazwe(H);

    }

    if(ktora_kolejka==2)
    {
    KolejkaX->SetLabel(_("Kolejka 2"));
    #define UN(A, i, j) NazwaK1 ## A ## i -> SetLabel(A.d ## j .GetNazwa());
    #define UstawNazwe(A) UN(A, 1, 1) UN(A, 2, 3) UN(A, 3, 2) UN(A, 4, 4)

    UstawNazwe(A);
    UstawNazwe(B);
    UstawNazwe(C);
    UstawNazwe(D);
    UstawNazwe(E);
    UstawNazwe(F);
    UstawNazwe(G);
    UstawNazwe(H);

    }

    if(ktora_kolejka==3)
    {
    KolejkaX->SetLabel(_("Kolejka 3"));
    #define UN(A, i, j) NazwaK1 ## A ## i -> SetLabel(A.d ## j .GetNazwa());
    #define UstawNazwe(A) UN(A, 1, 1) UN(A, 2, 4) UN(A, 3, 2) UN(A, 4, 3)

    UstawNazwe(A);
    UstawNazwe(B);
    UstawNazwe(C);
    UstawNazwe(D);
    UstawNazwe(E);
    UstawNazwe(F);
    UstawNazwe(G);
    UstawNazwe(H);

    }


    mundial -> Close();

	Fit();
	Centre();
}

MeczeA::~MeczeA()
{
	//(*Destroy(MeczeA)
	//*)
}


void MeczeA::OnamText(wxCommandEvent& event)
{

}

extern wxDialog * menu;

void MeczeA::OnZatwierzClick(wxCommandEvent& event)
{
        #define n(A,i) !(K1 ## A ## i ->GetValue()).IsNumber() ||
        #define num(A) n(A,1) n(A,2) n(A,3) n(A,4)

        #define p(A,i) wxAtoi(K1 ## A ## i ->GetValue())<0 ||
        #define poz(A) p(A,1) p(A,2) p(A,3) p(A,4)

        if(num(A)
           num(B)
           num(C)
           num(D)
           num(E)
           num(F)
           num(G)
        !(K1H1->GetValue()).IsNumber() ||
        !(K1H2->GetValue()).IsNumber() ||
        !(K1H3->GetValue()).IsNumber() ||
        !(K1H4->GetValue()).IsNumber()
           )
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
        else if(poz(A)
                poz(B)
                poz(C)
                poz(D)
                poz(E)
                poz(F)
                poz(G)
                wxAtoi(K1H1->GetValue())<0 ||
                wxAtoi(K1H2->GetValue())<0 ||
                wxAtoi(K1H3->GetValue())<0 ||
                wxAtoi(K1H4->GetValue())<0
                )
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
        else{



    //Makro dodawanie meczy dla kolejki 1


    //KOLEJKA 1

    if(ktora_kolejka==1)
    {
    #define UN(A, i, k, l, m) A.dodaj_mecz(A.d ## l, A.d ## m , K1 ## A ## i ->GetValue(), K1 ## A ## k ->GetValue());
    #define DodajMecz(A) UN(A, 1, 2, 1, 2) UN(A, 3, 4, 3, 4)

    DodajMecz(A);
    DodajMecz(B);
    DodajMecz(C);
    DodajMecz(D);
    DodajMecz(E);
    DodajMecz(F);
    DodajMecz(G);
    DodajMecz(H);
    }

    //KOLEJKA 2

    if (ktora_kolejka==2)
    {

    #define UN(A, i, k, l, m) A.dodaj_mecz(A.tablica[l-1], A.tablica[m-1], K1 ## A ## i ->GetValue(), K1 ## A ## k ->GetValue());
    #define DodajMecz(A) UN(A, 1, 2, 1, 3) UN(A, 3, 2, 2, 4)

    DodajMecz(A);
    DodajMecz(B);
    DodajMecz(C);
    DodajMecz(D);
    DodajMecz(E);
    DodajMecz(F);
    DodajMecz(G);
    DodajMecz(H);
    }

    //KOLEJKA 3

    if (ktora_kolejka==3)
    {

    #define UN(A, i, k, l, m) A.dodaj_mecz(A.tablica[l-1], A.tablica[m-1], K1 ## A ## i ->GetValue(), K1 ## A ## k ->GetValue());
    #define DodajMecz(A) UN(A, 1, 2, 1, 4) UN(A, 3, 4, 2, 3)

    DodajMecz(A);
    DodajMecz(B);
    DodajMecz(C);
    DodajMecz(D);
    DodajMecz(E);
    DodajMecz(F);
    DodajMecz(G);
    DodajMecz(H);
    }



    menu = this;
    MundialDialog d2g(0);
    d2g.ShowModal();

        }

}

void MeczeA::OnM2A3Text(wxCommandEvent& event)
{
}

void MeczeA::OnTextCtrl4Text(wxCommandEvent& event)
{
}

void MeczeA::OnLosujGClick(wxCommandEvent& event)
{
    losuj(32, losowanie);

    #define los(A, i, z) K1 ## A ## i->SetValue(wxString::Format("%d", losowanie[z]));

    los(A, 1, 0)
    los(A, 2, 1)
    los(A, 3, 2)
    los(A, 4, 3)

    los(B, 1, 5)
    los(B, 2, 6)
    los(B, 3, 7)
    los(B, 4, 8)

    los(C, 1, 9)
    los(C, 2, 10)
    los(C, 3, 11)
    los(C, 4, 12)

    los(D, 1, 13)
    los(D, 2, 14)
    los(D, 3, 15)
    los(D, 4, 16)

    los(E, 1, 17)
    los(E, 2, 18)
    los(E, 3, 19)
    los(E, 4, 20)

    los(F, 1, 21)
    los(F, 2, 22)
    los(F, 3, 23)
    los(F, 4, 24)

    los(G, 1, 25)
    los(G, 2, 26)
    los(G, 3, 27)
    los(G, 4, 28)

    los(H, 1, 29)
    los(H, 2, 30)
    los(H, 3, 31)
    los(H, 4, 4)


}
