/***************************************************************
 * Name:      MundialApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Karol Kowal, Marcin Kamiński, Paweł Niedziela (s98757@pollub.edu.pl, s98755@pollub.edu.pl, s98782@pollub.edu.pl)
 * Created:   2023-01-11
 * Copyright: Karol Kowal, Marcin Kamiński, Paweł Niedziela ()
 * License:
 **************************************************************/

#include "MundialApp.h"

//(*AppHeaders
#include "Menu.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(MundialApp);

bool MundialApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Menu Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
