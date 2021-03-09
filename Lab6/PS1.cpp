#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int estePrim(int nr);
using namespace std;
int main() 
{
    int A[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int B[20], j;
    j = 0;
    for(int j=0; j<20; j++) {
        B[j] = 0;
    }
    for(int i=0; i<20; i++) {
        if(estePrim(A[i]) == 1) {
            B[j] = A[i];
            j ++;
        }
    }
    if(j == 0) {
        cout<<"Nu sunt numere prime in vectorul A";
    }
    else {
        for(j=0; j<20; j++) {
            if(B[j] != 0 ) {
                cout<<B[j]<<"\n";
            }
        }
    }
}

int estePrim(int nr)
{
    int i;
    int este = 1;
    for(i=2; i<nr/2; i++) {
        if(nr % i == 0) {
            este = 0;
            break;
        }
    }
    return este;
}

// Se citesc 20 de numere intregi de la tastatura si se memoreaza intr-un
//vector A. Sa se construiasca vectorul B ce contine toate numerele prime
//din vectorul A.