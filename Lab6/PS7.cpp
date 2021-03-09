#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 5
int estePrim(int a);
using namespace std;
int main()
{
    int A[N], x, i, nrCrt;
    cout<<"x= ";
    cin>>x;
    for(i=0; i<N; i++) {
        A[i] = 0;
    }
    for(i=0; i<N; i++) {
        for(;;) {
            if(estePrim(nrCrt) == 1) {
                A[i] = nrCrt;
                break;
            }
            else {
                nrCrt ++;
            }
        }
    }
    for(i=0; i<N; i++) {
        cout<<A[i]<<"\n";
    }
}

int estePrim(int a)
{
    int i;
    int este = 1;
    for(i=2; i<a/2; i++) {
        if(a % i == 0) {
            este = 0;
            break;
        }
    }
    return este;
}

// Se citeste un numar natural x de la tastatura. Sa se copieze primele
//N numere prime strict mai mari ca x intr-un vector A. Sa se afiseze
//acest vector.
