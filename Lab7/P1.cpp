#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 4
using namespace std;
int main ()
{
    int A[N][N] = {2, 5, 7, 9,
                   1, 0, 10, 6,
                   4, 11, 3, 8,
                   0, 5, 8, 3};
    int max = A[0][0];
    int linieMax = 0;  
    int colMax = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(A[i][j] > max) {
                max = A[i][j];
                linieMax = i;
                colMax - j;
            }
        }
    }
    cout<<"Maximul este: "<<max<<"\n";
    cout<<linieMax<<"\n";
    cout<<colMax;
}

// Se citesc 16 numere intregi de la tastatura. Aceste numere trebuie 
//memorate intr-o matrice patrata de 4 linii si 4 coloane.Sa se calculeze
//si afiseze maximul din matrice cat si linia si coloana in care apare
//acest maxim.