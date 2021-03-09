#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main () 
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    int suntEgale = 1;
    for(i=0; i<N; i++) {
        if(a[i] != a[0]) {
            suntEgale = 0;
        }
    }
    if(suntEgale == 1) {
        cout<<"Toate numerele introduse sunt egale";
    }
    else {
        cout<<"Numerele introduse nu sunt egale";
    }
}


// Se citesc N numere intregi de la tastatura si se memoreaza intr-un
//vector a. Sa se afiseze daca toate numerele introduse sunt egale 
//intre ele.