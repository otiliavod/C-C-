#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void rotireSt(int A[], int dimA);
int main ()
{
    int i, A[6] = {138, 9, 19, 32, 31, 30};
    rotireSt(A, 6);
    for(i=0;i<6;i++) {
        cout<<A[i];
    }
}
void rotireSt(int A[], int dimA)
{
    int primul, i;
    primul = A[0];
    for(i=0;i<dimA-1;i++) {
        A[i] = A[i+1]; //ultimul
         A[dimA-1] = primul;
    }
   
}

// Sa se scrie o functie ce face rotirea spre stanga a unui vector,
//precum si un program de test.