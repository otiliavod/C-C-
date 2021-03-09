#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int suntDiferite(int A[], int dimA);
int main()
{
    int A[6] = {138, 9, 19, 32, 31, 18};
    cout<<"Sunt diferite(A,6)";
}
int suntDiderite(int A[], int dimA)
{
    int i, j;
    for(i=0;i<dimA;i++) {
        for(j=i+1;j<dimA;j++) {
            if(A[i]==A[j]) {
                return 0;
            }
        }
    }
    return 1;
}


// Sa se scrie o functie, impreuna cu un program de test care afiseaza daca
//elementele unui vector sunt sau nu diferite.