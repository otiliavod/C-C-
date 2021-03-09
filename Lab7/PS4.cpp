#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 3
using namespace std;
int main()
{
    int A[N][N];
    int nr;
    int aMaiFostGenerat[N*N];
    for(int i=0; i<N*N; i++) {
        aMaiFostGenerat[i] = 0;
    }
    rand();
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(;;) {
                nr = rand()%N*N;
                if(aMaiFostGenerat[nr] == 0) {
                    aMaiFostGenerat[nr] = 1;
                    break;
                }
                A[i][j] = nr;
            }
        }
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout<<A[i][j]<<"\n";
        }
    }
}

// Sa se creeze o matrice patrata de dimensiunea N initializata cu
//numere aleatoare, ce contine toate numerele din multimea:
//{0, 1, 2,...N*N-1}, fiecare element al multimii aparand o singura data.