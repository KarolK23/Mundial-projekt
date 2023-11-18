#include "FazaPucharowa.h"
#include "JUFinalu.h"


//(*InternalHeaders(FazaPucharowa)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//(*IdInit(FazaPucharowa)
const long FazaPucharowa::ID_STATICLINE15 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT6 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT38 = wxNewId();
const long FazaPucharowa::ID_STATICLINE10 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT40 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT7 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT39 = wxNewId();
const long FazaPucharowa::ID_STATICLINE20 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT8 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT41 = wxNewId();
const long FazaPucharowa::ID_STATICLINE11 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT56 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT9 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT42 = wxNewId();
const long FazaPucharowa::ID_STATICLINE19 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT10 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT43 = wxNewId();
const long FazaPucharowa::ID_STATICLINE12 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT57 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT12 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT44 = wxNewId();
const long FazaPucharowa::ID_STATICLINE17 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT11 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT45 = wxNewId();
const long FazaPucharowa::ID_STATICLINE13 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT58 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT13 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT46 = wxNewId();
const long FazaPucharowa::ID_STATICLINE16 = wxNewId();
const long FazaPucharowa::ID_PANEL10 = wxNewId();
const long FazaPucharowa::ID_STATICLINE25 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT23 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT59 = wxNewId();
const long FazaPucharowa::ID_STATICLINE14 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT60 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT26 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT61 = wxNewId();
const long FazaPucharowa::ID_STATICLINE26 = wxNewId();
const long FazaPucharowa::ID_PANEL2 = wxNewId();
const long FazaPucharowa::ID_PANEL6 = wxNewId();
const long FazaPucharowa::ID_PANEL5 = wxNewId();
const long FazaPucharowa::ID_STATICLINE23 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT25 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT62 = wxNewId();
const long FazaPucharowa::ID_STATICLINE18 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT63 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT27 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT64 = wxNewId();
const long FazaPucharowa::ID_STATICLINE24 = wxNewId();
const long FazaPucharowa::ID_PANEL9 = wxNewId();
const long FazaPucharowa::ID_STATICLINE31 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT32 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT71 = wxNewId();
const long FazaPucharowa::ID_STATICLINE32 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT72 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT33 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT73 = wxNewId();
const long FazaPucharowa::ID_STATICLINE33 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT2 = wxNewId();
const long FazaPucharowa::ID_STATICLINE37 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT83 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT34 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT81 = wxNewId();
const long FazaPucharowa::ID_STATICLINE38 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT82 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT35 = wxNewId();
const long FazaPucharowa::ID_STATICBITMAP3 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT84 = wxNewId();
const long FazaPucharowa::ID_STATICBITMAP4 = wxNewId();
const long FazaPucharowa::ID_STATICLINE39 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT1 = wxNewId();
const long FazaPucharowa::ID_STATICLINE40 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT80 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT36 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT77 = wxNewId();
const long FazaPucharowa::ID_STATICLINE41 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT78 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT37 = wxNewId();
const long FazaPucharowa::ID_STATICBITMAP1 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT79 = wxNewId();
const long FazaPucharowa::ID_STATICBITMAP2 = wxNewId();
const long FazaPucharowa::ID_STATICLINE42 = wxNewId();
const long FazaPucharowa::ID_STATICLINE34 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT74 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT30 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT75 = wxNewId();
const long FazaPucharowa::ID_STATICLINE35 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT76 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT31 = wxNewId();
const long FazaPucharowa::ID_STATICLINE36 = wxNewId();
const long FazaPucharowa::ID_PANEL8 = wxNewId();
const long FazaPucharowa::ID_STATICLINE27 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT68 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT22 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT69 = wxNewId();
const long FazaPucharowa::ID_STATICLINE22 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT70 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT28 = wxNewId();
const long FazaPucharowa::ID_STATICLINE28 = wxNewId();
const long FazaPucharowa::ID_PANEL1 = wxNewId();
const long FazaPucharowa::ID_PANEL3 = wxNewId();
const long FazaPucharowa::ID_PANEL4 = wxNewId();
const long FazaPucharowa::ID_STATICLINE29 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT65 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT24 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT66 = wxNewId();
const long FazaPucharowa::ID_STATICLINE21 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT67 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT29 = wxNewId();
const long FazaPucharowa::ID_STATICLINE30 = wxNewId();
const long FazaPucharowa::ID_PANEL7 = wxNewId();
const long FazaPucharowa::ID_STATICLINE5 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT3 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT4 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT5 = wxNewId();
const long FazaPucharowa::ID_STATICLINE1 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT14 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT15 = wxNewId();
const long FazaPucharowa::ID_STATICLINE8 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT16 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT17 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT18 = wxNewId();
const long FazaPucharowa::ID_STATICLINE2 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT20 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT19 = wxNewId();
const long FazaPucharowa::ID_STATICLINE7 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT47 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT21 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT48 = wxNewId();
const long FazaPucharowa::ID_STATICLINE3 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT49 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT50 = wxNewId();
const long FazaPucharowa::ID_STATICLINE9 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT53 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT51 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT54 = wxNewId();
const long FazaPucharowa::ID_STATICLINE4 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT55 = wxNewId();
const long FazaPucharowa::ID_STATICTEXT52 = wxNewId();
const long FazaPucharowa::ID_STATICLINE6 = wxNewId();
const long FazaPucharowa::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FazaPucharowa,wxDialog)
	//(*EventTable(FazaPucharowa)
	//*)
END_EVENT_TABLE()

