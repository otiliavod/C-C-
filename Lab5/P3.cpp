#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
void rotireSt(int A[], int dimA);
using namespace std;
int main ()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    rotireSt(a, 5);
    for(i=0; i<N; i++) {
        cout<<a[i];
    }

}

void rotireSt(int A[], int dimA)
{
    int i, primul;
    primul = A[0];
    for(i=0;i<dimA-1;i++) {
        A[i] = A[i+1];
    }
    A[dimA-1] = primul;
}

// Sa se realizeze un program care roteste un vector spre stanga cu 
//o pozitie.