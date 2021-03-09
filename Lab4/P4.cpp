#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void rotireDr(int A[], int dimA);
int main () 
{
    int i, A[6] = {5, 19, 7, 28, 6, 100};
    rotireDr(A, 6);
    for(i=0;i<6;i++) {
        cout<<A[i];
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
// Sa se scrie o functie ce face rotirea spre dreapta a unui vector.