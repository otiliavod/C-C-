#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int esteSC(int A[], int dimA);
int main()
{
    int i, A[6] = {1, 9, 19, 30, 31, 36};
    cout<<esteSC(A, 6);
}
int esteSC(int A[], int dimA)
{
    int i;
    int este = 1;
    for(i=0;i<dimA-1;i++) {
        if(A[i+1]<A[i]) {
            este = 0;
            break;
        }
    }
    return este;
}

// Sa se scrie o functie, impreuna cu un program de test, care afiseaza
//daca un vector este sau nu sortat crescator.