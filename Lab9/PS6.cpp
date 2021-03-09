// Sa se scrie o functie recursiva ce compara doi vectori de aceesi 
//dimensiune. Returneaza 1, in cazul in care cei doi vectori sunt egali si
//0, in caz contrar.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 4
using namespace std;
int compara(int A[], int B[], int n);
int main() 
{
    int A[N] = {1, 2, 3, 4};
    int B[N] = {1, 2, 3, 4};
    if(compara(A, B, N) == 1) {
        cout<<"Sunt egali";
    }
    else {
        cout<<"Nu sunt egali";
    }
}

int compara(int A[], int B[], int n)
{
    if(n == 1) {
        if(A[0] == B[0]) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if(A[n-1] == B[n-1]) {
            return compara(A, B, n-1);
        }
        else return 0;
    }
}