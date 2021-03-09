#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 10
using namespace std;
int main()
{
    int A[N], i, j, aux;
    int existaInversiuni;
    for(i=0; i<N; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    do {
        existaInversiuni = 0;
        for(i=0; i<N-1; i++) {
            if(A[i] < A[i+1]) {
                existaInversiuni = 1;
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;
            }
        }
    }
    while(existaInversiuni == 1);
    for(i=0; i<N; i++) {
        cout<<A[i]<<"\n";
    }
}

// Se da un vector A de numere intregi. Sa se sorteze in ordine 
//descrescatoare, folosind metoda bubble sort.