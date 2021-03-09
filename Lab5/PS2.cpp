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
    int contor = 0;
    for(i=0; i<N; i++) {
        if(a[i] % 2 == 0) {
            contor ++;
        }
    }
    cout<<"Numarul de numere pare este: "<<contor;
}

// Se citesc N numere intregi de la tastatura si se memoreaza
//intr-un vector a. Sa se calculeze cate numere pare sunt in vector.