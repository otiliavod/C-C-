// Sa se sorteze in ordin crescatoare, folosind metoda selectiei maximului
//un vector de N componente, numere intregi.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
void ordonare(int A[], int dim);
int getPozMax(int A[], int dim);
int main()
{
    int A[N] = {17, 55, 0, 9, 4};
    int i;
    ordonare(A, N);
    for(i=0; i<N; i++) {
        cout<<A[i];
    }
}

void ordonare(int A[], int dim)
{
    int pozMax, index;
    if(dim == 0) {
        return;
    }
    pozMax = getPozMax(A, dim);
    int aux;
    aux = A[dim-1];
    A[dim-1] = A[pozMax];
    A[pozMax] = aux;
    ordonare(A,dim-1);
}

int getPozMax(int A[], int dim)
{
    int pozMax;
    int i;
    pozMax = 0;
    for(i=1; i<dim; i++) {
        if(A[i] > A[pozMax]) {
            pozMax = i;
        }
    }
    return pozMax;
}