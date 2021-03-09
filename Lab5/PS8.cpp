#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    int poz;
    cout<<"poz= ";
    cin>>poz;
    int x;
    cout<<"x= ";
    cin>>x;
    for(i=N-1; i>=poz; i--) {
        a[i+1] = a[i];
    }
    a[poz] = x;
    for(i=0; i<=N; i++) {
        cout<<"a["<<i<<"]= "<<a[i]<<"\n";
    }
}


// Se citesc N numere intregi de la tastatura si se memoreaza intr-un
//vector a. Se citeste un numar intrg poz, ce reprezinta o pozitie din
//vector. Se citeste un numar intreg x. Sa se insereze numarul x pe 
//pozitia poz din vector si sa se afiseze noul vector.