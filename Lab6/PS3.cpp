#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int A[N], i, j, esteDistinct;
    cout<<"Introduceti numarul 1: ";
    cin>>A[0];
    for(i=0; i<N; i++) {
        for(;;) {
            cout<<"Introduceti numarul "<<i+1;
            cin>>A[i];
            esteDistinct = 1;
            for(j=0; j<=i-1; j++) {
                if(A[j] == A[i]) {
                    esteDistinct = 0;
                    break;
                }
                if(esteDistinct == 1) {
                    break;
                }
            }
        }
         cout<<"A["<<i<<"]= "<<A[i]<<"\n";
    }
}

// Sa se citeasca de la tastatura N numere intregi distincte, ce se vor 
//memora untr-un vector A. Daca se tasteaza un numar care a fost deja
//intordus in vectorul A, se repeta tastarea pana se introduce un numar
//distinct.