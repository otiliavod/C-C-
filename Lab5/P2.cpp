#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 5
using namespace std;
int estePrim(int nr);
int main ()
{
    int a[N], i, x;
    for(int i=0; i<N; i++) {
        a[i] = 0;
    }
    x = 1;
    i = 0;
    while(a[N-1] == 0) {
        if(estePrim(x) == 1) {
            a[i] = x;
            cout<<a[i]<<"\n";
            i ++;
        }
        
        x ++;
    }
}

int estePrim(int nr)
{
    int i, este;
    este = 1;
    for(i=2;i<=nr/2;i++) {
        if(nr%i==0) {
            este = 0;
            break;
        }
    }
    return este;
}
// Se citeste un numar N de la tastatura. Sa se copieze primele N 
//numere prime intr-un vector.