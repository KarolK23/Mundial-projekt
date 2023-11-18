#ifndef REMIS_H
#define REMIS_H

//(*Headers(Remis)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class Remis: public wxDialog
{
	public:

		Remis(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Remis();

		//(*Declarations(Remis)
		wxButton* Button1;
		wxStaticLine* StaticLine1;
		wxStaticText* Remis1;
		wxStaticText* Remis2;
		wxStaticText* StaticText1;
		wxTextCtrl* R1;
		wxTextCtrl* R2;
		//*)

	protected:

		//(*Identifiers(Remis)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICLINE1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Remis)
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
