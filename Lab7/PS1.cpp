#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
#define M 4
using namespace std;
int main()
{
    int A[N][M] = {0, 1, 2, 5,
                   2, 2, 2, 2,
                   3, 3, 3, 3};
    int B[N][M] = {1, 5, 7, 9,
                   1, 3, 7, 0,
                   4, 4, 6, 2};
    int C[N][M];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0; i<N; i++) {
        cout<<"\n";
        for(int j=0; j<M; j++) {
            cout<<C[i][j];
        }
    }
}

// Sa se calculeze si afiseze suma a doua matrice de cate 3 linii si 4
//coloane fiecare.