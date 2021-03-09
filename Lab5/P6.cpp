#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
int main ()
{
    int a[N];
    for(int i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    int r = a[1] - a[0];
    int estePA = 1;
    for(int i=0; i<N-1; i++) {
        if(a[i+1] - a[i] !=r) {
            estePA = 0;
            break;
        }
    }
    if(estePA == 1) {
        cout<<"Sunt in progresie aritmetica";
    }
    else {
        cout<<"Nu sunt in progresie aritmetica";
    }
}

// Sa se realizeze un program care analizeaza daca intr=un vector
//elementele sunt in progresie aritmetica.