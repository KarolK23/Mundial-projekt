#include "JUFinalu.h"
#include "FazaPucharowa.h"
#include "Grupa.h"
#include "Druzyna.h"
#include <wx/msgdlg.h>
#include "Remis.h"
#include <cstdlib>
#include <ctime>

//(*InternalHeaders(JUFinalu)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)
#undef _
#define _(s) wxString::FromUTF8(s)
//(*IdInit(JUFinalu)
const long JUFinalu::ID_STATICTEXT17 = wxNewId();
const long JUFinalu::ID_STATICTEXT1 = wxNewId();
const long JUFinalu::ID_TEXTCTRL1 = wxNewId();
const long JUFinalu::ID_STATICLINE1 = wxNewId();
const long JUFinalu::ID_TEXTCTRL2 = wxNewId();
const long JUFinalu::ID_STATICTEXT2 = wxNewId();
const long JUFinalu::ID_STATICTEXT3 = wxNewId();
const long JUFinalu::ID_TEXTCTRL3 = wxNewId();
const long JUFinalu::ID_STATICLINE2 = wxNewId();
const long JUFinalu::ID_TEXTCTRL4 = wxNewId();
const long JUFinalu::ID_STATICTEXT4 = wxNewId();
const long JUFinalu::ID_STATICTEXT5 = wxNewId();
const long JUFinalu::ID_TEXTCTRL5 = wxNewId();
const long JUFinalu::ID_STATICLINE3 = wxNewId();
const long JUFinalu::ID_TEXTCTRL6 = wxNewId();
const long JUFinalu::ID_STATICTEXT6 = wxNewId();
const long JUFinalu::ID_STATICTEXT7 = wxNewId();
const long JUFinalu::ID_TEXTCTRL7 = wxNewId();
const long JUFinalu::ID_STATICLINE4 = wxNewId();
const long JUFinalu::ID_TEXTCTRL8 = wxNewId();
const long JUFinalu::ID_STATICTEXT8 = wxNewId();
const long JUFinalu::ID_STATICTEXT9 = wxNewId();
const long JUFinalu::ID_TEXTCTRL9 = wxNewId();
const long JUFinalu::ID_STATICLINE5 = wxNewId();
const long JUFinalu::ID_TEXTCTRL10 = wxNewId();
const long JUFinalu::ID_STATICTEXT10 = wxNewId();
const long JUFinalu::ID_STATICTEXT11 = wxNewId();
const long JUFinalu::ID_TEXTCTRL11 = wxNewId();
const long JUFinalu::ID_STATICLINE6 = wxNewId();
const long JUFinalu::ID_TEXTCTRL12 = wxNewId();
const long JUFinalu::ID_STATICTEXT12 = wxNewId();
const long JUFinalu::ID_STATICTEXT13 = wxNewId();
const long JUFinalu::ID_TEXTCTRL13 = wxNewId();
const long JUFinalu::ID_STATICLINE7 = wxNewId();
const long JUFinalu::ID_TEXTCTRL14 = wxNewId();
const long JUFinalu::ID_STATICTEXT14 = wxNewId();
const long JUFinalu::ID_STATICTEXT15 = wxNewId();
const long JUFinalu::ID_TEXTCTRL15 = wxNewId();
const long JUFinalu::ID_STATICLINE8 = wxNewId();
const long JUFinalu::ID_TEXTCTRL16 = wxNewId();
const long JUFinalu::ID_STATICTEXT16 = wxNewId();
const long JUFinalu::ID_BUTTON1 = wxNewId();
const long JUFinalu::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(JUFinalu,wxDialog)
	//(*EventTable(JUFinalu)
	//*)
END_EVENT_TABLE()

wxDialog * fazap;
extern Grupa A, B, C, D, E, F, G, H;
extern wxDialog * juf;
Druzyna playoff[16];
Druzyna remis[2];
extern Druzyna cwierc[8];
extern Druzyna pol[4];
extern Druzyna Final[2];
extern Druzyna baraze[2];
extern int faza;
extern wxDialog * menu;
extern int faza;
Druzyna miejsce3;
Druzyna miejsce2;
Druzyna miejsce1;
int losowane[16];


