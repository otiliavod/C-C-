#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
#define M 2
using namespace std;
int main()
{
    int A[N][M] = {1, 2,
                   0, 1,
                   4, 3};
    int V[N*M];
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            V[(i*M) + j] = A[i][j];
        }
    }
    for(int i=0; i<N*M; i++) {
        cout<<V[i];
    }
}

// Sa se copieze toate elementele unei matrici intr-un vector in 
//urmatoarea ordine : intai prima linie, apoi a doua linie, etc.