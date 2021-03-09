#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int estePrim(int a);
int main ()
{
    int N1, N2;
    cout<<"N1= ";
    cin>>N1;
    cout<<"N2= ";
    cin>>N2;
    int i;
    for(i=N1;i<=N2;i++) {
        if(estePrim(i)==1) {
            cout<<"Sunt numere prime: "<<i<<"\n";
        }
    }
    return 0;
}

int estePrim(int a)
{
    int i, este;
    este = 1;
    for(i=2;i<=a/2;i++) {
        if(a%i==0) {
            este = 0;
            break;
        }
    }
    return este;
}

// Sa se scrie o functie impreuna cu un program de test care sa afiseze 
//toate numerele prime dintr-un interval [N1,N2].