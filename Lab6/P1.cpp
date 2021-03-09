#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main()
{
    int A[N], d;
    for(int i=0; i<N; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    d = 0;
    for(int i=0; i<N-1; i++) {
        if(A[i+1] - A[i] > d) {
            d = A[i+1] - A[i];
        }
    }
    cout<<d;
}

// Se da un vector de numere intregi. Care este cea mai mare distanta
//intre doua elemente alaturate?