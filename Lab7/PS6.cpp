#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int A[10][10];
    int nL, nC;
    cout<<"Numar linii: ";
    cin>>nL;
    cout<<"Numar coloane: ";
    cin>>nC;
    for(int i=0; i<nL; i++) {
        for(int j=0; j<nC; j++) {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
    }
    int i, j;
    for(j=i+1; j<nL*nC; j++) {
        if(A[i/nC][i%nC] == A[j/nC][j%nC]) {
            cout<<"Nu sunt toate diferite";
        }
        cout<<"Sunt toate diferite";
    }
}

// Se citesc de la tastatura dimensiunile unei matrici de numere intregi.
//Se citeste apoi matricea. Sa se afiseze daca sunt diferite intre ele
//toate elementele matricii sau nu.