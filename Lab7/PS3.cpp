#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
int main()
{
    int A[N][N] = {0, 1, 2,
                   2, 2, 2,
                   3, 3, 3};
    int sumaCrt, sumaMax, indexSumaMax;
    sumaMax = 0;
    for(int i=0; i<N; i++) {
        sumaMax = sumaMax + A[i][0];
    }
    indexSumaMax = 0;
    for(int j=1; j<N; j++) {
        sumaCrt = 0;
        for(int i=0; i<N; i++) {
            sumaCrt = sumaCrt + A[i][j];
        }
        if(sumaCrt > sumaMax) {
            sumaMax = sumaCrt;
            indexSumaMax = j;
        }
    }
    cout<<"Coloana cautata: "<<indexSumaMax<<"\n";
    cout<<"Are suma: "<<sumaMax;
}

// Pentru o matrice patrata A de numere intregi sa se calculeze si afieze
//care este numarul(indexul) coloanei ce are suma elementelor maxima fata
//de sumele elementelor din celelalte coloane ale matricii.