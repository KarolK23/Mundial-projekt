#ifndef GRUPA_H
#define GRUPA_H
#include "Druzyna.h"
#include <wx/string.h>



class Grupa//:public Druzyna
{



    public:
    Druzyna tablica[0];
    Grupa();
    Druzyna d1, d2, d3, d4;
    void dodaj_mecz(Druzyna &a, Druzyna &b, wxString home, wxString guest);
    void pokaz_grupe();
    void sortuj();
    void reset(Druzyna &a, Druzyna &b, Druzyna &c, Druzyna &d);

};

#endif // GRUPA_H