#undef _
#define _(s) wxString::FromUTF8(s)

extern wxDialog * fazap;
wxDialog * juf;
extern wxDialog * mundial;
extern Grupa A, B, C, D, E, F, G, H;
extern wxDialog * menu;
extern int faza;
extern Druzyna playoff[16];
Druzyna cwierc[8];
Druzyna pol[4];
Druzyna Final[2];
Druzyna baraze[2];
wxBitmap rysunki[3];



FazaPucharowa::FazaPucharowa(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(FazaPucharowa)
	wxFlexGridSizer* FlexGridSizer100;
	wxFlexGridSizer* FlexGridSizer101;
	wxFlexGridSizer* FlexGridSizer102;
	wxFlexGridSizer* FlexGridSizer103;
	wxFlexGridSizer* FlexGridSizer104;
	wxFlexGridSizer* FlexGridSizer105;
	wxFlexGridSizer* FlexGridSizer106;
	wxFlexGridSizer* FlexGridSizer107;
	wxFlexGridSizer* FlexGridSizer108;
	wxFlexGridSizer* FlexGridSizer109;
	wxFlexGridSizer* FlexGridSizer10;
	wxFlexGridSizer* FlexGridSizer110;
	wxFlexGridSizer* FlexGridSizer111;
	wxFlexGridSizer* FlexGridSizer112;
	wxFlexGridSizer* FlexGridSizer113;
	wxFlexGridSizer* FlexGridSizer114;
	wxFlexGridSizer* FlexGridSizer115;
	wxFlexGridSizer* FlexGridSizer116;
	wxFlexGridSizer* FlexGridSizer117;
	wxFlexGridSizer* FlexGridSizer118;
	wxFlexGridSizer* FlexGridSizer119;
	wxFlexGridSizer* FlexGridSizer11;
	wxFlexGridSizer* FlexGridSizer120;
	wxFlexGridSizer* FlexGridSizer121;
	wxFlexGridSizer* FlexGridSizer122;
	wxFlexGridSizer* FlexGridSizer123;
	wxFlexGridSizer* FlexGridSizer124;
	wxFlexGridSizer* FlexGridSizer125;
	wxFlexGridSizer* FlexGridSizer126;
	wxFlexGridSizer* FlexGridSizer127;
	wxFlexGridSizer* FlexGridSizer128;
	wxFlexGridSizer* FlexGridSizer129;
	wxFlexGridSizer* FlexGridSizer12;
	wxFlexGridSizer* FlexGridSizer130;
	wxFlexGridSizer* FlexGridSizer131;
	wxFlexGridSizer* FlexGridSizer132;
	wxFlexGridSizer* FlexGridSizer133;
	wxFlexGridSizer* FlexGridSizer134;
	wxFlexGridSizer* FlexGridSizer135;
	wxFlexGridSizer* FlexGridSizer136;
	wxFlexGridSizer* FlexGridSizer137;
	wxFlexGridSizer* FlexGridSizer138;
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
	wxFlexGridSizer* FlexGridSizer26;
	wxFlexGridSizer* FlexGridSizer27;
	wxFlexGridSizer* FlexGridSizer28;
	wxFlexGridSizer* FlexGridSizer29;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer30;
	wxFlexGridSizer* FlexGridSizer31;
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
	wxFlexGridSizer* FlexGridSizer51;
	wxFlexGridSizer* FlexGridSizer52;
	wxFlexGridSizer* FlexGridSizer53;
	wxFlexGridSizer* FlexGridSizer54;
	wxFlexGridSizer* FlexGridSizer55;
	wxFlexGridSizer* FlexGridSizer56;
	wxFlexGridSizer* FlexGridSizer57;
	wxFlexGridSizer* FlexGridSizer58;
	wxFlexGridSizer* FlexGridSizer59;
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer60;
	wxFlexGridSizer* FlexGridSizer61;
	wxFlexGridSizer* FlexGridSizer62;
	wxFlexGridSizer* FlexGridSizer63;
	wxFlexGridSizer* FlexGridSizer64;
	wxFlexGridSizer* FlexGridSizer65;
	wxFlexGridSizer* FlexGridSizer66;
	wxFlexGridSizer* FlexGridSizer67;
	wxFlexGridSizer* FlexGridSizer68;
	wxFlexGridSizer* FlexGridSizer69;
	wxFlexGridSizer* FlexGridSizer6;
	wxFlexGridSizer* FlexGridSizer70;
	wxFlexGridSizer* FlexGridSizer71;
	wxFlexGridSizer* FlexGridSizer72;
	wxFlexGridSizer* FlexGridSizer73;
	wxFlexGridSizer* FlexGridSizer74;
	wxFlexGridSizer* FlexGridSizer75;
	wxFlexGridSizer* FlexGridSizer76;
	wxFlexGridSizer* FlexGridSizer77;
	wxFlexGridSizer* FlexGridSizer78;
	wxFlexGridSizer* FlexGridSizer79;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer80;
	wxFlexGridSizer* FlexGridSizer81;
	wxFlexGridSizer* FlexGridSizer82;
	wxFlexGridSizer* FlexGridSizer83;
	wxFlexGridSizer* FlexGridSizer84;
	wxFlexGridSizer* FlexGridSizer85;
	wxFlexGridSizer* FlexGridSizer86;
	wxFlexGridSizer* FlexGridSizer87;
	wxFlexGridSizer* FlexGridSizer88;
	wxFlexGridSizer* FlexGridSizer89;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer90;
	wxFlexGridSizer* FlexGridSizer91;
	wxFlexGridSizer* FlexGridSizer92;
	wxFlexGridSizer* FlexGridSizer93;
	wxFlexGridSizer* FlexGridSizer94;
	wxFlexGridSizer* FlexGridSizer95;
	wxFlexGridSizer* FlexGridSizer96;
	wxFlexGridSizer* FlexGridSizer97;
	wxFlexGridSizer* FlexGridSizer98;
	wxFlexGridSizer* FlexGridSizer99;
	wxFlexGridSizer* FlexGridSizer9;

	Create(parent, wxID_ANY, _("Faza pucharowa"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("wxID_ANY"));
	SetClientSize(wxSize(600,700));
	SetMaxSize(wxSize(-1,-1));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	FlexGridSizer1 = new wxFlexGridSizer(4, 7, 0, 0);
	FlexGridSizer6 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine15 = new wxStaticLine(this, ID_STATICLINE15, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE15"));
	FlexGridSizer6->Add(StaticLine15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer60 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP1 = new wxStaticText(this, ID_STATICTEXT6, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer60->Add(STFP1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer60, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer63 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP1 = new wxStaticText(this, ID_STATICTEXT38, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT38"));
	FlexGridSizer63->Add(WFP1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer63, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine10 = new wxStaticLine(this, ID_STATICLINE10, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE10"));
	FlexGridSizer24->Add(StaticLine10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer61 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK12 = new wxStaticText(this, ID_STATICTEXT40, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT40"));
	FlexGridSizer61->Add(WFPK12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer61, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer62 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP2 = new wxStaticText(this, ID_STATICTEXT7, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer62->Add(STFP2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer64 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP2 = new wxStaticText(this, ID_STATICTEXT39, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT39"));
	FlexGridSizer64->Add(WFP2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24->Add(FlexGridSizer64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine20 = new wxStaticLine(this, ID_STATICLINE20, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE20"));
	FlexGridSizer6->Add(StaticLine20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer68 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP3 = new wxStaticText(this, ID_STATICTEXT8, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer68->Add(STFP3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer68, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer65 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP3 = new wxStaticText(this, ID_STATICTEXT41, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT41"));
	FlexGridSizer65->Add(WFP3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer65, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine11 = new wxStaticLine(this, ID_STATICLINE11, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE11"));
	FlexGridSizer23->Add(StaticLine11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer67 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK34 = new wxStaticText(this, ID_STATICTEXT56, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT56"));
	FlexGridSizer67->Add(WFPK34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer67, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer69 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP4 = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer69->Add(STFP4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer69, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer66 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP4 = new wxStaticText(this, ID_STATICTEXT42, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT42"));
	FlexGridSizer66->Add(WFP4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23->Add(FlexGridSizer66, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine19 = new wxStaticLine(this, ID_STATICLINE19, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE19"));
	FlexGridSizer6->Add(StaticLine19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer73 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP5 = new wxStaticText(this, ID_STATICTEXT10, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer73->Add(STFP5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer73, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer70 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP5 = new wxStaticText(this, ID_STATICTEXT43, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT43"));
	FlexGridSizer70->Add(WFP5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer70, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine12 = new wxStaticLine(this, ID_STATICLINE12, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE12"));
	FlexGridSizer22->Add(StaticLine12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer71 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK56 = new wxStaticText(this, ID_STATICTEXT57, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT57"));
	FlexGridSizer71->Add(WFPK56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer72 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP6 = new wxStaticText(this, ID_STATICTEXT12, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer72->Add(STFP6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer72, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer74 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP6 = new wxStaticText(this, ID_STATICTEXT44, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT44"));
	FlexGridSizer74->Add(WFP6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22->Add(FlexGridSizer74, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine17 = new wxStaticLine(this, ID_STATICLINE17, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE17"));
	FlexGridSizer6->Add(StaticLine17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer76 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP7 = new wxStaticText(this, ID_STATICTEXT11, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer76->Add(STFP7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer76, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer75 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP7 = new wxStaticText(this, ID_STATICTEXT45, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT45"));
	FlexGridSizer75->Add(WFP7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer75, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine13 = new wxStaticLine(this, ID_STATICLINE13, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE13"));
	FlexGridSizer21->Add(StaticLine13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer77 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK78 = new wxStaticText(this, ID_STATICTEXT58, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT58"));
	FlexGridSizer77->Add(WFPK78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer77, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer79 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP8 = new wxStaticText(this, ID_STATICTEXT13, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	FlexGridSizer79->Add(STFP8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer79, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer78 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP8 = new wxStaticText(this, ID_STATICTEXT46, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT46"));
	FlexGridSizer78->Add(WFP8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer21->Add(FlexGridSizer78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6->Add(FlexGridSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine16 = new wxStaticLine(this, ID_STATICLINE16, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE16"));
	FlexGridSizer6->Add(StaticLine16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer29 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel10 = new wxPanel(this, ID_PANEL10, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL10"));
	FlexGridSizer29->Add(Panel10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer30 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine25 = new wxStaticLine(this, ID_STATICLINE25, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE25"));
	FlexGridSizer30->Add(StaticLine25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer81 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC1 = new wxStaticText(this, ID_STATICTEXT23, _("-----"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	FlexGridSizer81->Add(STFPC1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58->Add(FlexGridSizer81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer80 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC1 = new wxStaticText(this, ID_STATICTEXT59, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT59"));
	FlexGridSizer80->Add(WFPC1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58->Add(FlexGridSizer80, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine14 = new wxStaticLine(this, ID_STATICLINE14, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE14"));
	FlexGridSizer58->Add(StaticLine14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer82 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKC12 = new wxStaticText(this, ID_STATICTEXT60, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT60"));
	FlexGridSizer82->Add(WFPKC12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58->Add(FlexGridSizer82, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer84 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC2 = new wxStaticText(this, ID_STATICTEXT26, _("-----"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	FlexGridSizer84->Add(STFPC2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58->Add(FlexGridSizer84, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer83 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC2 = new wxStaticText(this, ID_STATICTEXT61, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT61"));
	FlexGridSizer83->Add(WFPC2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer58->Add(FlexGridSizer83, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer30->Add(FlexGridSizer58, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine26 = new wxStaticLine(this, ID_STATICLINE26, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE26"));
	FlexGridSizer30->Add(StaticLine26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer31 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	FlexGridSizer31->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer51 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel6 = new wxPanel(this, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	FlexGridSizer51->Add(Panel6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer52 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel5 = new wxPanel(this, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	FlexGridSizer52->Add(Panel5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer52, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer32 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine23 = new wxStaticLine(this, ID_STATICLINE23, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE23"));
	FlexGridSizer32->Add(StaticLine23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer87 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC3 = new wxStaticText(this, ID_STATICTEXT25, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	FlexGridSizer87->Add(STFPC3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85->Add(FlexGridSizer87, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer86 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC3 = new wxStaticText(this, ID_STATICTEXT62, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT62"));
	FlexGridSizer86->Add(WFPC3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85->Add(FlexGridSizer86, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine18 = new wxStaticLine(this, ID_STATICLINE18, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE18"));
	FlexGridSizer85->Add(StaticLine18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer88 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKC34 = new wxStaticText(this, ID_STATICTEXT63, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT63"));
	FlexGridSizer88->Add(WFPKC34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85->Add(FlexGridSizer88, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer90 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC4 = new wxStaticText(this, ID_STATICTEXT27, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	FlexGridSizer90->Add(STFPC4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85->Add(FlexGridSizer90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer89 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC4 = new wxStaticText(this, ID_STATICTEXT64, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT64"));
	FlexGridSizer89->Add(WFPC4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer85->Add(FlexGridSizer89, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer32->Add(FlexGridSizer85, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine24 = new wxStaticLine(this, ID_STATICLINE24, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE24"));
	FlexGridSizer32->Add(StaticLine24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer47 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel9 = new wxPanel(this, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
	FlexGridSizer47->Add(Panel9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer48 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine31 = new wxStaticLine(this, ID_STATICLINE31, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE31"));
	FlexGridSizer48->Add(StaticLine31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer105 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPP1 = new wxStaticText(this, ID_STATICTEXT32, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT32"));
	FlexGridSizer105->Add(STFPP1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103->Add(FlexGridSizer105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer104 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPP1 = new wxStaticText(this, ID_STATICTEXT71, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT71"));
	FlexGridSizer104->Add(WFPP1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103->Add(FlexGridSizer104, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine32 = new wxStaticLine(this, ID_STATICLINE32, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE32"));
	FlexGridSizer103->Add(StaticLine32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer106 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKP12 = new wxStaticText(this, ID_STATICTEXT72, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT72"));
	FlexGridSizer106->Add(WFPKP12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103->Add(FlexGridSizer106, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer108 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPP2 = new wxStaticText(this, ID_STATICTEXT33, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
	FlexGridSizer108->Add(STFPP2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103->Add(FlexGridSizer108, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer107 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPP2 = new wxStaticText(this, ID_STATICTEXT73, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT73"));
	FlexGridSizer107->Add(WFPP2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer103->Add(FlexGridSizer107, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer48->Add(FlexGridSizer103, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine33 = new wxStaticLine(this, ID_STATICLINE33, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE33"));
	FlexGridSizer48->Add(StaticLine33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8->Add(FlexGridSizer48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer14 = new wxFlexGridSizer(2, 1, 0, 0);
	FlexGridSizer38 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("FINAŁ"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	FlexGridSizer38->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine37 = new wxStaticLine(this, ID_STATICLINE37, wxDefaultPosition, wxSize(280,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE37"));
	FlexGridSizer38->Add(StaticLine37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer125 = new wxFlexGridSizer(4, 5, 0, 0);
	FlexGridSizer126 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer126, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer127 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer127, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT83, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT83"));
	FlexGridSizer125->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer128 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer128, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer129 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer129, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	STFPF1 = new wxStaticText(this, ID_STATICTEXT34, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT34"));
	FlexGridSizer125->Add(STFPF1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFPF1 = new wxStaticText(this, ID_STATICTEXT81, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT81"));
	FlexGridSizer125->Add(WFPF1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine38 = new wxStaticLine(this, ID_STATICLINE38, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE38"));
	FlexGridSizer125->Add(StaticLine38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFPF2 = new wxStaticText(this, ID_STATICTEXT82, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT82"));
	FlexGridSizer125->Add(WFPF2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	STFPF2 = new wxStaticText(this, ID_STATICTEXT35, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT35"));
	FlexGridSizer125->Add(STFPF2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer133 = new wxFlexGridSizer(0, 3, 0, 0);
	zs1 = new wxStaticBitmap(this, ID_STATICBITMAP3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP3"));
	FlexGridSizer133->Add(zs1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer125->Add(FlexGridSizer133, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer132 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer132, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFPKF12 = new wxStaticText(this, ID_STATICTEXT84, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT84"));
	FlexGridSizer125->Add(WFPKF12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer131 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer125->Add(FlexGridSizer131, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer130 = new wxFlexGridSizer(0, 3, 0, 0);
	zs2 = new wxStaticBitmap(this, ID_STATICBITMAP4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP4"));
	FlexGridSizer130->Add(zs2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer125->Add(FlexGridSizer130, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer38->Add(FlexGridSizer125, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine39 = new wxStaticLine(this, ID_STATICLINE39, wxDefaultPosition, wxSize(280,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE39"));
	FlexGridSizer38->Add(StaticLine39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer14->Add(FlexGridSizer38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer37 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("3 MIEJSCE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	FlexGridSizer37->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine40 = new wxStaticLine(this, ID_STATICLINE40, wxDefaultPosition, wxSize(280,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE40"));
	FlexGridSizer37->Add(StaticLine40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer115 = new wxFlexGridSizer(0, 5, 0, 0);
	FlexGridSizer121 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer121, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer122 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer122, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT80, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT80"));
	FlexGridSizer115->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer123 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer123, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer124 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer124, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	STFP31 = new wxStaticText(this, ID_STATICTEXT36, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT36"));
	FlexGridSizer115->Add(STFP31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFP31 = new wxStaticText(this, ID_STATICTEXT77, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT77"));
	FlexGridSizer115->Add(WFP31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine41 = new wxStaticLine(this, ID_STATICLINE41, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE41"));
	FlexGridSizer115->Add(StaticLine41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFP32 = new wxStaticText(this, ID_STATICTEXT78, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT78"));
	FlexGridSizer115->Add(WFP32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	STFP32 = new wxStaticText(this, ID_STATICTEXT37, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT37"));
	FlexGridSizer115->Add(STFP32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer117 = new wxFlexGridSizer(0, 3, 0, 0);
	braz1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	FlexGridSizer117->Add(braz1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer115->Add(FlexGridSizer117, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer116 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer116, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	WFPK312 = new wxStaticText(this, ID_STATICTEXT79, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT79"));
	FlexGridSizer115->Add(WFPK312, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer118 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer115->Add(FlexGridSizer118, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer119 = new wxFlexGridSizer(0, 3, 0, 0);
	braz2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP2"));
	FlexGridSizer119->Add(braz2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer115->Add(FlexGridSizer119, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer37->Add(FlexGridSizer115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine42 = new wxStaticLine(this, ID_STATICLINE42, wxDefaultPosition, wxSize(280,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE42"));
	FlexGridSizer37->Add(StaticLine42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer14->Add(FlexGridSizer37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9->Add(FlexGridSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer12 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer18 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer39 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine34 = new wxStaticLine(this, ID_STATICLINE34, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE34"));
	FlexGridSizer39->Add(StaticLine34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer110 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPP3 = new wxStaticText(this, ID_STATICTEXT74, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT74"));
	FlexGridSizer110->Add(WFPP3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109->Add(FlexGridSizer110, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer111 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPP3 = new wxStaticText(this, ID_STATICTEXT30, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT30"));
	FlexGridSizer111->Add(STFPP3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109->Add(FlexGridSizer111, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer112 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKP34 = new wxStaticText(this, ID_STATICTEXT75, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT75"));
	FlexGridSizer112->Add(WFPKP34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109->Add(FlexGridSizer112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine35 = new wxStaticLine(this, ID_STATICLINE35, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE35"));
	FlexGridSizer109->Add(StaticLine35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer113 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPP4 = new wxStaticText(this, ID_STATICTEXT76, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT76"));
	FlexGridSizer113->Add(WFPP4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109->Add(FlexGridSizer113, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer114 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPP4 = new wxStaticText(this, ID_STATICTEXT31, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	FlexGridSizer114->Add(STFPP4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer109->Add(FlexGridSizer114, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer39->Add(FlexGridSizer109, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine36 = new wxStaticLine(this, ID_STATICLINE36, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE36"));
	FlexGridSizer39->Add(StaticLine36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18->Add(FlexGridSizer39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer12->Add(FlexGridSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer17 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer33 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel8 = new wxPanel(this, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL8"));
	FlexGridSizer33->Add(Panel8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer34 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine27 = new wxStaticLine(this, ID_STATICLINE27, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE27"));
	FlexGridSizer34->Add(StaticLine27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer98 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC5 = new wxStaticText(this, ID_STATICTEXT68, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT68"));
	FlexGridSizer98->Add(WFPC5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91->Add(FlexGridSizer98, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer99 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC5 = new wxStaticText(this, ID_STATICTEXT22, _("-----"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	FlexGridSizer99->Add(STFPC5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91->Add(FlexGridSizer99, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer100 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKC56 = new wxStaticText(this, ID_STATICTEXT69, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT69"));
	FlexGridSizer100->Add(WFPKC56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91->Add(FlexGridSizer100, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine22 = new wxStaticLine(this, ID_STATICLINE22, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE22"));
	FlexGridSizer91->Add(StaticLine22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer101 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC6 = new wxStaticText(this, ID_STATICTEXT70, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT70"));
	FlexGridSizer101->Add(WFPC6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91->Add(FlexGridSizer101, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer102 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC6 = new wxStaticText(this, ID_STATICTEXT28, _("-----"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	FlexGridSizer102->Add(STFPC6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer91->Add(FlexGridSizer102, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer34->Add(FlexGridSizer91, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine28 = new wxStaticLine(this, ID_STATICLINE28, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE28"));
	FlexGridSizer34->Add(StaticLine28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer35 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer35->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer53 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel3 = new wxPanel(this, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	FlexGridSizer53->Add(Panel3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer53, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer54 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel4 = new wxPanel(this, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	FlexGridSizer54->Add(Panel4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer54, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer36 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticLine29 = new wxStaticLine(this, ID_STATICLINE29, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE29"));
	FlexGridSizer36->Add(StaticLine29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92 = new wxFlexGridSizer(3, 2, 0, 0);
	FlexGridSizer93 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC7 = new wxStaticText(this, ID_STATICTEXT65, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT65"));
	FlexGridSizer93->Add(WFPC7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92->Add(FlexGridSizer93, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer94 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC7 = new wxStaticText(this, ID_STATICTEXT24, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
	FlexGridSizer94->Add(STFPC7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92->Add(FlexGridSizer94, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer95 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPKC78 = new wxStaticText(this, ID_STATICTEXT66, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT66"));
	FlexGridSizer95->Add(WFPKC78, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92->Add(FlexGridSizer95, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine21 = new wxStaticLine(this, ID_STATICLINE21, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE21"));
	FlexGridSizer92->Add(StaticLine21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer96 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPC8 = new wxStaticText(this, ID_STATICTEXT67, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT67"));
	FlexGridSizer96->Add(WFPC8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92->Add(FlexGridSizer96, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer97 = new wxFlexGridSizer(0, 3, 0, 0);
	STFPC8 = new wxStaticText(this, ID_STATICTEXT29, _("------"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	FlexGridSizer97->Add(STFPC8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer92->Add(FlexGridSizer97, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer36->Add(FlexGridSizer92, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine30 = new wxStaticLine(this, ID_STATICLINE30, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE30"));
	FlexGridSizer36->Add(StaticLine30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer49 = new wxFlexGridSizer(0, 3, 0, 0);
	Panel7 = new wxPanel(this, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	FlexGridSizer49->Add(Panel7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17->Add(FlexGridSizer49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13->Add(FlexGridSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16 = new wxFlexGridSizer(9, 1, 0, 0);
	StaticLine5 = new wxStaticLine(this, ID_STATICLINE5, wxDefaultPosition, wxSize(150,2), wxLI_HORIZONTAL, _T("ID_STATICLINE5"));
	FlexGridSizer16->Add(StaticLine5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP9 = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer2->Add(WFP9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP9 = new wxStaticText(this, ID_STATICTEXT4, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer3->Add(STFP9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK910 = new wxStaticText(this, ID_STATICTEXT5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer4->Add(WFPK910, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer28->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer56 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP10 = new wxStaticText(this, ID_STATICTEXT14, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer56->Add(WFP10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer56, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer57 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP10 = new wxStaticText(this, ID_STATICTEXT15, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer57->Add(STFP10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer57, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16->Add(FlexGridSizer28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine8 = new wxStaticLine(this, ID_STATICLINE8, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE8"));
	FlexGridSizer16->Add(StaticLine8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer5 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP11 = new wxStaticText(this, ID_STATICTEXT16, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	FlexGridSizer5->Add(WFP11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP11 = new wxStaticText(this, ID_STATICTEXT17, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	FlexGridSizer10->Add(STFP11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer11 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK1112 = new wxStaticText(this, ID_STATICTEXT18, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	FlexGridSizer11->Add(WFPK1112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine2 = new wxStaticLine(this, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer27->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer43 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP12 = new wxStaticText(this, ID_STATICTEXT20, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	FlexGridSizer43->Add(WFP12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer44 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP12 = new wxStaticText(this, ID_STATICTEXT19, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	FlexGridSizer44->Add(STFP12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16->Add(FlexGridSizer27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine7 = new wxStaticLine(this, ID_STATICLINE7, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE7"));
	FlexGridSizer16->Add(StaticLine7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer15 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP13 = new wxStaticText(this, ID_STATICTEXT47, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT47"));
	FlexGridSizer15->Add(WFP13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP13 = new wxStaticText(this, ID_STATICTEXT21, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	FlexGridSizer19->Add(STFP13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK1314 = new wxStaticText(this, ID_STATICTEXT48, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT48"));
	FlexGridSizer20->Add(WFPK1314, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine3 = new wxStaticLine(this, ID_STATICLINE3, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE3"));
	FlexGridSizer26->Add(StaticLine3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer45 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP14 = new wxStaticText(this, ID_STATICTEXT49, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT49"));
	FlexGridSizer45->Add(WFP14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer46 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP14 = new wxStaticText(this, ID_STATICTEXT50, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT50"));
	FlexGridSizer46->Add(STFP14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16->Add(FlexGridSizer26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine9 = new wxStaticLine(this, ID_STATICLINE9, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE9"));
	FlexGridSizer16->Add(StaticLine9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer40 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP15 = new wxStaticText(this, ID_STATICTEXT53, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT53"));
	FlexGridSizer40->Add(WFP15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25->Add(FlexGridSizer40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer41 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP15 = new wxStaticText(this, ID_STATICTEXT51, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT51"));
	FlexGridSizer41->Add(STFP15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25->Add(FlexGridSizer41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer42 = new wxFlexGridSizer(0, 3, 0, 0);
	WFPK1516 = new wxStaticText(this, ID_STATICTEXT54, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT54"));
	FlexGridSizer42->Add(WFPK1516, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25->Add(FlexGridSizer42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine4 = new wxStaticLine(this, ID_STATICLINE4, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE4"));
	FlexGridSizer25->Add(StaticLine4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer50 = new wxFlexGridSizer(0, 3, 0, 0);
	WFP16 = new wxStaticText(this, ID_STATICTEXT55, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT55"));
	FlexGridSizer50->Add(WFP16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25->Add(FlexGridSizer50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer55 = new wxFlexGridSizer(0, 3, 0, 0);
	STFP16 = new wxStaticText(this, ID_STATICTEXT52, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT52"));
	FlexGridSizer55->Add(STFP16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25->Add(FlexGridSizer55, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer16->Add(FlexGridSizer25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine6 = new wxStaticLine(this, ID_STATICLINE6, wxDefaultPosition, wxSize(150,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE6"));
	FlexGridSizer16->Add(StaticLine6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer59 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer59, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer120 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer120, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer134 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer134, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer135 = new wxFlexGridSizer(0, 3, 0, 0);
	Dodaj = new wxButton(this, ID_BUTTON1, _("Dalej"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer135->Add(Dodaj, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer135, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer136 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer136, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer137 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer137, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer138 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer138, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	SetSizer(FlexGridSizer1);
	Layout();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FazaPucharowa::OnDodajClick);
	//*)
	//playoff[16]={A.d1, B.d2, C.d1, D.d2, E.d1, F.d2, G.d1, H.d2, B.d1, A.d2, D.d1, C.d2, F.d1, E.d2, H.d1, G.d2};



	cout << "FAZA: " << faza << endl;
	if(faza == 5)
	Dodaj->SetLabel(_("Zakończ"));
    if(faza==0)
    {
    playoff[0]=A.d1;
    playoff[1]=B.d2;
    playoff[2]=C.d1;
    playoff[3]=D.d2;
    playoff[4]=E.d1;
    playoff[5]=F.d2;
    playoff[6]=G.d1;
    playoff[7]=H.d2;
    playoff[8]=B.d1;
    playoff[9]=A.d2;
    playoff[10]=D.d1;
    playoff[11]=C.d2;
    playoff[12]=F.d1;
    playoff[13]=E.d2;
    playoff[14]=H.d1;
    playoff[15]=G.d2;

    rysunki[0]=wxBitmap(wxImage(_T("figures\\braz.bmp")));
    rysunki[1]=wxBitmap(wxImage(_T("figures\\srebro.bmp")));
    rysunki[2]=wxBitmap(wxImage(_T("figures\\zloto.bmp")));
    }



    STFP1->SetLabel(playoff[0].GetNazwa());
    STFP2->SetLabel(playoff[1].GetNazwa());

    STFP3->SetLabel(playoff[2].GetNazwa());
    STFP4->SetLabel(playoff[3].GetNazwa());

    STFP5->SetLabel(playoff[4].GetNazwa());
    STFP6->SetLabel(playoff[5].GetNazwa());

    STFP7->SetLabel(playoff[6].GetNazwa());
    STFP8->SetLabel(playoff[7].GetNazwa());

    STFP9->SetLabel(playoff[8].GetNazwa());
    STFP10->SetLabel(playoff[9].GetNazwa());

    STFP11->SetLabel(playoff[10].GetNazwa());
    STFP12->SetLabel(playoff[11].GetNazwa());

    STFP13->SetLabel(playoff[12].GetNazwa());
    STFP14->SetLabel(playoff[13].GetNazwa());

    STFP15->SetLabel(playoff[14].GetNazwa());
    STFP16->SetLabel(playoff[15].GetNazwa());

    if(faza > 0)
    {
        // MAKRO DO PRZEKAZYWANIA NAZW DO NASTĘPNEJ FAZY
        //////////////////////////////////////////////////////////////////////////////////////////////////////////

        #define cw(x, y) STFPC ## x ->SetLabel(cwierc[x-1].GetNazwa());     \
                         STFPC ## y ->SetLabel(cwierc[y-1].GetNazwa());
        cw(1, 2);
        cw(3, 4);
        cw(5, 6);
        cw(7, 8);

        //////////////////////////////////////////////////////////////////////////////////////////////////////////


        // MAKRO DO UZUPEŁNIANIA WYNIKÓW
        //////////////////////////////////////////////////////////////////////////////////////////////////////////

        #define wfp(x) WFP ## x ->SetLabel(wxString::Format("%d", playoff[x-1].GetBz()));\

        wfp(1);
        wfp(2);
        wfp(3);
        wfp(4);
        wfp(5);
        wfp(6);
        wfp(7);
        wfp(8);
        wfp(9);
        wfp(10);
        wfp(11);
        wfp(12);
        wfp(13);
        wfp(14);
        wfp(15);
        wfp(16);

        //////////////////////////////////////////////////////////////////////////////////////////////////////////


        // MAKRO DO WYPISYWANIA KARNYCH (JEŻELI BYŁY)
        //////////////////////////////////////////////////////////////////////////////////////////////////////////

        #define k(x, y) if(playoff[x-1].GetBz()==playoff[y-1].GetBz())                                           \
        {                                                                                                        \
            string wynik;                                                                                        \
            wynik = "RK("+to_string(playoff[x-1].GetKarne())+":"+to_string(playoff[y-1].GetKarne())+")";         \
            wxString mystring(wynik);                                                                            \
            WFPK ## x ## y ->SetLabel(mystring);                                                                 \
        }

        k(1,2);
        k(3,4);
        k(5,6);
        k(7,8);
        k(9,10);
        k(11,12);
        k(13,14);
        k(15,16);

        //////////////////////////////////////////////////////////////////////////////////////////////////////////

    }

    if(faza > 1)
    {
        #define p(x, y) STFPP ## x ->SetLabel(pol[x-1].GetNazwa());    \
                         STFPP ## y ->SetLabel(pol[y-1].GetNazwa());
        p(1, 2);
        p(3, 4);



        #define wfpc(x) WFPC ## x ->SetLabel(wxString::Format("%d", cwierc[x-1].GetBz()));\

        wfpc(1);
        wfpc(2);
        wfpc(3);
        wfpc(4);
        wfpc(5);
        wfpc(6);
        wfpc(7);
        wfpc(8);

        #define kc(x, y) if(cwierc[x-1].GetBz()==cwierc[y-1].GetBz())                                             \
        {                                                                                                         \
            string wynik;                                                                                         \
            wynik = "RK("+to_string(cwierc[x-1].GetKarne())+":"+to_string(cwierc[y-1].GetKarne())+")";            \
            wxString mystring(wynik);                                                                             \
            WFPKC ## x ## y ->SetLabel(mystring);                                                                 \
        }

        kc(1,2);
        kc(3,4);
        kc(5,6);
        kc(7,8);
    }

    if (faza > 2)
    {
        #define p(x, y) STFPF ## x ->SetLabel(Final[x-1].GetNazwa());    \
                         STFPF ## y ->SetLabel(Final[y-1].GetNazwa());
        p(1, 2);

        #define b(x, y) STFP3 ## x ->SetLabel(baraze[x-1].GetNazwa());    \
                         STFP3 ## y ->SetLabel(baraze[y-1].GetNazwa());
        b(1, 2);

        #define wfpp(x) WFPP ## x ->SetLabel(wxString::Format("%d", pol[x-1].GetBz()));\

        wfpp(1);
        wfpp(2);
        wfpp(3);
        wfpp(4);

        #define kp(x, y) if(pol[x-1].GetBz()==pol[y-1].GetBz())                                                   \
        {                                                                                                         \
            string wynik;                                                                                         \
            wynik = "RK("+to_string(pol[x-1].GetKarne())+":"+to_string(pol[y-1].GetKarne())+")";                  \
            wxString mystring(wynik);                                                                             \
            WFPKP ## x ## y ->SetLabel(mystring);                                                                 \
        }

        kp(1,2);
        kp(3,4);
    }

    if (faza > 3)
    {
        #define wfp3(x) WFP3 ## x ->SetLabel(wxString::Format("%d", baraze[x-1].GetBz()));\

        wfp3(1); wfp3(2);


        #define k3(x, y) if(baraze[x-1].GetBz()==baraze[y-1].GetBz())                                             \
        {                                                                                                         \
            string wynik;                                                                                         \
            wynik = "RK("+to_string(baraze[x-1].GetKarne())+":"+to_string(baraze[y-1].GetKarne())+")";            \
            wxString mystring(wynik);                                                                             \
            WFPK3 ## x ## y ->SetLabel(mystring);                                                                 \
        }

        k3(1,2);

        if(baraze[0].GetBz()>baraze[1].GetBz())
            braz1->SetBitmap(rysunki[0]);
        else if(baraze[0].GetBz()<baraze[1].GetBz())
            braz2->SetBitmap(rysunki[0]);
        else if(baraze[0].GetKarne()>baraze[1].GetKarne())
            braz1->SetBitmap(rysunki[0]);
        else
            braz2->SetBitmap(rysunki[0]);



    }

    if (faza > 4)
    {
        #define wfpf(x) WFPF ## x ->SetLabel(wxString::Format("%d", Final[x-1].GetBz()));\

        wfpf(1); wfpf(2);


        #define kf(x, y) if(Final[x-1].GetBz()==Final[y-1].GetBz())                                       \
        {                                                                                                         \
            string wynik;                                                                                         \
            wynik = "RK("+to_string(Final[x-1].GetKarne())+":"+to_string(Final[y-1].GetKarne())+")";              \
            wxString mystring(wynik);                                                                             \
            WFPKF ## x ## y ->SetLabel(mystring);                                                                 \
        }

        kf(1,2);

        if(Final[0].GetBz()>Final[1].GetBz())
            {zs1->SetBitmap(rysunki[2]);
            zs2->SetBitmap(rysunki[1]);}
        else if(Final[0].GetBz()<Final[1].GetBz())
            {zs1->SetBitmap(rysunki[1]);
            zs2->SetBitmap(rysunki[2]);}
        else if(Final[0].GetKarne()>Final[1].GetKarne())
            {zs1->SetBitmap(rysunki[2]);
            zs2->SetBitmap(rysunki[1]);}
        else
            {zs1->SetBitmap(rysunki[1]);
            zs2->SetBitmap(rysunki[2]);}

    }

    SetIcon(wxICON(aaaa));
    Fit();
    Centre();
    mundial -> Close();
    menu -> Close();


}

FazaPucharowa::~FazaPucharowa()
{
	//(*Destroy(FazaPucharowa)
	//*)
}





int faza = 0;


void FazaPucharowa::OnDodajClick(wxCommandEvent& event)
{
    faza++;


   if (faza<6){
        fazap = this;
        JUFinalu Djg(0);
        Djg.ShowModal();
   }
   Close();

}
