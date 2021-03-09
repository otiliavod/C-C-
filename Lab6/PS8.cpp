#include <iostream>
#include <stdio.h>
#include <conio.h>
#define na 5
#define nb 7
using namespace std;
int main ()
{
    int a[na], b[nb], c[na+nb], i;
    for(i=0; i<na; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    for(i=0; i<nb; i++) {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
    }
    for(i=0; i<na; i++) {
        c[i] = a[i];
    }
    for(i=0; i<nb; i++) {
        c[na + i] = b[i];
    }
    for(i=0; i<(na + nb); i++) {
        cout<<c[i]<<"\n";
    }
}

// Fie a si b doi vectori de numere intregi citite de la tastatura. Sa se
//construiasca vectorul c, obtinut prin concatenarea celor doi vectori.