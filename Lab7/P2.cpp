#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
#define M 4
using namespace std;
int main()
{
    int A[N][M] = {5, 6, 20, 14,
                   21, 1, 18, 3,
                   7, 12, 9, 10};
    int B[N][M] = {0, 0, 0, 0};
    for(int i=0; i<N; i++) {
            B[i][0] = A[i][2];
            A[i][2] = A[i][3];
            A[i][3] = B[i][0];
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout<<"\n";
            cout<<A[i][j]<<"\n";
        }
    }
}

// Sa se comute doua coloane ale unei matrici intre ele. Matricea si 
//numere coloanelor care se comuta se vor citi de la tastatura.