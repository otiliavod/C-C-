// Se citesc de la tastatura, sub forma de siruri de caractere, doua 
//numere naturale foarte mari. Sa se afiseze care numar este mai mare.

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main ()
{
    char x[100], y[100];
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    int L1 = strlen(x);
    int L2 = strlen(y);
    if(L1 > L2) {
        cout<<"x > y";
        return 0;
    }
    if(L2 > L1) {
        cout<<"y > x";
        return 0;
    }
    for( int i=0; i<L1; i++) {
        int cifra_x = x[i] - '0';
        int cifra_y = y[i] - '0';
        if(cifra_x > cifra_y) {
            cout<<"x > y";
            return 0;
        }
        if(cifra_y > cifra_x) {
            cout<<"y > x";
            return 0;
        }
        cout<<"x = y";
    }
}