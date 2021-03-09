#include <iostream>
#include <stdio.h>
#include <conio.h>
#define na 20
#define nb 10
using namespace std;
int main ()
{
    int a[na], b[nb], i, j;
    int c[na + nb], k;
    int esteComun;
    for(i=0; i<na; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    for(i=0; i<nb; i++) {
        cout<<"b["<<i<<"]= ";
        cin>>b[i];
    }
    for(i=0; i<na; i++) {
        c[k] = a[i];
    }
    k= na - 1;
    for(i=0; i<nb; i++) {
        esteComun = 0;
        for(j=0; j<na; j++) {
            if(b[i] == a[j]) {
                esteComun = 1;
                break;
            }
            if(esteComun == 0) {
                k++;
                c[k] = b[i];
            }
        }
    }
    for(i=0; i<=k; i++) {
        cout<<"c["<<i<<"]= "<<c[i]<<"\n";
    }
}

// Se citesc de la tastatra doua multimi de numere, a de 20 de elemente
//si b de 10 elemente. Se calculeaza si se afiseaza reuniunea celor doua
//multimi.