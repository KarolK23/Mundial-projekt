#ifndef MECZEA_H
#define MECZEA_H
#include "Grupa.h"

//(*Headers(MeczeA)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/gbsizer.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class MeczeA: public wxDialog
{
	public:

		MeczeA(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MeczeA();

		//(*Declarations(MeczeA)
		wxButton* LosujG;
		wxButton* Zatwierz;
		wxStaticLine* StaticLine17;
		wxStaticLine* StaticLine18;
		wxStaticLine* StaticLine19;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine20;
		wxStaticLine* StaticLine21;
		wxStaticLine* StaticLine22;
		wxStaticLine* StaticLine23;
		wxStaticLine* StaticLine24;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine4;
		wxStaticLine* StaticLine5;
		wxStaticLine* StaticLine6;
		wxStaticLine* StaticLine7;
		wxStaticLine* StaticLine8;
		wxStaticText* KolejkaX;
		wxStaticText* NazwaK1A1;
		wxStaticText* NazwaK1A2;
		wxStaticText* NazwaK1A3;
		wxStaticText* NazwaK1A4;
		wxStaticText* NazwaK1B1;
		wxStaticText* NazwaK1B2;
		wxStaticText* NazwaK1B3;
		wxStaticText* NazwaK1B4;
		wxStaticText* NazwaK1C1;
		wxStaticText* NazwaK1C2;
		wxStaticText* NazwaK1C3;
		wxStaticText* NazwaK1C4;
		wxStaticText* NazwaK1D1;
		wxStaticText* NazwaK1D2;
		wxStaticText* NazwaK1D3;
		wxStaticText* NazwaK1D4;
		wxStaticText* NazwaK1E1;
		wxStaticText* NazwaK1E2;
		wxStaticText* NazwaK1E3;
		wxStaticText* NazwaK1E4;
		wxStaticText* NazwaK1F1;
		wxStaticText* NazwaK1F2;
		wxStaticText* NazwaK1F3;
		wxStaticText* NazwaK1F4;
		wxStaticText* NazwaK1G1;
		wxStaticText* NazwaK1G2;
		wxStaticText* NazwaK1G3;
		wxStaticText* NazwaK1G4;
		wxStaticText* NazwaK1H1;
		wxStaticText* NazwaK1H2;
		wxStaticText* NazwaK1H3;
		wxStaticText* NazwaK1H4;
		wxTextCtrl* K1A1;
		wxTextCtrl* K1A2;
		wxTextCtrl* K1A3;
		wxTextCtrl* K1A4;
		wxTextCtrl* K1B1;
		wxTextCtrl* K1B2;
		wxTextCtrl* K1B3;
		wxTextCtrl* K1B4;
		wxTextCtrl* K1C1;
		wxTextCtrl* K1C2;
		wxTextCtrl* K1C3;
		wxTextCtrl* K1C4;
		wxTextCtrl* K1D1;
		wxTextCtrl* K1D2;
		wxTextCtrl* K1D3;
		wxTextCtrl* K1D4;
		wxTextCtrl* K1E1;
		wxTextCtrl* K1E2;
		wxTextCtrl* K1E3;
		wxTextCtrl* K1E4;
		wxTextCtrl* K1F1;
		wxTextCtrl* K1F2;
		wxTextCtrl* K1F3;
		wxTextCtrl* K1F4;
		wxTextCtrl* K1G1;
		wxTextCtrl* K1G2;
		wxTextCtrl* K1G3;
		wxTextCtrl* K1G4;
		wxTextCtrl* K1H1;
		wxTextCtrl* K1H2;
		wxTextCtrl* K1H3;
		wxTextCtrl* K1H4;
		//*)

	protected:

		//(*Identifiers(MeczeA)
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICLINE3;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL10;
		static const long ID_STATICLINE6;
		static const long ID_TEXTCTRL12;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICLINE2;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT8;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICLINE5;
		static const long ID_TEXTCTRL11;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICLINE1;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICLINE4;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT13;
		static const long ID_TEXTCTRL13;
		static const long ID_STATICLINE7;
		static const long ID_TEXTCTRL14;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_TEXTCTRL15;
		static const long ID_STATICLINE8;
		static const long ID_TEXTCTRL16;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT18;
		static const long ID_TEXTCTRL17;
		static const long ID_STATICLINE17;
		static const long ID_TEXTCTRL25;
		static const long ID_STATICTEXT32;
		static const long ID_STATICTEXT20;
		static const long ID_TEXTCTRL19;
		static const long ID_STATICLINE19;
		static const long ID_TEXTCTRL27;
		static const long ID_STATICTEXT26;
		static const long ID_STATICTEXT22;
		static const long ID_TEXTCTRL21;
		static const long ID_STATICLINE21;
		static const long ID_TEXTCTRL29;
		static const long ID_STATICTEXT28;
		static const long ID_STATICTEXT24;
		static const long ID_TEXTCTRL23;
		static const long ID_STATICLINE24;
		static const long ID_TEXTCTRL31;
		static const long ID_STATICTEXT30;
		static const long ID_STATICTEXT19;
		static const long ID_TEXTCTRL18;
		static const long ID_STATICLINE18;
		static const long ID_TEXTCTRL26;
		static const long ID_STATICTEXT33;
		static const long ID_STATICTEXT21;
		static const long ID_TEXTCTRL20;
		static const long ID_STATICLINE20;
		static const long ID_TEXTCTRL28;
		static const long ID_STATICTEXT27;
		static const long ID_STATICTEXT23;
		static const long ID_TEXTCTRL22;
		static const long ID_STATICLINE22;
		static const long ID_TEXTCTRL30;
		static const long ID_STATICTEXT29;
		static const long ID_STATICTEXT25;
		static const long ID_TEXTCTRL24;
		static const long ID_STATICLINE23;
		static const long ID_TEXTCTRL32;
		static const long ID_STATICTEXT31;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(MeczeA)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnamText(wxCommandEvent& event);
		void OnZatwierzClick(wxCommandEvent& event);
		void OnM2A3Text(wxCommandEvent& event);
		void OnTextCtrl4Text(wxCommandEvent& event);
		void OnLosujGClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
