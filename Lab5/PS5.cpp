#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int a[N], i, j;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    for(i=0; i<N; i++) {
        for(j=1; j<N; j++) {
            if(a[i] == a[j]) {
                cout<<"Nu sunt toate diferite";
                exit(0);
            }
            else {
                cout<<"Toate numerele sunt diferite";
            }
        }
    }
}

// Se citesc N numere intregi de la tastatura si se memoreaza intr-un
//vector a. Sa se afiseze daca toate numerele introduse sunt diferite
//intre ele.