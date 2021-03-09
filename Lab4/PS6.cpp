#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int estePrim(int x);
void vectorPrime(int A[], int dimA, int B[], int dimB);
int main()
{
    int A[5]= {7, 9, 8, 19, 31};
    int B[5];
    int dimB;
    int i;
    vectorPrime(A, 5, B, dimB);
    for(i=0;i<dimB;i++){
        cout<<"Dimensiunea vectorului de nr prime este: "<<dimB;
    }
}
int estePrim(int x)
{
    int i;
    int este = 1;
    for(i=2;i<=sqrt(x);i++) {
        if(x%i==0) {
            este = 0;
            break;
        }
    }
    return este;
}
void vectorPrime(int A[], int dimA, int B[], int dimB)
{
    int i, j;
    j=0;
    for(i=0;i<dimA;i++) {
        if(estePrim(A[i])) {
            B[j] = A[i];
            j++;
            dimB = j;
        }
    
    }
}

// Sa se scrie o functie, impreuna cu un program de test, ce are ca parametru
//de intrare un vector A si dimensiunea lui si scoate ca rezultat vectorul
//ce contine toate numerele prime din A, precum si dimensiunea lui.