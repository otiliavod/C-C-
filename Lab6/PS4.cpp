#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 10
using namespace std;
int main()
{
    int A[N], i, j, aux;
    for(i=0; i<N; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    for(i=0; i<N-1; i++) {
        for(j=i+1; j<N; j++) {
            if(A[i] > A[j]) {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
    for(i=0; i<N; i++) {
        cout<<A[i]<<"\n";
    }
}

// Se da un vector A de numere intregi. Sa se sorteze in ordine 
//crescatoare, folosind metoda sortarii prin interschimbare.