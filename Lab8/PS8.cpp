// Se citesc N cuvinte de la tastatura, intr-un vector de stringuri.
//Sa se sorteze in ordine alfabetica acest vector.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef char string80[81];
#define N 5
using namespace std;
int main()
{
    string80 A[N];
    string80 aux;
    int suntInv;
    for(int i=0; i<N; i++) {
        cout<<"cuvant: ";
        cin>>A[i];
    }
    int ultim = N-1;
    for(;;) {
        suntInv = 0;
        for(int i=0; i<N; i++) {
            if(strcmp(A[i], A[i+1]) > 0) {
                strcpy(aux, A[i]);
                strcpy(A[i], A[i+1]);
                strcpy(A[i+1], aux);
                suntInv = 1;
            }
        }
        if(suntInv == 0) {
            break;
        }
        else {
            ultim --;
        }
    }
    for(int i=0; i<N; i++) {
        cout<<A[i]<<"\n";
    }
}