#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
void rotireDr(int A[], int dimA);
using namespace std;
int main ()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    rotireDr(a, 5);
    for(i=0; i<N; i++) {
        cout<<a[i];
    }
}
void rotireDr(int A[], int dimA)
{
    int i, ultimul;
    ultimul = A[dimA-1];
    for(i=dimA-1;i>0;i--) {
        A[i] = A[i-1];
    }
    A[0] = ultimul;
}

// Sa se realizeze un program care roteste un vector spre dreapta
//cu o pozitie.
