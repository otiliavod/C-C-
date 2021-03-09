// Sa se scrie o functie recursiva care calculeaza suma elementelor unui
//vector.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
int suma(int A[], int n);
int main()
{
    int A[N] = {17, 5, 0, 9, 4};
    int S;
    S = suma(A,N);
    cout<<"Suma este: "<<S;
}

int suma(int A[], int n)
{
    if( n == 1) {
        return A[0];
    }
    else {
        return (A[n-1] + suma(A, n-1));
    }
}