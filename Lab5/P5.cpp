#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void intersectie(int A[], int dimA, int B[], int dimB, int C[], int dimC);
int main() 
{
    int dimA, dimB, dimC;
    cout<<"dimA= ";
    cin>>dimA;
    cout<<"dimB= ";
    cin>>dimB;
     dimC = dimA;
    if(dimB>dimC) {
        dimC = dimB;
    }
    int A[dimA], B[dimB], C[dimC];
    for(int i=0; i<dimA; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    for(int i=0; i<dimB; i++) {
        cout<<"B["<<i<<"]= ";
        cin>>B[i];
    }
    for(int k=0; k<dimC; k++) {
        C[k] = 0;
    }
    intersectie(A, dimA, B, dimB, C, dimC);
    for(int k=0; k<dimC; k++) {
        if(C[k] != 0) {
            cout<<"C["<<k<<"]= "<<" "<<C[k]<<"\n";
        }
    }
}

void intersectie(int A[], int dimA, int B[], int dimB, int C[], int dimC)
{
    int i, j, k;
    k = 0;
    for(i=0; i<dimA; i++) {
        for(j=0; j<dimB; j++) {
            if(A[i] == B[j]) {
                C[k] = A[i];
                k ++;
            }
        }
    }
}

// Sa se calculeze intersectia a doua multimi repreentate prin vectori.