#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 4
using namespace std;
int main ()
{
    int A[N][N] = {5, 7, 3, 6,
                   0, 9, 2, 5,
                   0, 0, 3, 4,
                   0, 0, 0, 1};
    int suntNule = 1;
    for(int i=1; i<N; i++) {
        for(int j=0; j<i; j++) {
            if(A[i][j] != 0) {
                    suntNule = 0;
                     break;
                }
        }
    }
    if(suntNule == 1) {
        cout<<"Are toate elementele de sub diagonala principala nule";
    }
    else {
        cout<<"Nu are toate elementele de sub diagonala principala nule";
    }
}

// Sa se scrie un program care verifica daca o matrice patrata N*N are
//toate elementele de sub diagonala principala nule.