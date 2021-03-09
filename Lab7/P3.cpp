#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
int main() 
{
    int A[N][N];
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
    }
    int esteSimetrica = 1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(A[i][j] == A[j][i]) {
                esteSimetrica = 0;
                break;
            }
        }
    }
    if(esteSimetrica == 0) {
        cout<<"Este o matrice simetrica";
    }
    else {
        cout<<"Nu este o matrice simetrica";
    }
}

// Sa se verifice daca o matrice patrata N*N este simetrica (fata de 
//diagonala principala). 