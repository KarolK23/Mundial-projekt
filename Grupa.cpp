#include "Grupa.h"

Grupa::Grupa()
{
/*
 //   cout << "Podaj nazwe druzyny 1: ";
    d1.SetNazwa("BRAK");

 //   cout << "Podaj nazwe druzyny 2: ";
    d2.SetNazwa("BRAK");

 //   cout << "Podaj nazwe druzyny 3: ";
    d3.SetNazwa("BRAK");

 //   cout << "Podaj nazwe druzyny 4: ";
    d4.SetNazwa("BRAK");
*/
    /*tablica[0]=d1;
    tablica[1]=d2;
    tablica[2]=d3;
    tablica[3]=d4;*/
}

void Grupa::dodaj_mecz(Druzyna &a, Druzyna &b, wxString home, wxString guest)
{
    int abz, bbz;

   // cout << endl << "MECZ " << a.GetNazwa() << " - " << b.GetNazwa() << endl << endl;

   // cout << "Ile bramek strzelila " << a.GetNazwa() << "?: ";
    //cin >> abz;
    abz = wxAtoi(home);
   // cout << "abz: " << abz << endl;
   // cout << "Ile bramek strzelila " << b.GetNazwa() << "?: ";
    //cin >> bbz;
    bbz = wxAtoi(guest);
   // cout << "bbz: " << bbz << endl;
   // cout << endl;
    a.bz=a.bz+abz;
    b.bz=b.bz+bbz;
    a.bs=a.bs+bbz;
    b.bs=b.bs+abz;
    a.bb=a.bb+abz-bbz;
    b.bb=b.bb+bbz-abz;

    if(abz == bbz)
    {
        a.punkty=a.punkty+1;
        b.punkty=b.punkty+1;
    }
    else if (abz>bbz)
    {
        a.punkty=a.punkty+3;
    }
    else
    {
        b.punkty=b.punkty+3;
    }


}

void Grupa::sortuj()
{

    int n=4;
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n-i; j++)
        {
            if(tablica[j-1] < tablica[j])
            {
                Druzyna dp = tablica[j-1];
                tablica[j-1] = tablica[j];;
                tablica[j] = dp;
            }
        }
    }

}




void Grupa::pokaz_grupe()
{
    /*sortuj();

    cout << tablica[0].nazwa << " | pkt: " << tablica[0].punkty << " | BB: " << tablica[0].bb << " | BZ: " << tablica[0].bz << " | BS: " << tablica[0].bs << endl;
    cout << tablica[1].nazwa << " | pkt: " << tablica[1].punkty << " | BB: " << tablica[1].bb << " | BZ: " << tablica[1].bz << " | BS: " << tablica[1].bs << endl;
    cout << tablica[2].nazwa << " | pkt: " << tablica[2].punkty << " | BB: " << tablica[2].bb << " | BZ: " << tablica[2].bz << " | BS: " << tablica[2].bs << endl;
    cout << tablica[3].nazwa << " | pkt: " << tablica[3].punkty << " | BB: " << tablica[3].bb << " | BZ: " << tablica[3].bz << " | BS: " << tablica[3].bs << endl;*/
}

void Grupa::reset(Druzyna &a, Druzyna &b, Druzyna &c, Druzyna &d)
{
    /*#define Z(CH) if(Choice ## CH ->GetSelection()==i){Choice ## CH->SetSelection(0);}
    #define res(r) r.bb=0; r.bz=0; r.punkty=0; r.bs=0;
    res(a);
    res(b);
    res(c);
    res(d);*/

    //okazalo sie to niepotrzebne

}

