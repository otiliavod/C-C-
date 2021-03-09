// Se defineste in acest program structura complex, ce consta din doua 
//numere reale: partea reala si partea imaginara a unui numar complex. Se
//va scrie o functie in care se calculeaza modulul unui numar complex, 
//o functie in care se calculeaza conjugatul unui numar complex, si o alta
//funtie in care se calculeaza suma a trei numere complexe.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    double re;
    double im;
} complex;
double modulComplex(complex c);
complex sumaComplex(complex c1, complex c2, complex c3);
complex complexConjugat(complex c);
void afisareComplex(complex c);
using namespace std;
int main()
{
    complex c1, c2, c3, rezultat;
    double modul;
    cout<<"Partea reala si partea imaginara a primului numar: ";
    cin>>c1.re>>c1.im;
    cout<<"Partea reala si partea imaginara a numarului al doilea: ";
    cin>>c2.re>>c2.im;
    cout<<"Partea reala si partea imaginara a numarului al treilea: ";
    cin>>c3.re>>c3.im;
    modul = modulComplex(c1);
    cout<<"Modulul primului numar: "<<modul;
    modul = modulComplex(c2);
    cout<<"Modulul numarului doi: "<<modul;
    rezultat = sumaComplex(c1,c2,c3);
    cout<<"Suma celor trei numere este: ";
    afisareComplex(rezultat);
    rezultat = complexConjugat(c1);
    afisareComplex(c1);
    cout<<"este: ";
    afisareComplex(rezultat);
}
double modulComplex(complex c)
{
    double rez;
    rez = sqrt(c.re * c.re + c.im * c.im);
    return rez;
}
complex sumaComplex(complex c1, complex c2, complex c3)
{
    complex rez;
    rez.re = c1.re + c2.re + c3.re;
    rez.im = c1.im +c2.im + c3.im;
    return rez;
}
complex complexConjugat(complex c)
{
    complex rez;
    rez.re = c.re;
    rez.im = c.im;
    return rez;
}
void afisareComplex(complex c)
{
    if(c.im > 0) {
        cout<<c.re<<c.im;
    }
    else if(c.im == 0) {
        cout<<c.re;
    }
    else {
        cout<<c.re<<-c.im;
    }
}