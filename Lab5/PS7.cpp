#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    int poz;
    cout<<"poz= ";
    cin>>poz;
    for(i=poz+1; i<N; i++) {
        a[i-1] = a[i];
    }
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= "<<a[i]<<"\n";
    }
}

// Se citesc N numere intregi de la tastatura si se memoreaza intr-un 
//vector a. Se citeste un numar intreg poz, ce reprezinta o pozitie in 
//vector. Sa se stearga din vector numarul aflat pe pozitia poza si sa
//se afiseze noul vector.