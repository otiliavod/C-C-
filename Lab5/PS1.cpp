#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main () 
{
    int a[N], i, max;
    for(i=0; i<N; i++) {
        cout<<"a[i]= ";
        cin>>a[i];
    }
    max = a[0];
    for(i=1; i<N; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    cout<<"Maximul este: "<<max;
}

// Se citesc N numere intregi de la tastatura si se numeroteaza intr-un
//vector a. Sa se calculeze maximul din vector.