#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 4
#define NxN N*N
using namespace std;
int main()
{
    int A[N][N] = {16, 3, 2, 13,
                    5, 10, 11, 8,
                    9, 6, 7, 12,
                    4, 15, 14, 1};
    int suntPrezente[NxN];
    int S, sCrt;
    int i, j;
    for(i=0; i<NxN; i++) {
        suntPrezente[i] = 0;
    }
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if((A[i][j] <1) && (A[i][j] > NxN)) {
                cout<<"Nu are toate elementele in gama 1,..N*N";
                exit (1);
            }
            else{
                suntPrezente[A[i][j] - 1] = 1;
            }
        }
    }
    for(i=0; i<NxN; i++) {
        if(suntPrezente[i] == 0) {
            cout<<"Nu are toate elementele in gama 1,..N*N";
            exit(1);
        }
    } 
    S = 0;
    for(i=0; i<N; i++) {
        S = S + A[i][i];
    }
    for(i=0; i<N; i++) {
        sCrt = 0;
        for(j=0; j<N; j++) {
            sCrt = sCrt + A[j][i];
        }
        if(sCrt != S) {
            cout<<"Nu este patrat magic";
            exit(1);
        }
    }
    sCrt = 0;
    for(i=0; i<N; i++) {
        sCrt = sCrt + A[i][N-i-1];
    }
    if(sCrt != S) {
        cout<<"Nu este patrat magic";
    }
    else{
        cout<<"Este patrat magic";
    }
}

// Scrieti un program care verifica daca o matrice este patrat magic. Se
//va verifica mai intai daca in matrice sunt prezente toate valorile din 
//multimea 1, 2, ... N*N.