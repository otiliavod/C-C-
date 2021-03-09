// Folosind structura elev definita anterior, citim N elevi intr-un vector.
//Sa se afiseze toti elevii care au nota > 7.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define NR_ELEVI 5
typedef struct{
    char nume[41];
    int nota;
} elev;
using namespace std;
int main()
{
    elev tab[NR_ELEVI];

    for(int i=0; i<NR_ELEVI; i++) {
        cout<<"Numele elevului numarul "<<i+1<<" : ";
        cin>>tab[i].nume;
        cout<<"Nota elevului numarul "<<i+1<<" : ";
        cin>>tab[i].nota;
    }
    for(int i=0; i<NR_ELEVI; i++) {
        if(tab[i].nota > 7) {
            cout<<tab[i].nume<<"\n"<<tab[i].nota<<"\n";
        }
    }
}