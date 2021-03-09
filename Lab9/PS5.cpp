// Sa se scrie o functie recursiva care stabileste daca un numar x este 
//prezent intr-un vector A de N caractere.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
int estePrezent(int x, int A[], int n);
int main() 
{
    int A[N] = {1, 2, 3, 4, 5};
    int x = 3;
    if(estePrezent(x, A, N) == 1) {
        cout<<"Este";
    }
    else {
        cout<<"Nu este";
    }
}

int estePrezent(int x, int A[], int n)
{
    if(n == 1) {
        if(x == A[0]) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if(x == A[n-1]) {
            return 1;
        }
        else {
            return estePrezent(x, A, n-1);
        }
    }
}