// Sa se scrie o functie recursiva ce calculeaza maximul dintr-un vector.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
int maxim(int A[], int n);
int main() 
{
    int A[N] = {1, 5, 20, 1, 3};
    int max;
    max = maxim(A, N);
    cout<<"Maxim: "<<max;
}

int maxim(int A[], int n)
{
    int max1;
    if(n == 1) {
        return A[0];
    }
    else {
        max1 = maxim(A, n-1);
        if(max1 > A[n-1]) {
            return max1;
        }
        else {
            return A[n-1];
        }
    }
}