#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int A[5], B[5], i;
    long int produsScalar = 0;
    for(i=0; i<5; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    for(i=0; i<5; i++) {
        cout<<"B["<<i<<"]= ";
        cin>>B[i];
    }
    for(i=0; i<5; i++) {
        produsScalar = produsScalar + (A[i] * B[i]);
    }
    cout<<"ProdusScalar= "<<produsScalar;
}

// Sa se realizeze un program care realizeaza produsul scalar a doi
//vectori.