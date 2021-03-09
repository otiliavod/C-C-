#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int a[N], b[N], i, j;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    j = 0;
    for(i=0; i<N; i++) {
        if(a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        }
    }
    if(j == 0) {
        cout<<"Nu sunt numere pare in vectorul a";
    }
    else {
        for(i=0; i<j; i++) {
            cout<<"b["<<i<<"]= "<<b[i]<<"\n";
        }
    }
}

// Se citesc N numere intregi de la tastatura si se memoreaza intr-un
//vector a. Sa se afiseze toate numerele pare din vectorul a intr-un 
//vector b. Sa se afisee vctorul b.