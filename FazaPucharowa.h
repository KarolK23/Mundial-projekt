#ifndef FAZAPUCHAROWA_H
#define FAZAPUCHAROWA_H

#include "MundialMain.h"
#include "Grupa.h"
#include "Menu.h"
#include "Druzyna.h"
#include "MeczeA.h"
#include "JUFinalu.h"
//(*Headers(FazaPucharowa)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)

class FazaPucharowa: public wxDialog
{
	public:

		FazaPucharowa(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~FazaPucharowa();

		//(*Declarations(FazaPucharowa)
		wxButton* Dodaj;
		wxPanel* Panel10;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxPanel* Panel3;
		wxPanel* Panel4;
		wxPanel* Panel5;
		wxPanel* Panel6;
		wxPanel* Panel7;
		wxPanel* Panel8;
		wxPanel* Panel9;
		wxStaticBitmap* braz1;
		wxStaticBitmap* braz2;
		wxStaticBitmap* zs1;
		wxStaticBitmap* zs2;
		wxStaticLine* StaticLine10;
		wxStaticLine* StaticLine11;
		wxStaticLine* StaticLine12;
		wxStaticLine* StaticLine13;
		wxStaticLine* StaticLine14;
		wxStaticLine* StaticLine15;
		wxStaticLine* StaticLine16;
		wxStaticLine* StaticLine17;
		wxStaticLine* StaticLine18;
		wxStaticLine* StaticLine19;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine20;
		wxStaticLine* StaticLine21;
		wxStaticLine* StaticLine22;
		wxStaticLine* StaticLine23;
		wxStaticLine* StaticLine24;
		wxStaticLine* StaticLine25;
		wxStaticLine* StaticLine26;
		wxStaticLine* StaticLine27;
		wxStaticLine* StaticLine28;
		wxStaticLine* StaticLine29;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine30;
		wxStaticLine* StaticLine31;
		wxStaticLine* StaticLine32;
		wxStaticLine* StaticLine33;
		wxStaticLine* StaticLine34;
		wxStaticLine* StaticLine35;
		wxStaticLine* StaticLine36;
		wxStaticLine* StaticLine37;
		wxStaticLine* StaticLine38;
		wxStaticLine* StaticLine39;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine40;
		wxStaticLine* StaticLine41;
		wxStaticLine* StaticLine42;
		wxStaticLine* StaticLine4;
		wxStaticLine* StaticLine5;
		wxStaticLine* StaticLine6;
		wxStaticLine* StaticLine7;
		wxStaticLine* StaticLine8;
		wxStaticLine* StaticLine9;
		wxStaticText* STFP10;
		wxStaticText* STFP11;
		wxStaticText* STFP12;
		wxStaticText* STFP13;
		wxStaticText* STFP14;
		wxStaticText* STFP15;
		wxStaticText* STFP16;
		wxStaticText* STFP1;
		wxStaticText* STFP2;
		wxStaticText* STFP31;
		wxStaticText* STFP32;
		wxStaticText* STFP3;
		wxStaticText* STFP4;
		wxStaticText* STFP5;
		wxStaticText* STFP6;
		wxStaticText* STFP7;
		wxStaticText* STFP8;
		wxStaticText* STFP9;
		wxStaticText* STFPC1;
		wxStaticText* STFPC2;
		wxStaticText* STFPC3;
		wxStaticText* STFPC4;
		wxStaticText* STFPC5;
		wxStaticText* STFPC6;
		wxStaticText* STFPC7;
		wxStaticText* STFPC8;
		wxStaticText* STFPF1;
		wxStaticText* STFPF2;
		wxStaticText* STFPP1;
		wxStaticText* STFPP2;
		wxStaticText* STFPP3;
		wxStaticText* STFPP4;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* WFP10;
		wxStaticText* WFP11;
		wxStaticText* WFP12;
		wxStaticText* WFP13;
		wxStaticText* WFP14;
		wxStaticText* WFP15;
		wxStaticText* WFP16;
		wxStaticText* WFP1;
		wxStaticText* WFP2;
		wxStaticText* WFP31;
		wxStaticText* WFP32;
		wxStaticText* WFP3;
		wxStaticText* WFP4;
		wxStaticText* WFP5;
		wxStaticText* WFP6;
		wxStaticText* WFP7;
		wxStaticText* WFP8;
		wxStaticText* WFP9;
		wxStaticText* WFPC1;
		wxStaticText* WFPC2;
		wxStaticText* WFPC3;
		wxStaticText* WFPC4;
		wxStaticText* WFPC5;
		wxStaticText* WFPC6;
		wxStaticText* WFPC7;
		wxStaticText* WFPC8;
		wxStaticText* WFPF1;
		wxStaticText* WFPF2;
		wxStaticText* WFPK1112;
		wxStaticText* WFPK12;
		wxStaticText* WFPK1314;
		wxStaticText* WFPK1516;
		wxStaticText* WFPK312;
		wxStaticText* WFPK34;
		wxStaticText* WFPK56;
		wxStaticText* WFPK78;
		wxStaticText* WFPK910;
		wxStaticText* WFPKC12;
		wxStaticText* WFPKC34;
		wxStaticText* WFPKC56;
		wxStaticText* WFPKC78;
		wxStaticText* WFPKF12;
		wxStaticText* WFPKP12;
		wxStaticText* WFPKP34;
		wxStaticText* WFPP1;
		wxStaticText* WFPP2;
		wxStaticText* WFPP3;
		wxStaticText* WFPP4;
		//*)

	protected:

		//(*Identifiers(FazaPucharowa)
		static const long ID_STATICLINE15;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT38;
		static const long ID_STATICLINE10;
		static const long ID_STATICTEXT40;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT39;
		static const long ID_STATICLINE20;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT41;
		static const long ID_STATICLINE11;
		static const long ID_STATICTEXT56;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT42;
		static const long ID_STATICLINE19;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT43;
		static const long ID_STATICLINE12;
		static const long ID_STATICTEXT57;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT44;
		static const long ID_STATICLINE17;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT45;
		static const long ID_STATICLINE13;
		static const long ID_STATICTEXT58;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT46;
		static const long ID_STATICLINE16;
		static const long ID_PANEL10;
		static const long ID_STATICLINE25;
		static const long ID_STATICTEXT23;
		static const long ID_STATICTEXT59;
		static const long ID_STATICLINE14;
		static const long ID_STATICTEXT60;
		static const long ID_STATICTEXT26;
		static const long ID_STATICTEXT61;
		static const long ID_STATICLINE26;
		static const long ID_PANEL2;
		static const long ID_PANEL6;
		static const long ID_PANEL5;
		static const long ID_STATICLINE23;
		static const long ID_STATICTEXT25;
		static const long ID_STATICTEXT62;
		static const long ID_STATICLINE18;
		static const long ID_STATICTEXT63;
		static const long ID_STATICTEXT27;
		static const long ID_STATICTEXT64;
		static const long ID_STATICLINE24;
		static const long ID_PANEL9;
		static const long ID_STATICLINE31;
		static const long ID_STATICTEXT32;
		static const long ID_STATICTEXT71;
		static const long ID_STATICLINE32;
		static const long ID_STATICTEXT72;
		static const long ID_STATICTEXT33;
		static const long ID_STATICTEXT73;
		static const long ID_STATICLINE33;
		static const long ID_STATICTEXT2;
		static const long ID_STATICLINE37;
		static const long ID_STATICTEXT83;
		static const long ID_STATICTEXT34;
		static const long ID_STATICTEXT81;
		static const long ID_STATICLINE38;
		static const long ID_STATICTEXT82;
		static const long ID_STATICTEXT35;
		static const long ID_STATICBITMAP3;
		static const long ID_STATICTEXT84;
		static const long ID_STATICBITMAP4;
		static const long ID_STATICLINE39;
		static const long ID_STATICTEXT1;
		static const long ID_STATICLINE40;
		static const long ID_STATICTEXT80;
		static const long ID_STATICTEXT36;
		static const long ID_STATICTEXT77;
		static const long ID_STATICLINE41;
		static const long ID_STATICTEXT78;
		static const long ID_STATICTEXT37;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT79;
		static const long ID_STATICBITMAP2;
		static const long ID_STATICLINE42;
		static const long ID_STATICLINE34;
		static const long ID_STATICTEXT74;
		static const long ID_STATICTEXT30;
		static const long ID_STATICTEXT75;
		static const long ID_STATICLINE35;
		static const long ID_STATICTEXT76;
		static const long ID_STATICTEXT31;
		static const long ID_STATICLINE36;
		static const long ID_PANEL8;
		static const long ID_STATICLINE27;
		static const long ID_STATICTEXT68;
		static const long ID_STATICTEXT22;
		static const long ID_STATICTEXT69;
		static const long ID_STATICLINE22;
		static const long ID_STATICTEXT70;
		static const long ID_STATICTEXT28;
		static const long ID_STATICLINE28;
		static const long ID_PANEL1;
		static const long ID_PANEL3;
		static const long ID_PANEL4;
		static const long ID_STATICLINE29;
		static const long ID_STATICTEXT65;
		static const long ID_STATICTEXT24;
		static const long ID_STATICTEXT66;
		static const long ID_STATICLINE21;
		static const long ID_STATICTEXT67;
		static const long ID_STATICTEXT29;
		static const long ID_STATICLINE30;
		static const long ID_PANEL7;
		static const long ID_STATICLINE5;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_STATICLINE8;
		static const long ID_STATICTEXT16;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT18;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT20;
		static const long ID_STATICTEXT19;
		static const long ID_STATICLINE7;
		static const long ID_STATICTEXT47;
		static const long ID_STATICTEXT21;
		static const long ID_STATICTEXT48;
		static const long ID_STATICLINE3;
		static const long ID_STATICTEXT49;
		static const long ID_STATICTEXT50;
		static const long ID_STATICLINE9;
		static const long ID_STATICTEXT53;
		static const long ID_STATICTEXT51;
		static const long ID_STATICTEXT54;
		static const long ID_STATICLINE4;
		static const long ID_STATICTEXT55;
		static const long ID_STATICTEXT52;
		static const long ID_STATICLINE6;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(FazaPucharowa)
		void OnTextCtrl23Text(wxCommandEvent& event);
		void OnTextCtrl20Text(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnDodajClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
