#ifndef JUFINALU_H
#define JUFINALU_H
#include "FazaPucharowa.h"
//(*Headers(JUFinalu)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class JUFinalu: public wxDialog
{
	public:

		JUFinalu(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~JUFinalu();

		//(*Declarations(JUFinalu)
		wxButton* Button1;
		wxButton* Zatwierdz;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine4;
		wxStaticLine* StaticLine5;
		wxStaticLine* StaticLine6;
		wxStaticLine* StaticLine7;
		wxStaticLine* StaticLine8;
		wxStaticText* Nazwa;
		wxStaticText* STJU10;
		wxStaticText* STJU11;
		wxStaticText* STJU12;
		wxStaticText* STJU13;
		wxStaticText* STJU14;
		wxStaticText* STJU15;
		wxStaticText* STJU16;
		wxStaticText* STJU1;
		wxStaticText* STJU2;
		wxStaticText* STJU3;
		wxStaticText* STJU4;
		wxStaticText* STJU5;
		wxStaticText* STJU6;
		wxStaticText* STJU7;
		wxStaticText* STJU8;
		wxStaticText* STJU9;
		wxTextCtrl* TCJU10;
		wxTextCtrl* TCJU11;
		wxTextCtrl* TCJU12;
		wxTextCtrl* TCJU13;
		wxTextCtrl* TCJU14;
		wxTextCtrl* TCJU15;
		wxTextCtrl* TCJU16;
		wxTextCtrl* TCJU1;
		wxTextCtrl* TCJU2;
		wxTextCtrl* TCJU3;
		wxTextCtrl* TCJU4;
		wxTextCtrl* TCJU5;
		wxTextCtrl* TCJU6;
		wxTextCtrl* TCJU7;
		wxTextCtrl* TCJU8;
		wxTextCtrl* TCJU9;
		//*)

	protected:

		//(*Identifiers(JUFinalu)
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICLINE1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICLINE2;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICLINE3;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICLINE4;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICLINE5;
		static const long ID_TEXTCTRL10;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_TEXTCTRL11;
		static const long ID_STATICLINE6;
		static const long ID_TEXTCTRL12;
		static const long ID_STATICTEXT12;
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
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(JUFinalu)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnZatwierdzClick(wxCommandEvent& event);
		void OnLosujClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
