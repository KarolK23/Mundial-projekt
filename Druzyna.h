#ifndef DRUZYNA_H
#define DRUZYNA_H
#include <iostream>
#include <wx/string.h>

using namespace std;

class Grupa;

class Druzyna
{
    friend Grupa;
    wxString nazwa;
    int punkty, bb, bz, bs, karne;


    public:
    Druzyna();
    Druzyna(wxString n);
    void SetBz(wxString b);
    void SetNazwa(wxString n);
    void SetKarne(wxString k);
    wxString GetNazwa();
    int GetKarne();
    int GetPkt();
    int GetBB();
    int GetBz();
    int GetBs();


    // Przeładowanie operatora, dziêki temu mo¿emy porównywaæ
    friend bool operator < (const Druzyna &d1, const Druzyna &d2);
    friend bool operator > (const Druzyna &d1, const Druzyna &d2);
    friend bool operator == (const Druzyna &d1, const Druzyna &d2);



};

#endif // DRUZYNA_H