JUFinalu::JUFinalu(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(JUFinalu)
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
	wxFlexGridSizer* FlexGridSizer22;
	wxFlexGridSizer* FlexGridSizer24;
	wxFlexGridSizer* FlexGridSizer27;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer35;
	wxFlexGridSizer* FlexGridSizer36;
	wxFlexGridSizer* FlexGridSizer37;
	wxFlexGridSizer* FlexGridSizer38;
	wxFlexGridSizer* FlexGridSizer39;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer40;
	wxFlexGridSizer* FlexGridSizer41;
	wxFlexGridSizer* FlexGridSizer42;
	wxFlexGridSizer* FlexGridSizer43;
	wxFlexGridSizer* FlexGridSizer44;
	wxFlexGridSizer* FlexGridSizer45;
	wxFlexGridSizer* FlexGridSizer46;
	wxFlexGridSizer* FlexGridSizer47;
	wxFlexGridSizer* FlexGridSizer48;
	wxFlexGridSizer* FlexGridSizer49;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer50;
	wxFlexGridSizer* FlexGridSizer60;
	wxFlexGridSizer* FlexGridSizer66;
	wxFlexGridSizer* FlexGridSizer67;
	wxFlexGridSizer* FlexGridSizer68;
	wxFlexGridSizer* FlexGridSizer69;
	wxFlexGridSizer* FlexGridSizer70;
	wxFlexGridSizer* FlexGridSizer71;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer9;

	Create(parent, wxID_ANY, _("Wyniki meczy"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
	SetClientSize(wxSize(600,400));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	Nazwa = new wxStaticText(this, ID_STATICTEXT17, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	wxFont NazwaFont(18,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	Nazwa->SetFont(NazwaFont);
	FlexGridSizer1->Add(Nazwa, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2 = new wxFlexGridSizer(0, 5, 0, 0);
	FlexGridSizer14 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer14->Add(STJU1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer66 = new wxFlexGridSizer(8, 3, 0, 0);
	TCJU1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer66->Add(TCJU1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer66, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer3->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU2 = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer7->Add(TCJU2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU2 = new wxStaticText(this, ID_STATICTEXT2, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer8->Add(STJU2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU3 = new wxStaticText(this, ID_STATICTEXT3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer13->Add(STJU3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU3 = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer24->Add(TCJU3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer9->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer15 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	FlexGridSizer15->Add(TCJU4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU4 = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer16->Add(STJU4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer12 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU5 = new wxStaticText(this, ID_STATICTEXT5, _("Label1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer12->Add(STJU5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer60 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	FlexGridSizer60->Add(TCJU5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
	FlexGridSizer17->Add(StaticLine3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	FlexGridSizer18->Add(TCJU6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU6 = new wxStaticText(this, ID_STATICTEXT6, _("Label2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer19->Add(STJU6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU7 = new wxStaticText(this, ID_STATICTEXT7, _("Label3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer22->Add(STJU7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer67 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU7 = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	FlexGridSizer67->Add(TCJU7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer67, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer35 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
	FlexGridSizer35->Add(StaticLine4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer36 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU8 = new wxTextCtrl(this, ID_TEXTCTRL8, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	FlexGridSizer36->Add(TCJU8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer37 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU8 = new wxStaticText(this, ID_STATICTEXT8, _("Label4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer37->Add(STJU8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU9 = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer27->Add(STJU9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer68 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU9 = new wxTextCtrl(this, ID_TEXTCTRL9, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	FlexGridSizer68->Add(TCJU9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer68, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer38 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine5 = new wxStaticLine(this, ID_STATICLINE5, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE5"));
	FlexGridSizer38->Add(StaticLine5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer39 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU10 = new wxTextCtrl(this, ID_TEXTCTRL10, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	FlexGridSizer39->Add(TCJU10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer40 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU10 = new wxStaticText(this, ID_STATICTEXT10, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer40->Add(STJU10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer42 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU11 = new wxStaticText(this, ID_STATICTEXT11, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer42->Add(STJU11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer69 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU11 = new wxTextCtrl(this, ID_TEXTCTRL11, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	FlexGridSizer69->Add(TCJU11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer69, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer41 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine6 = new wxStaticLine(this, ID_STATICLINE6, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE6"));
	FlexGridSizer41->Add(StaticLine6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer43 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU12 = new wxTextCtrl(this, ID_TEXTCTRL12, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	FlexGridSizer43->Add(TCJU12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer44 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU12 = new wxStaticText(this, ID_STATICTEXT12, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer44->Add(STJU12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer11 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU13 = new wxStaticText(this, ID_STATICTEXT13, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	FlexGridSizer11->Add(STJU13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer70 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU13 = new wxTextCtrl(this, ID_TEXTCTRL13, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	FlexGridSizer70->Add(TCJU13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer70, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer45 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine7 = new wxStaticLine(this, ID_STATICLINE7, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE7"));
	FlexGridSizer45->Add(StaticLine7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer46 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU14 = new wxTextCtrl(this, ID_TEXTCTRL14, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	FlexGridSizer46->Add(TCJU14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer47 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU14 = new wxStaticText(this, ID_STATICTEXT14, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer47->Add(STJU14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU15 = new wxStaticText(this, ID_STATICTEXT15, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer10->Add(STJU15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer71 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU15 = new wxTextCtrl(this, ID_TEXTCTRL15, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	FlexGridSizer71->Add(TCJU15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer48 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticLine8 = new wxStaticLine(this, ID_STATICLINE8, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE8"));
	FlexGridSizer48->Add(StaticLine8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer49 = new wxFlexGridSizer(0, 3, 0, 0);
	TCJU16 = new wxTextCtrl(this, ID_TEXTCTRL16, wxEmptyString, wxDefaultPosition, wxSize(30,23), 0, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	FlexGridSizer49->Add(TCJU16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer50 = new wxFlexGridSizer(0, 3, 0, 0);
	STJU16 = new wxStaticText(this, ID_STATICTEXT16, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	FlexGridSizer50->Add(STJU16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	Zatwierdz = new wxButton(this, ID_BUTTON1, _("Zatwierdź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer4->Add(Zatwierdz, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON2, _("Losuj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer4->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&JUFinalu::OnZatwierdzClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&JUFinalu::OnLosujClick);
	//*)

if(faza == 1)

{
    Nazwa->SetLabel(_("1/8 Finału"));
    STJU1->SetLabel(playoff[0].GetNazwa());
    STJU2->SetLabel(playoff[1].GetNazwa());

    STJU3->SetLabel(playoff[2].GetNazwa());
    STJU4->SetLabel(playoff[3].GetNazwa());

    STJU5->SetLabel(playoff[4].GetNazwa());
    STJU6->SetLabel(playoff[5].GetNazwa());

    STJU7->SetLabel(playoff[6].GetNazwa());
    STJU8->SetLabel(playoff[7].GetNazwa());

    STJU9->SetLabel(playoff[8].GetNazwa());
    STJU10->SetLabel(playoff[9].GetNazwa());

    STJU11->SetLabel(playoff[10].GetNazwa());
    STJU12->SetLabel(playoff[11].GetNazwa());

    STJU13->SetLabel(playoff[12].GetNazwa());
    STJU14->SetLabel(playoff[13].GetNazwa());

    STJU15->SetLabel(playoff[14].GetNazwa());
    STJU16->SetLabel(playoff[15].GetNazwa());

}

if(faza == 2)
{
    Nazwa->SetLabel(_("Ćwierćfinał"));
    STJU1->SetLabel(cwierc[0].GetNazwa());
    STJU2->SetLabel(cwierc[1].GetNazwa());

    STJU3->SetLabel(cwierc[2].GetNazwa());
    STJU4->SetLabel(cwierc[3].GetNazwa());

    STJU5->SetLabel(cwierc[4].GetNazwa());
    STJU6->SetLabel(cwierc[5].GetNazwa());

    STJU7->SetLabel(cwierc[6].GetNazwa());
    STJU8->SetLabel(cwierc[7].GetNazwa());


    STJU9->Destroy();
    STJU10->Destroy();
    STJU11->Destroy();
    STJU12->Destroy();
    STJU13->Destroy();
    STJU14->Destroy();
    STJU15->Destroy();
    STJU16->Destroy();
    TCJU9->Destroy();
    TCJU10->Destroy();
    TCJU11->Destroy();
    TCJU12->Destroy();
    TCJU13->Destroy();
    TCJU14->Destroy();
    TCJU15->Destroy();
    TCJU16->Destroy();
    StaticLine8->Destroy();
    StaticLine7->Destroy();
    StaticLine6->Destroy();
    StaticLine5->Destroy();
}

if(faza == 3)
{
    Nazwa->SetLabel(_("Półfinał"));
    STJU1->SetLabel(pol[0].GetNazwa());
    STJU2->SetLabel(pol[1].GetNazwa());

    STJU3->SetLabel(pol[2].GetNazwa());
    STJU4->SetLabel(pol[3].GetNazwa());

    STJU9->Destroy();
    STJU10->Destroy();
    STJU11->Destroy();
    STJU12->Destroy();
    STJU13->Destroy();
    STJU14->Destroy();
    STJU15->Destroy();
    STJU16->Destroy();
    TCJU9->Destroy();
    TCJU10->Destroy();
    TCJU11->Destroy();
    TCJU12->Destroy();
    TCJU13->Destroy();
    TCJU14->Destroy();
    TCJU15->Destroy();
    TCJU16->Destroy();
    StaticLine8->Destroy();
    StaticLine7->Destroy();
    StaticLine6->Destroy();
    StaticLine5->Destroy();
    TCJU7->Destroy();
    TCJU8->Destroy();
    StaticLine4->Destroy();
    STJU8->Destroy();
    STJU7->Destroy();
    TCJU5->Destroy();
    TCJU6->Destroy();
    StaticLine3->Destroy();
    STJU5->Destroy();
    STJU6->Destroy();

}

if(faza == 4)
{
    Nazwa->SetLabel(_("Mecz o 3 miejsce"));
    STJU1->SetLabel(baraze[0].GetNazwa());
    STJU2->SetLabel(baraze[1].GetNazwa());

    STJU9->Destroy();
    STJU10->Destroy();
    STJU11->Destroy();
    STJU12->Destroy();
    STJU13->Destroy();
    STJU14->Destroy();
    STJU15->Destroy();
    STJU16->Destroy();
    TCJU9->Destroy();
    TCJU10->Destroy();
    TCJU11->Destroy();
    TCJU12->Destroy();
    TCJU13->Destroy();
    TCJU14->Destroy();
    TCJU15->Destroy();
    TCJU16->Destroy();
    StaticLine8->Destroy();
    StaticLine7->Destroy();
    StaticLine6->Destroy();
    StaticLine5->Destroy();
    TCJU7->Destroy();
    TCJU8->Destroy();
    StaticLine4->Destroy();
    STJU8->Destroy();
    STJU7->Destroy();
    TCJU5->Destroy();
    TCJU6->Destroy();
    StaticLine3->Destroy();
    STJU5->Destroy();
    STJU6->Destroy();
    STJU3->Destroy();
    STJU4->Destroy();
    StaticLine2->Destroy();
    TCJU4->Destroy();
    TCJU3->Destroy();
}

if (faza == 5)
{
    Nazwa->SetLabel(_("Wielki Finał"));
    STJU1->SetLabel(Final[0].GetNazwa());
    STJU2->SetLabel(Final[1].GetNazwa());

    STJU9->Destroy();
    STJU10->Destroy();
    STJU11->Destroy();
    STJU12->Destroy();
    STJU13->Destroy();
    STJU14->Destroy();
    STJU15->Destroy();
    STJU16->Destroy();
    TCJU9->Destroy();
    TCJU10->Destroy();
    TCJU11->Destroy();
    TCJU12->Destroy();
    TCJU13->Destroy();
    TCJU14->Destroy();
    TCJU15->Destroy();
    TCJU16->Destroy();
    StaticLine8->Destroy();
    StaticLine7->Destroy();
    StaticLine6->Destroy();
    StaticLine5->Destroy();
    TCJU7->Destroy();
    TCJU8->Destroy();
    StaticLine4->Destroy();
    STJU8->Destroy();
    STJU7->Destroy();
    TCJU5->Destroy();
    TCJU6->Destroy();
    StaticLine3->Destroy();
    STJU5->Destroy();
    STJU6->Destroy();
    STJU3->Destroy();
    STJU4->Destroy();
    StaticLine2->Destroy();
    TCJU4->Destroy();
    TCJU3->Destroy();
}

    Fit();
    Centre();
    fazap->Close();
}



JUFinalu::~JUFinalu()
{
	//(*Destroy(JUFinalu)
	//*)
}

void losuj(int n, int tablica[])
{
    srand(time(nullptr));

    for (int i = 0; i < n; i++) {
        tablica[i] = rand() % 6;
    }
}




bool mozna=true;
void JUFinalu::OnZatwierdzClick(wxCommandEvent& event)
{




    if ( ( faza == 1 && (!(TCJU1->GetValue()).IsNumber() ||
          !(TCJU2->GetValue()).IsNumber() ||
          !(TCJU3->GetValue()).IsNumber() ||
          !(TCJU4->GetValue()).IsNumber() ||
          !(TCJU5->GetValue()).IsNumber() ||
          !(TCJU6->GetValue()).IsNumber() ||
          !(TCJU7->GetValue()).IsNumber() ||
          !(TCJU8->GetValue()).IsNumber() ||
          !(TCJU9->GetValue()).IsNumber() ||
          !(TCJU10->GetValue()).IsNumber() ||
          !(TCJU11->GetValue()).IsNumber() ||
          !(TCJU12->GetValue()).IsNumber() ||
          !(TCJU13->GetValue()).IsNumber() ||
          !(TCJU14->GetValue()).IsNumber() ||
          !(TCJU15->GetValue()).IsNumber() ||
          !(TCJU16->GetValue()).IsNumber()))
        ||
        ( faza == 2 && (!(TCJU1->GetValue()).IsNumber() ||
          !(TCJU2->GetValue()).IsNumber() ||
          !(TCJU3->GetValue()).IsNumber() ||
          !(TCJU4->GetValue()).IsNumber() ||
          !(TCJU5->GetValue()).IsNumber() ||
          !(TCJU6->GetValue()).IsNumber() ||
          !(TCJU7->GetValue()).IsNumber() ||
          !(TCJU8->GetValue()).IsNumber()))
        ||
        ( faza == 3 && (!(TCJU1->GetValue()).IsNumber() ||
          !(TCJU2->GetValue()).IsNumber() ||
          !(TCJU3->GetValue()).IsNumber() ||
          !(TCJU4->GetValue()).IsNumber()))
        ||
        ( faza == 4 && (!(TCJU1->GetValue()).IsNumber() ||
          !(TCJU2->GetValue()).IsNumber()))
        ||
        ( faza == 5 && (!(TCJU1->GetValue()).IsNumber() ||
          !(TCJU2->GetValue()).IsNumber()))
        )
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
    else if ( (faza == 1 && (wxAtoi(TCJU1->GetValue())<0 ||
                             wxAtoi(TCJU2->GetValue())<0 ||
                             wxAtoi(TCJU3->GetValue())<0 ||
                             wxAtoi(TCJU4->GetValue())<0 ||
                             wxAtoi(TCJU5->GetValue())<0 ||
                             wxAtoi(TCJU6->GetValue())<0 ||
                             wxAtoi(TCJU7->GetValue())<0 ||
                             wxAtoi(TCJU8->GetValue())<0 ||
                             wxAtoi(TCJU9->GetValue())<0 ||
                             wxAtoi(TCJU10->GetValue())<0 ||
                             wxAtoi(TCJU11->GetValue())<0 ||
                             wxAtoi(TCJU12->GetValue())<0 ||
                             wxAtoi(TCJU13->GetValue())<0 ||
                             wxAtoi(TCJU14->GetValue())<0 ||
                             wxAtoi(TCJU15->GetValue())<0 ||
                             wxAtoi(TCJU16->GetValue())<0))
               ||
               (faza == 2 && (wxAtoi(TCJU1->GetValue())<0 ||
                             wxAtoi(TCJU2->GetValue())<0 ||
                             wxAtoi(TCJU3->GetValue())<0 ||
                             wxAtoi(TCJU4->GetValue())<0 ||
                             wxAtoi(TCJU5->GetValue())<0 ||
                             wxAtoi(TCJU6->GetValue())<0 ||
                             wxAtoi(TCJU7->GetValue())<0 ||
                             wxAtoi(TCJU8->GetValue())<0))
             ||
             (faza == 3 && (wxAtoi(TCJU1->GetValue())<0 ||
                             wxAtoi(TCJU2->GetValue())<0 ||
                             wxAtoi(TCJU3->GetValue())<0 ||
                             wxAtoi(TCJU4->GetValue())<0))
             ||
             (faza == 4 && (wxAtoi(TCJU1->GetValue())<0 ||
                             wxAtoi(TCJU2->GetValue())<0))
             ||
             (faza == 5 && (wxAtoi(TCJU1->GetValue())<0 ||
                             wxAtoi(TCJU2->GetValue())<0))
               )
        wxMessageBox(_("Proszę podać prawidłowe wartości."), _("BŁĄD"));
    else{

#define A(x, y, z) if( wxAtoi(TCJU ## x ->GetValue()) > wxAtoi(TCJU ## y ->GetValue()) )\
                cwierc[z]=playoff[x-1];                                                 \
            else if( wxAtoi(TCJU ## x ->GetValue()) < wxAtoi(TCJU ## y ->GetValue()))   \
                cwierc[z]=playoff[y-1];                                                 \
            else                                                                        \
                {                                                                       \
                    remis[0]=playoff[x-1]; remis[1]=playoff[y-1];                       \
                    cout << remis[0].GetNazwa() << endl << remis[1].GetNazwa() << endl; \
                    Remis re(0);                                                        \
                    re.ShowModal();                                                     \
                    if(remis[0].GetKarne()>remis[1].GetKarne())                         \
                        cwierc[z]=remis[0];                                             \
                    else                                                                \
                        cwierc[z]=remis[1];                                             \
                    playoff[x-1]=remis[0]; playoff[y-1]=remis[1];                       \
                }                                                                       \
                playoff[x-1].SetBz( TCJU ## x ->GetValue() );                           \
                playoff[y-1].SetBz( TCJU ## y ->GetValue() );

if(faza == 1)
{
    A(1,2,0);
    A(3,4,1);
    A(5,6,2);
    A(7,8,3);
    A(9,10,4);
    A(11,12,5);
    A(13,14,6);
    A(15,16,7);

}





#define A(x, y, z) if( wxAtoi(TCJU ## x ->GetValue()) > wxAtoi(TCJU ## y ->GetValue()) )\
                pol[z]=cwierc[x-1];                                                     \
            else if( wxAtoi(TCJU ## x ->GetValue()) < wxAtoi(TCJU ## y ->GetValue()))   \
                pol[z]=cwierc[y-1];                                                     \
            else                                                                        \
                {                                                                       \
                    remis[0]=cwierc[x-1]; remis[1]=cwierc[y-1];                         \
                    cout << remis[0].GetNazwa() << endl << remis[1].GetNazwa() << endl; \
                    Remis re(0);                                                        \
                    re.ShowModal();                                                     \
                    if(remis[0].GetKarne()>remis[1].GetKarne())                         \
                        pol[z]=remis[0];                                                \
                    else                                                                \
                        pol[z]=remis[1];                                                \
                    cwierc[x-1]=remis[0]; cwierc[y-1]=remis[1];                         \
                }                                                                       \
                cwierc[x-1].SetBz( TCJU ## x ->GetValue() );                            \
                cwierc[y-1].SetBz( TCJU ## y ->GetValue() );

if(faza == 2)
{
    A(1,2,0);
    A(3,4,1);
    A(5,6,2);
    A(7,8,3);
}

#define F(x, y, z) if( wxAtoi(TCJU ## x ->GetValue()) > wxAtoi(TCJU ## y ->GetValue()) )\
                {Final[z]=pol[x-1];                                                     \
                baraze[z]=pol[y-1];}                                                    \
            else if( wxAtoi(TCJU ## x ->GetValue()) < wxAtoi(TCJU ## y ->GetValue()))   \
                {Final[z]=pol[y-1];                                                     \
                baraze[z]=pol[x-1];}                                                    \
            else                                                                        \
                {                                                                       \
                    remis[0]=pol[x-1]; remis[1]=pol[y-1];                               \
                    cout << remis[0].GetNazwa() << endl << remis[1].GetNazwa() << endl; \
                    Remis re(0);                                                        \
                    re.ShowModal();                                                     \
                    if(remis[0].GetKarne()>remis[1].GetKarne())                         \
                        {Final[z]=remis[0];                                             \
                        baraze[z]=remis[1];}                                            \
                    else                                                                \
                        {Final[z]=remis[1];                                             \
                        baraze[z]=remis[0];}                                            \
                    pol[x-1]=remis[0]; pol[y-1]=remis[1];                               \
                }                                                                       \
                pol[x-1].SetBz( TCJU ## x ->GetValue() );                               \
                pol[y-1].SetBz( TCJU ## y ->GetValue() );


if(faza == 3)
{
    F(1,2,0);
    F(3,4,1);

}



if(faza == 4)
{
    if( wxAtoi(TCJU1->GetValue()) > wxAtoi(TCJU2->GetValue()) )\
                miejsce3=baraze[0];
            else if( wxAtoi(TCJU1->GetValue()) < wxAtoi(TCJU2->GetValue()))
                miejsce3=baraze[1];
            else
                {
                    remis[0]=baraze[0]; remis[1]=baraze[1];
                    Remis re(0);
                    re.ShowModal();
                    if(remis[0].GetKarne()>remis[1].GetKarne())
                        miejsce3=baraze[0];
                    else
                        miejsce3=baraze[1];
                    baraze[0]=remis[0]; baraze[1]=remis[1];
                }
                baraze[0].SetBz( TCJU1->GetValue() );
                baraze[1].SetBz( TCJU2->GetValue() );

}

if (faza == 5)
{
        if( wxAtoi(TCJU1->GetValue()) > wxAtoi(TCJU2->GetValue()) )\
                {miejsce1=Final[0];
                miejsce2=Final[1];}
            else if( wxAtoi(TCJU1->GetValue()) < wxAtoi(TCJU2->GetValue()))
                {miejsce1=Final[1];
                miejsce2=Final[0];}
            else
                {
                    remis[0]=Final[0]; remis[1]=Final[1];
                    Remis re(0);
                    re.ShowModal();
                    if(remis[0].GetKarne()>remis[1].GetKarne())
                        {miejsce1=Final[0];
                        miejsce2=Final[1];}
                    else
                        {miejsce1=Final[1];
                         miejsce2=Final[0];}
                    Final[0]=remis[0]; Final[1]=remis[1];
                }
                Final[0].SetBz( TCJU1->GetValue() );
                Final[1].SetBz( TCJU2->GetValue() );

}


    menu = this;
    FazaPucharowa d2g(0);
    d2g.ShowModal();

    }
}

void JUFinalu::OnLosujClick(wxCommandEvent& event)
{
    #define los(x) TCJU ## x ->SetValue(wxString::Format("%d", losowane[x-1]));
    losuj(16, losowane);

    los(1);
    los(2);
    los(3);
    los(4);
    los(5);
    los(6);
    los(7);
    los(8);
    los(9);
    los(10);
    los(11);
    los(12);
    los(13);
    los(14);
    los(15);
    los(16);


}
