#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
int main()
{
    int A[N][N] = {2, 10, 9,
                   0, 5, 12,
                   3, 7, 6,};
    int B[N];
    int i = 1;
    for(int j=0; j<N; j++) {
       B[j] = A[1][j];
       cout<<B[j]<<"\n";
   }
} 

// Se citesc mai multe numere intregi, intr-o matrice. Se citeste de 
//asemenea numarul unei linii. Sa se copieze linia respectiva intr-un 
//vector.