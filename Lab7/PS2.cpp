#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int A[50][50];
    int nA;
    cout<<"Dimensiunea matricii: ";
    cin>>nA;
    for(int i=0; i<nA; i++) {
        for(int j=0; j<nA; j++) {
            cout<<"A["<<i<<"]"<<"["<<j<<"]= ";
            cin>>A[i][j];
        }
    }
    for(int i=0; i<nA; i++) {
        for(int j=0; j<nA; j++) {
            cout<<A[i][j];
            cout<<"\n";
        }
    }
    for(int i=1; i<nA; i++) {
        for(int j=0; j<nA; j++) {
            A[i][j] = 0;
        }
    }
    for(int i=0; i<nA; i++) {
        for(int j=0; j<nA; j++) {
            cout<<A[i][j];
            cout<<"\n";
        }
    }
}

// Sa se substituie intr-o matrice patrata toate elementele aflate sub
//diagonala principala cu valoarea 0. Dimensiunea matricii se citste de 
//la tastatura.