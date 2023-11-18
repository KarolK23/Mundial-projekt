#ifndef MENU_H
#define MENU_H




//(*Headers(Menu)
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class Menu: public wxDialog
{
	public:

		Menu(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Menu();

		//(*Declarations(Menu)
		wxButton* Dalej_button;
		wxButton* Losuj_button;
		wxChoice* ChoiceA1;
		wxChoice* ChoiceA2;
		wxChoice* ChoiceA3;
		wxChoice* ChoiceA4;
		wxChoice* ChoiceB1;
		wxChoice* ChoiceB2;
		wxChoice* ChoiceB3;
		wxChoice* ChoiceB4;
		wxChoice* ChoiceC1;
		wxChoice* ChoiceC2;
		wxChoice* ChoiceC3;
		wxChoice* ChoiceC4;
		wxChoice* ChoiceD1;
		wxChoice* ChoiceD2;
		wxChoice* ChoiceD3;
		wxChoice* ChoiceD4;
		wxChoice* ChoiceE1;
		wxChoice* ChoiceE2;
		wxChoice* ChoiceE3;
		wxChoice* ChoiceE4;
		wxChoice* ChoiceF1;
		wxChoice* ChoiceF2;
		wxChoice* ChoiceF3;
		wxChoice* ChoiceF4;
		wxChoice* ChoiceG1;
		wxChoice* ChoiceG2;
		wxChoice* ChoiceG3;
		wxChoice* ChoiceG4;
		wxChoice* ChoiceH1;
		wxChoice* ChoiceH2;
		wxChoice* ChoiceH3;
		wxChoice* ChoiceH4;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		//*)

	protected:

		//(*Identifiers(Menu)
		static const long ID_STATICTEXT1;
		static const long ID_CHOICE16;
		static const long ID_CHOICE15;
		static const long ID_CHOICE1;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT2;
		static const long ID_CHOICE3;
		static const long ID_CHOICE4;
		static const long ID_CHOICE5;
		static const long ID_CHOICE6;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE7;
		static const long ID_CHOICE8;
		static const long ID_CHOICE9;
		static const long ID_CHOICE10;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE11;
		static const long ID_CHOICE12;
		static const long ID_CHOICE13;
		static const long ID_CHOICE14;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE17;
		static const long ID_CHOICE18;
		static const long ID_CHOICE19;
		static const long ID_CHOICE20;
		static const long ID_STATICTEXT6;
		static const long ID_CHOICE21;
		static const long ID_CHOICE22;
		static const long ID_CHOICE23;
		static const long ID_CHOICE24;
		static const long ID_STATICTEXT7;
		static const long ID_CHOICE25;
		static const long ID_CHOICE26;
		static const long ID_CHOICE27;
		static const long ID_CHOICE28;
		static const long ID_STATICTEXT8;
		static const long ID_CHOICE29;
		static const long ID_CHOICE30;
		static const long ID_CHOICE31;
		static const long ID_CHOICE32;
		static const long ID_BUTTON2;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Menu)
		void OnChoiceASelect(wxCommandEvent& event);
		void OnChoiceA2Select(wxCommandEvent& event);
		void OnChoiceA1Select(wxCommandEvent& event);
		void OnChoiceA3Select(wxCommandEvent& event);
		void OnChoiceA4Select(wxCommandEvent& event);
		void OnChoiceB1Select(wxCommandEvent& event);
		void OnChoiceB2Select(wxCommandEvent& event);
		void OnChoiceB3Select(wxCommandEvent& event);
		void OnChoiceB4Select(wxCommandEvent& event);
		void OnChoiceC1Select(wxCommandEvent& event);
		void OnChoiceC2Select(wxCommandEvent& event);
		void OnChoiceC3Select(wxCommandEvent& event);
		void OnChoiceC4Select(wxCommandEvent& event);
		void OnChoiceD1Select(wxCommandEvent& event);
		void OnChoiceD2Select(wxCommandEvent& event);
		void OnChoiceD3Select(wxCommandEvent& event);
		void OnChoiceD4Select(wxCommandEvent& event);
		void OnDalej_buttonClick(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnLosuj_buttonClick(wxCommandEvent& event);
		void OnChoiceE1Select(wxCommandEvent& event);
		void OnChoiceE2Select(wxCommandEvent& event);
		void OnChoiceE3Select(wxCommandEvent& event);
		void OnChoiceE4Select(wxCommandEvent& event);
		void OnChoiceF1Select(wxCommandEvent& event);
		void OnChoiceF2Select(wxCommandEvent& event);
		void OnChoiceF3Select(wxCommandEvent& event);
		void OnChoiceF4Select(wxCommandEvent& event);
		void OnChoiceG1Select(wxCommandEvent& event);
		void OnChoiceG2Select(wxCommandEvent& event);
		void OnChoiceG3Select(wxCommandEvent& event);
		void OnChoiceG4Select(wxCommandEvent& event);
		void OnChoiceH1Select(wxCommandEvent& event);
		void OnChoiceH2Select(wxCommandEvent& event);
		void OnChoiceH3Select(wxCommandEvent& event);
		void OnChoiceH4Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
