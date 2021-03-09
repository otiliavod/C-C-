// Sa se afiseze valoarea in baza 10 a tuturor octetilor ce au bitii 0, 2,
//si 5 egali cu 1(restul bitilor pot fi 0 sau 1).

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    for(i=0; i<256; i++) {
        if((i & 0x25) == 0x25) {
            cout<<i;
        }
    }
}