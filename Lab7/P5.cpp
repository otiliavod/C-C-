#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
#define M 4
using namespace std;
int main() 
{
    int A[N][M] = {15, 6, 9, 22,
                    8, 11, 0, 9,
                    1, 7, 25, 17};
    int B[N][M] = {0, 0, 0, 0};
    for(int j =0; j<M; j++) {
        B[0][j] = A[1][j];
        A[1][j] = A[2][j];
        A[2][j] = B[0][j];
    }
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout<<A[i][j]<<"\n";
        }
    }
}

// Sa se permute doua linii ale unei matrici intre ele. Numerele celor
//doua linii, ca si matricea, se vor citi de la tastatura.