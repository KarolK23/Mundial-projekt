#include "Druzyna.h"
#include <iostream>
#include <string>
#include <wx/string.h>

using namespace std;

Druzyna::Druzyna()
{
    nazwa="brak";
    punkty=0;
    bb=0;
    bz=0;
    bs=0;
}

Druzyna::Druzyna(wxString n)
{
    nazwa=n;
}


void Druzyna::SetNazwa(wxString n)
{
    nazwa=n;
}

wxString Druzyna::GetNazwa()
{
    return nazwa;
}

void Druzyna::SetBz(wxString b)
{
    bz=wxAtoi(b);
}

int Druzyna::GetPkt()
{
    return punkty;
}

int Druzyna::GetBz()
{
    return bz;
}

int Druzyna::GetBs()
{
    return bs;
}

int Druzyna::GetBB()
{
    return bb;
}

// Hierarchia
// punkty < bilans bramek < bramki zdobyte
// \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/ \/

bool operator < (const Druzyna &d1, const Druzyna &d2)
{
    if(d1.punkty < d2.punkty)
        return true;
    if(d1.punkty == d2.punkty &&
       d1.bb < d2.bb)
        return true;
    if(d1.punkty == d2.punkty &&
       d1.bb == d2.bb &&
       d1.bz < d2.bz)
        return true;


       return false;

}

bool operator > (const Druzyna &d1, const Druzyna &d2)
{
    if(d2.punkty < d1.punkty)
        return true;
    if(d2.punkty == d1.punkty &&
       d2.bb < d1.bb)
        return true;
    if(d2.punkty == d1.punkty &&
       d2.bb == d1.bb &&
       d2.bz < d1.bz)
        return true;

       return false;

}

void Druzyna::SetKarne(wxString k)
{
    karne = wxAtoi(k);
}

int Druzyna::GetKarne()
{
    return karne;
}
