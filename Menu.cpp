#include "Menu.h"
#include <wx/msgdlg.h>
#include <iostream>
#include "MundialApp.h"
#include "MundialMain.h"
#include <random>
#include <algorithm>
#include <cstdlib>
#include <ctime>

//(*InternalHeaders(Menu)
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)



#undef _
#define _(s) wxString::FromUTF8(s)

//(*IdInit(Menu)
const long Menu::ID_STATICTEXT1 = wxNewId();
const long Menu::ID_CHOICE16 = wxNewId();
const long Menu::ID_CHOICE15 = wxNewId();
const long Menu::ID_CHOICE1 = wxNewId();
const long Menu::ID_CHOICE2 = wxNewId();
const long Menu::ID_STATICTEXT2 = wxNewId();
const long Menu::ID_CHOICE3 = wxNewId();
const long Menu::ID_CHOICE4 = wxNewId();
const long Menu::ID_CHOICE5 = wxNewId();
const long Menu::ID_CHOICE6 = wxNewId();
const long Menu::ID_STATICTEXT3 = wxNewId();
const long Menu::ID_CHOICE7 = wxNewId();
const long Menu::ID_CHOICE8 = wxNewId();
const long Menu::ID_CHOICE9 = wxNewId();
const long Menu::ID_CHOICE10 = wxNewId();
const long Menu::ID_STATICTEXT4 = wxNewId();
const long Menu::ID_CHOICE11 = wxNewId();
const long Menu::ID_CHOICE12 = wxNewId();
const long Menu::ID_CHOICE13 = wxNewId();
const long Menu::ID_CHOICE14 = wxNewId();
const long Menu::ID_STATICTEXT5 = wxNewId();
const long Menu::ID_CHOICE17 = wxNewId();
const long Menu::ID_CHOICE18 = wxNewId();
const long Menu::ID_CHOICE19 = wxNewId();
const long Menu::ID_CHOICE20 = wxNewId();
const long Menu::ID_STATICTEXT6 = wxNewId();
const long Menu::ID_CHOICE21 = wxNewId();
const long Menu::ID_CHOICE22 = wxNewId();
const long Menu::ID_CHOICE23 = wxNewId();
const long Menu::ID_CHOICE24 = wxNewId();
const long Menu::ID_STATICTEXT7 = wxNewId();
const long Menu::ID_CHOICE25 = wxNewId();
const long Menu::ID_CHOICE26 = wxNewId();
const long Menu::ID_CHOICE27 = wxNewId();
const long Menu::ID_CHOICE28 = wxNewId();
const long Menu::ID_STATICTEXT8 = wxNewId();
const long Menu::ID_CHOICE29 = wxNewId();
const long Menu::ID_CHOICE30 = wxNewId();
const long Menu::ID_CHOICE31 = wxNewId();
const long Menu::ID_CHOICE32 = wxNewId();
const long Menu::ID_BUTTON2 = wxNewId();
const long Menu::ID_BUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Menu,wxDialog)
	//(*EventTable(Menu)
	//*)
END_EVENT_TABLE()

