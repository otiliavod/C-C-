// Se citesc de la tastatura mai multe numere de tip complex care se 
//memoreaza intr-un vector de numere complexe. Sa se realizeze un program
//care sa calculeze si aifseze numarul de modul maxim.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    double re;
    double im;
} complex;
double modulComplex(complex c);
#define N 2
using namespace std;
int main()
{
    int indexMax;
    complex A[N];
    double ModulMaxim;
    double Modul[N];
    for(int i=0; i<N; i++) {
        cout<<"Partea reala a numarului: ";
        cin>>A[i].re;
        cout<<"Partea imaginara a numarului: ";
        cin>>A[i].im;
    }
    for(int i=0; i<N; i++) {
        Modul[i] = modulComplex(A[i]);
        ModulMaxim = Modul[0];
        indexMax = 0;
    }
    for(int i=1; i<N; i++) {
        if(Modul[i] > ModulMaxim) {
            ModulMaxim = Modul[i];
            indexMax = i;
        }
    }
    cout<<A[indexMax].re;
    cout<<A[indexMax].im;
}
double modulComplex(complex c)
{
    double rez;
    rez = sqrt(c.re*c.re + c.im*c.im);
    return rez;
}