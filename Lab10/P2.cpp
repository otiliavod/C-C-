// Sa se scrie o functie in care se realizeaza inmultirea a doua numere
//complexe.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    double re;
    double im;
} complex;
complex inmultire(complex a, complex b);
void afisareComplex(complex c);
using namespace std;
int main()
{
    complex x, y, rezultat;
    cout<<"Partea reala si partea imaginara a primului numar: ";
    cin>>x.re>>x.im;
    cout<<"Partea reala si partea imaginara a numarului al doilea: ";
    cin>>y.re>>y.im;
    rezultat = inmultire(x,y);
    cout<<"Inmultirea celor doua numere este: ";
    afisareComplex(rezultat);
}
complex inmultire(complex a, complex b)
{
    complex rez;
    rez.re = (a.re*a.im) - (b.re*b.im);
    rez.im = (a.re*b.im) + (a.im*b.re);
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