Menu::Menu(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Menu)
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
	wxFlexGridSizer* FlexGridSizer5;
	wxFlexGridSizer* FlexGridSizer6;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer9;

	Create(parent, id, _("Menu"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	SetFocus();
	Hide();
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DLIGHT));
	FlexGridSizer1 = new wxFlexGridSizer(3, 4, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Grupa A"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer6->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceA1 = new wxChoice(this, ID_CHOICE16, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE16"));
	ChoiceA1->Append(wxEmptyString);
	ChoiceA1->Append(_("Brazylia"));
	ChoiceA1->Append(_("Argentyna"));
	ChoiceA1->Append(_("Francja"));
	ChoiceA1->Append(_("Belgia"));
	ChoiceA1->Append(_("Anglia"));
	ChoiceA1->Append(_("Holandia"));
	ChoiceA1->Append(_("Chorwacja"));
	ChoiceA1->Append(_("Włochy"));
	ChoiceA1->Append(_("Portugalia"));
	ChoiceA1->Append(_("Hiszpania"));
	ChoiceA1->Append(_("Maroko"));
	ChoiceA1->Append(_("Szwajcaria"));
	ChoiceA1->Append(_("USA"));
	ChoiceA1->Append(_("Niemcy"));
	ChoiceA1->Append(_("Meksyk"));
	ChoiceA1->Append(_("Urugwaj"));
	ChoiceA1->Append(_("Kolumbia"));
	ChoiceA1->Append(_("Dania"));
	ChoiceA1->Append(_("Senegal"));
	ChoiceA1->Append(_("Japonia"));
	ChoiceA1->Append(_("Peru"));
	ChoiceA1->Append(_("Polska"));
	ChoiceA1->Append(_("Szwecja"));
	ChoiceA1->Append(_("Iran"));
	ChoiceA1->Append(_("Korea Południowa"));
	ChoiceA1->Append(_("Ukraina"));
	ChoiceA1->Append(_("Australia"));
	ChoiceA1->Append(_("Walia"));
	ChoiceA1->Append(_("Serbia"));
	ChoiceA1->Append(_("Tunezja"));
	ChoiceA1->Append(_("Chile"));
	ChoiceA1->Append(_("Kostaryka"));
	ChoiceA1->Append(_("Kamerun"));
	ChoiceA1->Append(_("Austria"));
	ChoiceA1->Append(_("Nigeria"));
	ChoiceA1->Append(_("Węgry"));
	ChoiceA1->Append(_("Rosja"));
	ChoiceA1->Append(_("Czechy"));
	ChoiceA1->Append(_("Egipt"));
	ChoiceA1->Append(_("Algieria"));
	ChoiceA1->Append(_("Ekwador"));
	ChoiceA1->Append(_("Szkocja"));
	ChoiceA1->Append(_("Norwegia"));
	ChoiceA1->Append(_("Turcja"));
	ChoiceA1->Append(_("Mali"));
	ChoiceA1->Append(_("Paragwaj"));
	ChoiceA1->Append(_("Wybrzeże Kości Słoniowej"));
	ChoiceA1->Append(_("Irlandia"));
	ChoiceA1->Append(_("Arabia Saudyjska"));
	ChoiceA1->Append(_("Burkina Faso"));
	ChoiceA1->Append(_("Grecja"));
	ChoiceA1->Append(_("Rumunia"));
	ChoiceA1->Append(_("Kanada"));
	ChoiceA1->Append(_("Słowacja"));
	ChoiceA1->Append(_("Wenezuela"));
	ChoiceA1->Append(_("Finlandia"));
	ChoiceA1->Append(_("Bośnia i Hercegowina"));
	ChoiceA1->Append(_("Ghana"));
	ChoiceA1->Append(_("Irlandia Północna"));
	ChoiceA1->Append(_("Katar"));
	ChoiceA1->Append(_("Panama"));
	ChoiceA1->Append(_("Słowenia"));
	ChoiceA1->Append(_("Islandia"));
	ChoiceA1->Append(_("Jamajka"));
	ChoiceA1->Append(_("Macedonia Północna"));
	ChoiceA1->Append(_("Albania"));
	ChoiceA1->Append(_("RPA"));
	ChoiceA1->Append(_("Irak"));
	ChoiceA1->Append(_("Czarnogóra"));
	ChoiceA1->Append(_("Zjednoczone Emiraty Arabskie"));
	ChoiceA1->Append(_("Bułgaria"));
	ChoiceA1->Append(_("Republika Zielonego Przylądka"));
	ChoiceA1->Append(_("DR Konga"));
	ChoiceA1->Append(_("Salwador"));
	ChoiceA1->Append(_("Oman"));
	ChoiceA1->Append(_("Izrael"));
	ChoiceA1->Append(_("Uzbekistan"));
	ChoiceA1->Append(_("Gruzja"));
	ChoiceA1->Append(_("Gabon"));
	ChoiceA1->Append(_("Chiny"));
	ChoiceA1->Append(_("Honduras"));
	ChoiceA1->Append(_("Boliwia"));
	ChoiceA1->Append(_("Gwinea"));
	ChoiceA1->Append(_("Jordania"));
	ChoiceA1->Append(_("Bahrajn"));
	ChoiceA1->Append(_("Curacao"));
	ChoiceA1->Append(_("Haiti"));
	ChoiceA1->Append(_("Zambia"));
	ChoiceA1->Append(_("Uganda"));
	ChoiceA1->Append(_("Syria"));
	ChoiceA1->Append(_("Benin"));
	ChoiceA1->Append(_("Luksemburg"));
	ChoiceA1->Append(_("Palestyna"));
	ChoiceA1->Append(_("Kirgistan"));
	ChoiceA1->Append(_("Armenia"));
	ChoiceA1->Append(_("Wietnam"));
	ChoiceA1->Append(_("Białoruś"));
	ChoiceA1->Append(_("Gwinea Równikowa"));
	ChoiceA1->Append(_("Kongo"));
	ChoiceA1->Append(_("Liban"));
	ChoiceA1->Append(_("Kenia"));
	ChoiceA1->Append(_("Madagaskar"));
	ChoiceA1->Append(_("Mauretania"));
	ChoiceA1->Append(_("Trynidad i Tobago"));
	ChoiceA1->Append(_("Nowa Zelandia"));
	ChoiceA1->Append(_("Indie"));
	ChoiceA1->Append(_("Kosowo"));
	ChoiceA1->Append(_("Tadżykistan"));
	ChoiceA1->Append(_("Estonia"));
	ChoiceA1->Append(_("Cypr"));
	ChoiceA1->Append(_("Tajlandia"));
	ChoiceA1->Append(_("Korea Północna"));
	ChoiceA1->Append(_("Namibia"));
	ChoiceA1->Append(_("Mozambik"));
	ChoiceA1->Append(_("Kazachstan"));
	ChoiceA1->Append(_("Sierra Leone"));
	ChoiceA1->Append(_("Angola"));
	ChoiceA1->Append(_("Gwinea Bissau"));
	ChoiceA1->Append(_("Gwatemala"));
	ChoiceA1->Append(_("Libia"));
	ChoiceA1->Append(_("Azerbejdżan"));
	ChoiceA1->Append(_("Niger"));
	ChoiceA1->Append(_("Wyspy Owcze"));
	ChoiceA1->Append(_("Malawi"));
	ChoiceA1->Append(_("Zimbabwe"));
	ChoiceA1->Append(_("Gambia"));
	ChoiceA1->Append(_("Togo"));
	ChoiceA1->Append(_("Sudan"));
	ChoiceA1->Append(_("Komory"));
	ChoiceA1->Append(_("Tanzania"));
	ChoiceA1->Append(_("Antigua i Barbuda"));
	ChoiceA1->Append(_("Republika Środkowoafrykańska"));
	ChoiceA1->Append(_("Łotwa"));
	ChoiceA1->Append(_("Filipiny"));
	ChoiceA1->Append(_("Turkmenistan"));
	ChoiceA1->Append(_("Wyspy Salomona"));
	ChoiceA1->Append(_("Rwanda"));
	ChoiceA1->Append(_("Etiopia"));
	ChoiceA1->Append(_("Surinam"));
	ChoiceA1->Append(_("Saint Kitts i Nevis"));
	ChoiceA1->Append(_("Burundi"));
	ChoiceA1->Append(_("Nikaragua"));
	ChoiceA1->Append(_("Suazi"));
	ChoiceA1->Append(_("Litwa"));
	ChoiceA1->Append(_("Malezja"));
	ChoiceA1->Append(_("Hongkong"));
	ChoiceA1->Append(_("Lesotho"));
	ChoiceA1->Append(_("Kuwejt"));
	ChoiceA1->Append(_("Botswana"));
	ChoiceA1->Append(_("Liberia"));
	ChoiceA1->Append(_("Indonezja"));
	ChoiceA1->Append(_("Dominikana"));
	ChoiceA1->Append(_("Andora"));
	ChoiceA1->Append(_("Jemen"));
	ChoiceA1->Append(_("Afganistan"));
	ChoiceA1->Append(_("Malediwy"));
	ChoiceA1->Append(_("Chińskie Tajpej"));
	ChoiceA1->Append(_("Papua-Nowa Gwinea"));
	ChoiceA1->Append(_("Myanmar"));
	ChoiceA1->Append(_("Singapur"));
	ChoiceA1->Append(_("Nowa Kaledonia"));
	ChoiceA1->Append(_("Tahiti"));
	ChoiceA1->Append(_("Fidżi"));
	ChoiceA1->Append(_("Vanuatu"));
	ChoiceA1->Append(_("South Sudan"));
	ChoiceA1->Append(_("Barbados"));
	ChoiceA1->Append(_("Malta"));
	ChoiceA1->Append(_("Kuba"));
	ChoiceA1->Append(_("Bermudy"));
	ChoiceA1->Append(_("Portoryko"));
	ChoiceA1->Append(_("Gujana"));
	ChoiceA1->Append(_("Saint Lucia"));
	ChoiceA1->Append(_("Grenada"));
	ChoiceA1->Append(_("Mołdawia"));
	ChoiceA1->Append(_("Nepal"));
	ChoiceA1->Append(_("Belize"));
	ChoiceA1->Append(_("Kambodża"));
	ChoiceA1->Append(_("Saint Vincent i Grenadyny"));
	ChoiceA1->Append(_("Montserrat"));
	ChoiceA1->Append(_("Mauritius"));
	ChoiceA1->Append(_("Czad"));
	ChoiceA1->Append(_("Makau"));
	ChoiceA1->Append(_("Mongolia"));
	ChoiceA1->Append(_("Dominika"));
	ChoiceA1->Append(_("Bhutan"));
	ChoiceA1->Append(_("Wyspy Św.Tomasza i Książęca"));
	ChoiceA1->Append(_("Laos"));
	ChoiceA1->Append(_("Samoa Amerykańskie"));
	ChoiceA1->Append(_("Wyspy Cooka"));
	ChoiceA1->Append(_("Brunei"));
	ChoiceA1->Append(_("Samoa"));
	ChoiceA1->Append(_("Bangladesz"));
	ChoiceA1->Append(_("Dżibuti"));
	ChoiceA1->Append(_("Cayman Islands"));
	ChoiceA1->Append(_("Pakistan"));
	ChoiceA1->Append(_("Tonga"));
	ChoiceA1->Append(_("Timor Wschodni"));
	ChoiceA1->Append(_("Liechtenstein"));
	ChoiceA1->Append(_("Seszele"));
	ChoiceA1->Append(_("Gibraltar"));
	ChoiceA1->Append(_("Erytrea"));
	ChoiceA1->Append(_("Aruba"));
	ChoiceA1->Append(_("Bahamy"));
	ChoiceA1->Append(_("Somalia"));
	ChoiceA1->Append(_("Guam"));
	ChoiceA1->Append(_("Turks i Caicos"));
	ChoiceA1->Append(_("Sri Lanka"));
	ChoiceA1->Append(_("Wyspy Dziewicze Stanów Zjednoczonych"));
	ChoiceA1->Append(_("Brytyjskie Wyspy Dziewicze"));
	ChoiceA1->Append(_("Anguilla"));
	ChoiceA1->Append(_("San Marino"));
	FlexGridSizer7->Add(ChoiceA1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceA2 = new wxChoice(this, ID_CHOICE15, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE15"));
	FlexGridSizer8->Add(ChoiceA2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceA3 = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	FlexGridSizer9->Add(ChoiceA3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceA4 = new wxChoice(this, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
	FlexGridSizer10->Add(ChoiceA4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2->Add(FlexGridSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer11 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Grupa B"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer11->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer12 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceB1 = new wxChoice(this, ID_CHOICE3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
	FlexGridSizer12->Add(ChoiceB1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer13 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceB2 = new wxChoice(this, ID_CHOICE4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
	FlexGridSizer13->Add(ChoiceB2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer14 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceB3 = new wxChoice(this, ID_CHOICE5, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
	FlexGridSizer14->Add(ChoiceB3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer15 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceB4 = new wxChoice(this, ID_CHOICE6, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE6"));
	FlexGridSizer15->Add(ChoiceB4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer16 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Grupa C"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer16->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer17 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceC1 = new wxChoice(this, ID_CHOICE7, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE7"));
	FlexGridSizer17->Add(ChoiceC1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer18 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceC2 = new wxChoice(this, ID_CHOICE8, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE8"));
	FlexGridSizer18->Add(ChoiceC2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer19 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceC3 = new wxChoice(this, ID_CHOICE9, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE9"));
	FlexGridSizer19->Add(ChoiceC3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceC4 = new wxChoice(this, ID_CHOICE10, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE10"));
	FlexGridSizer20->Add(ChoiceC4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4->Add(FlexGridSizer20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer21 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Grupa D"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer21->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer22 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceD1 = new wxChoice(this, ID_CHOICE11, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE11"));
	FlexGridSizer22->Add(ChoiceD1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer23 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceD2 = new wxChoice(this, ID_CHOICE12, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE12"));
	FlexGridSizer23->Add(ChoiceD2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer24 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceD3 = new wxChoice(this, ID_CHOICE13, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE13"));
	FlexGridSizer24->Add(ChoiceD3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer25 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceD4 = new wxChoice(this, ID_CHOICE14, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE14"));
	FlexGridSizer25->Add(ChoiceD4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer32 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Grupa E"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer32->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer33 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceE1 = new wxChoice(this, ID_CHOICE17, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE17"));
	FlexGridSizer33->Add(ChoiceE1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer34 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceE2 = new wxChoice(this, ID_CHOICE18, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE18"));
	FlexGridSizer34->Add(ChoiceE2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer35 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceE3 = new wxChoice(this, ID_CHOICE19, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE19"));
	FlexGridSizer35->Add(ChoiceE3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer36 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceE4 = new wxChoice(this, ID_CHOICE20, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE20"));
	FlexGridSizer36->Add(ChoiceE4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer26->Add(FlexGridSizer36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer37 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Grupa F"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer37->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer38 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceF1 = new wxChoice(this, ID_CHOICE21, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE21"));
	FlexGridSizer38->Add(ChoiceF1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer39 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceF2 = new wxChoice(this, ID_CHOICE22, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE22"));
	FlexGridSizer39->Add(ChoiceF2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer40 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceF3 = new wxChoice(this, ID_CHOICE23, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE23"));
	FlexGridSizer40->Add(ChoiceF3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer41 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceF4 = new wxChoice(this, ID_CHOICE24, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE24"));
	FlexGridSizer41->Add(ChoiceF4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer27->Add(FlexGridSizer41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer42 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Grupa G"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer42->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer43 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceG1 = new wxChoice(this, ID_CHOICE25, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE25"));
	FlexGridSizer43->Add(ChoiceG1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer44 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceG2 = new wxChoice(this, ID_CHOICE26, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE26"));
	FlexGridSizer44->Add(ChoiceG2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer45 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceG3 = new wxChoice(this, ID_CHOICE27, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE27"));
	FlexGridSizer45->Add(ChoiceG3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer46 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceG4 = new wxChoice(this, ID_CHOICE28, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE28"));
	FlexGridSizer46->Add(ChoiceG4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer28->Add(FlexGridSizer46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29 = new wxFlexGridSizer(5, 1, 0, 0);
	FlexGridSizer47 = new wxFlexGridSizer(0, 3, 0, 0);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Grupa H"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer47->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29->Add(FlexGridSizer47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer48 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceH1 = new wxChoice(this, ID_CHOICE29, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE29"));
	FlexGridSizer48->Add(ChoiceH1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29->Add(FlexGridSizer48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer49 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceH2 = new wxChoice(this, ID_CHOICE30, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE30"));
	FlexGridSizer49->Add(ChoiceH2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29->Add(FlexGridSizer49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer50 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceH3 = new wxChoice(this, ID_CHOICE31, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE31"));
	FlexGridSizer50->Add(ChoiceH3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29->Add(FlexGridSizer50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer51 = new wxFlexGridSizer(0, 3, 0, 0);
	ChoiceH4 = new wxChoice(this, ID_CHOICE32, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE32"));
	FlexGridSizer51->Add(ChoiceH4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer29->Add(FlexGridSizer51, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer30 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Dalej_button = new wxButton(this, ID_BUTTON2, _("Dalej"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer1->Add(Dalej_button, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	Losuj_button = new wxButton(this, ID_BUTTON1, _("Losuj"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Losuj_button, 1, wxALL|wxALIGN_RIGHT, 5);
	FlexGridSizer31 = new wxFlexGridSizer(0, 3, 0, 0);
	FlexGridSizer1->Add(FlexGridSizer31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);
	Center();

	Connect(ID_CHOICE16,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceA1Select);
	Connect(ID_CHOICE15,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceA2Select);
	Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceA3Select);
	Connect(ID_CHOICE2,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceA4Select);
	Connect(ID_CHOICE3,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceB1Select);
	Connect(ID_CHOICE4,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceB2Select);
	Connect(ID_CHOICE5,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceB3Select);
	Connect(ID_CHOICE6,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceB4Select);
	Connect(ID_CHOICE7,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceC1Select);
	Connect(ID_CHOICE8,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceC2Select);
	Connect(ID_CHOICE9,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceC3Select);
	Connect(ID_CHOICE10,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceC4Select);
	Connect(ID_CHOICE11,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceD1Select);
	Connect(ID_CHOICE12,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceD2Select);
	Connect(ID_CHOICE13,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceD3Select);
	Connect(ID_CHOICE14,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceD4Select);
	Connect(ID_CHOICE17,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceE1Select);
	Connect(ID_CHOICE18,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceE2Select);
	Connect(ID_CHOICE19,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceE3Select);
	Connect(ID_CHOICE20,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceE4Select);
	Connect(ID_CHOICE21,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceF1Select);
	Connect(ID_CHOICE22,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceF2Select);
	Connect(ID_CHOICE23,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceF3Select);
	Connect(ID_CHOICE24,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceF4Select);
	Connect(ID_CHOICE25,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceG1Select);
	Connect(ID_CHOICE26,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceG2Select);
	Connect(ID_CHOICE27,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceG3Select);
	Connect(ID_CHOICE28,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceG4Select);
	Connect(ID_CHOICE29,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceH1Select);
	Connect(ID_CHOICE30,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceH2Select);
	Connect(ID_CHOICE31,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceH3Select);
	Connect(ID_CHOICE32,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&Menu::OnChoiceH4Select);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Menu::OnDalej_buttonClick);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Menu::OnLosuj_buttonClick);
	//*)

	#define XX(CH)    for(int i=0; i< ChoiceA1->GetCount(); i++) Choice ## CH ->Append( ChoiceA1->GetString(i));

	XX(A2)  XX(B1)  XX(C1)  XX(D1)
	XX(A3)  XX(B2)  XX(C2)  XX(D2)
	XX(A4)  XX(B3)  XX(C3)  XX(D3)
            XX(B4)  XX(C4)  XX(D4)
    XX(E1)  XX(F1)  XX(G1)  XX(H1)
    XX(E2)  XX(F2)  XX(G2)  XX(H2)
    XX(E3)  XX(F3)  XX(G3)  XX(H3)
    XX(E4)  XX(F4)  XX(G4)  XX(H4)


            SetIcon(wxICON(aaaa));

            Fit();
            Centre();

}

Menu::~Menu()
{
	//(*Destroy(Menu)
	//*)
}

#define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}


//GRUPA A


void Menu::OnChoiceA1Select(wxCommandEvent& event)
{
    int i = ChoiceA1->GetSelection();
    std::string string_i = std::to_string(i);
    wxString a = ChoiceA1->GetString(i);

    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
           Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceA2Select(wxCommandEvent& event)
{
    int i = ChoiceA2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
           Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}



void Menu::OnChoiceA3Select(wxCommandEvent& event)
{
    int i = ChoiceA3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
           Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceA4Select(wxCommandEvent& event)
{
    int i = ChoiceA4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
           Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

//GRUPA B



void Menu::OnChoiceB1Select(wxCommandEvent& event)
{
    int i = ChoiceB1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1);        Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);

}

void Menu::OnChoiceB2Select(wxCommandEvent& event)
{
    int i = ChoiceB2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2);        Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceB3Select(wxCommandEvent& event)
{
    int i = ChoiceB3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3);        Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceB4Select(wxCommandEvent& event)
{
    int i = ChoiceB4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4);        Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

// GRUPA C



void Menu::OnChoiceC1Select(wxCommandEvent& event)
{
    int i = ChoiceC1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1);        Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceC2Select(wxCommandEvent& event)
{
    int i = ChoiceC2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2);        Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceC3Select(wxCommandEvent& event)
{
    int i = ChoiceC3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3);        Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceC4Select(wxCommandEvent& event)
{
    int i = ChoiceC4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4);        Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

//GRUPA D



void Menu::OnChoiceD1Select(wxCommandEvent& event)
{
    int i = ChoiceD1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceD2Select(wxCommandEvent& event)
{
    int i = ChoiceD2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceD3Select(wxCommandEvent& event)
{
    int i = ChoiceD3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceD4Select(wxCommandEvent& event)
{
    int i = ChoiceD4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

//Grupa E

void Menu::OnChoiceE1Select(wxCommandEvent& event)
{
    int i = ChoiceE1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
           Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceE2Select(wxCommandEvent& event)
{
    int i = ChoiceE2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
           Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceE3Select(wxCommandEvent& event)
{
    int i = ChoiceE3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
           Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceE4Select(wxCommandEvent& event)
{
    int i = ChoiceE4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
           Z(F4); Z(G4); Z(H4);
}

// Grupa F

void Menu::OnChoiceF1Select(wxCommandEvent& event)
{
    int i = ChoiceF1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1);        Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceF2Select(wxCommandEvent& event)
{
    int i = ChoiceF2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2);        Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceF3Select(wxCommandEvent& event)
{
    int i = ChoiceF3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3);        Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceF4Select(wxCommandEvent& event)
{
    int i = ChoiceF4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4);        Z(G4); Z(H4);
}

// Grupa G

void Menu::OnChoiceG1Select(wxCommandEvent& event)
{
    int i = ChoiceG1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1);        Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceG2Select(wxCommandEvent& event)
{
    int i = ChoiceG2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2);        Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceG3Select(wxCommandEvent& event)
{
    int i = ChoiceG3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3);        Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceG4Select(wxCommandEvent& event)
{
    int i = ChoiceG4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4);        Z(H4);
}

// Grupa H

void Menu::OnChoiceH1Select(wxCommandEvent& event)
{
    int i = ChoiceH1->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceH2Select(wxCommandEvent& event)
{
    int i = ChoiceH2->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceH3Select(wxCommandEvent& event)
{
    int i = ChoiceH3->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3);
    Z(E4); Z(F4); Z(G4); Z(H4);
}

void Menu::OnChoiceH4Select(wxCommandEvent& event)
{
    int i = ChoiceH4->GetSelection();
    #define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    Z(A1); Z(B1); Z(C1); Z(D1);
    Z(A2); Z(B2); Z(C2); Z(D2);
    Z(A3); Z(B3); Z(C3); Z(D3);
    Z(A4); Z(B4); Z(C4); Z(D4);
    Z(E1); Z(F1); Z(G1); Z(H1);
    Z(E2); Z(F2); Z(G2); Z(H2);
    Z(E3); Z(F3); Z(G3); Z(H3);
    Z(E4); Z(F4); Z(G4);
}


//PRZYCISKI



extern Grupa A, B, C, D, E, F, G, H;
extern wxDialog * menu;

void Menu::OnDalej_buttonClick(wxCommandEvent& event)
{
    if(ChoiceA1->GetSelection()>0 && //Warunek zeby nie dalo sie kliknac jak nie ma wszystkich druzyn wbranych
       ChoiceA2->GetSelection()>0 &&
       ChoiceA3->GetSelection()>0 &&
       ChoiceA4->GetSelection()>0 &&
       ChoiceB1->GetSelection()>0 &&
       ChoiceB2->GetSelection()>0 &&
       ChoiceB3->GetSelection()>0 &&
       ChoiceB4->GetSelection()>0 &&
       ChoiceC1->GetSelection()>0 &&
       ChoiceC2->GetSelection()>0 &&
       ChoiceC3->GetSelection()>0 &&
       ChoiceC4->GetSelection()>0 &&
       ChoiceD1->GetSelection()>0 &&
       ChoiceD2->GetSelection()>0 &&
       ChoiceD3->GetSelection()>0 &&
       ChoiceD4->GetSelection()>0 &&
       ChoiceE1->GetSelection()>0 &&
       ChoiceE2->GetSelection()>0 &&
       ChoiceE3->GetSelection()>0 &&
       ChoiceE4->GetSelection()>0 &&
       ChoiceF1->GetSelection()>0 &&
       ChoiceF2->GetSelection()>0 &&
       ChoiceF3->GetSelection()>0 &&
       ChoiceF4->GetSelection()>0 &&
       ChoiceG1->GetSelection()>0 &&
       ChoiceG2->GetSelection()>0 &&
       ChoiceG3->GetSelection()>0 &&
       ChoiceG4->GetSelection()>0 &&
       ChoiceH1->GetSelection()>0 &&
       ChoiceH2->GetSelection()>0 &&
       ChoiceH3->GetSelection()>0 &&
       ChoiceH4->GetSelection()>0)
    {

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    A.d1.SetNazwa(ChoiceA1->GetString(ChoiceA1->GetSelection()));
    A.d2.SetNazwa(ChoiceA2->GetString(ChoiceA2->GetSelection()));
    A.d3.SetNazwa(ChoiceA3->GetString(ChoiceA3->GetSelection()));
    A.d4.SetNazwa(ChoiceA4->GetString(ChoiceA4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    B.d1.SetNazwa(ChoiceB1->GetString(ChoiceB1->GetSelection()));
    B.d2.SetNazwa(ChoiceB2->GetString(ChoiceB2->GetSelection()));
    B.d3.SetNazwa(ChoiceB3->GetString(ChoiceB3->GetSelection()));
    B.d4.SetNazwa(ChoiceB4->GetString(ChoiceB4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    C.d1.SetNazwa(ChoiceC1->GetString(ChoiceC1->GetSelection()));
    C.d2.SetNazwa(ChoiceC2->GetString(ChoiceC2->GetSelection()));
    C.d3.SetNazwa(ChoiceC3->GetString(ChoiceC3->GetSelection()));
    C.d4.SetNazwa(ChoiceC4->GetString(ChoiceC4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    D.d1.SetNazwa(ChoiceD1->GetString(ChoiceD1->GetSelection()));
    D.d2.SetNazwa(ChoiceD2->GetString(ChoiceD2->GetSelection()));
    D.d3.SetNazwa(ChoiceD3->GetString(ChoiceD3->GetSelection()));
    D.d4.SetNazwa(ChoiceD4->GetString(ChoiceD4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    E.d1.SetNazwa(ChoiceE1->GetString(ChoiceE1->GetSelection()));
    E.d2.SetNazwa(ChoiceE2->GetString(ChoiceE2->GetSelection()));
    E.d3.SetNazwa(ChoiceE3->GetString(ChoiceE3->GetSelection()));
    E.d4.SetNazwa(ChoiceE4->GetString(ChoiceE4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    F.d1.SetNazwa(ChoiceF1->GetString(ChoiceF1->GetSelection()));
    F.d2.SetNazwa(ChoiceF2->GetString(ChoiceF2->GetSelection()));
    F.d3.SetNazwa(ChoiceF3->GetString(ChoiceF3->GetSelection()));
    F.d4.SetNazwa(ChoiceF4->GetString(ChoiceF4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    G.d1.SetNazwa(ChoiceG1->GetString(ChoiceG1->GetSelection()));
    G.d2.SetNazwa(ChoiceG2->GetString(ChoiceG2->GetSelection()));
    G.d3.SetNazwa(ChoiceG3->GetString(ChoiceG3->GetSelection()));
    G.d4.SetNazwa(ChoiceG4->GetString(ChoiceG4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    H.d1.SetNazwa(ChoiceH1->GetString(ChoiceH1->GetSelection()));
    H.d2.SetNazwa(ChoiceH2->GetString(ChoiceH2->GetSelection()));
    H.d3.SetNazwa(ChoiceH3->GetString(ChoiceH3->GetSelection()));
    H.d4.SetNazwa(ChoiceH4->GetString(ChoiceH4->GetSelection()));

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////


    menu = this;
    MundialDialog dlg(0);
    dlg.ShowModal();
    }else
    wxMessageBox(_("Proszę wybrać wszystkie drużyny."),_("Błąd"));



}

void random_numbers(int arr[]) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 211);
    for (int i = 0; i < 32; i++) {
        int number = dist(gen);
        while (find(arr, arr + i, number) != arr + i) {
            number = dist(gen);
        }
        arr[i] = number;
    }
}



int generateRandomNumber() {
    static random_device rd;
    static mt19937 rng(rd());
    uniform_real_distribution<double> uni(0, 1);
    double x = uni(rng);
    return static_cast<int>(212 - sqrt(212 * 212 * (1 - x))) + 1;
}

// funkcja do wypełniania tablicy losowymi, różnymi liczbami
void fillArrayWithRandomNumbers(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = generateRandomNumber();
        // sprawdzamy, czy liczba już występuje w tablicy
        while (find(arr, arr + i, arr[i]) != arr + i) {
            arr[i] = generateRandomNumber();
        }
    }
    // sortujemy tablicę, aby liczby były uporządkowane od najmniejszej do największej
    sort(arr, arr + size);
}


void Menu::OnLosuj_buttonClick(wxCommandEvent& event)
{
    int numbers[32];
    fillArrayWithRandomNumbers(numbers, 32);
    ChoiceA1->SetSelection(numbers[0]);
    ChoiceA2->SetSelection(numbers[8]);
    ChoiceA3->SetSelection(numbers[16]);
    ChoiceA4->SetSelection(numbers[24]);
    ChoiceB1->SetSelection(numbers[1]);
    ChoiceB2->SetSelection(numbers[9]);
    ChoiceB3->SetSelection(numbers[17]);
    ChoiceB4->SetSelection(numbers[25]);
    ChoiceC1->SetSelection(numbers[2]);
    ChoiceC2->SetSelection(numbers[10]);
    ChoiceC3->SetSelection(numbers[18]);
    ChoiceC4->SetSelection(numbers[26]);
    ChoiceD1->SetSelection(numbers[3]);
    ChoiceD2->SetSelection(numbers[11]);
    ChoiceD3->SetSelection(numbers[19]);
    ChoiceD4->SetSelection(numbers[27]);
    ChoiceE1->SetSelection(numbers[4]);
    ChoiceE2->SetSelection(numbers[12]);
    ChoiceE3->SetSelection(numbers[20]);
    ChoiceE4->SetSelection(numbers[28]);
    ChoiceF1->SetSelection(numbers[5]);
    ChoiceF2->SetSelection(numbers[13]);
    ChoiceF3->SetSelection(numbers[21]);
    ChoiceF4->SetSelection(numbers[29]);
    ChoiceG1->SetSelection(numbers[6]);
    ChoiceG2->SetSelection(numbers[14]);
    ChoiceG3->SetSelection(numbers[22]);
    ChoiceG4->SetSelection(numbers[30]);
    ChoiceH1->SetSelection(numbers[7]);
    ChoiceH2->SetSelection(numbers[15]);
    ChoiceH3->SetSelection(numbers[23]);
    ChoiceH4->SetSelection(numbers[31]);


}

