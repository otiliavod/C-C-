// Foloind operatii de shiftare, sa se scrie o functie care returneaza
//suma bitilor de valoare 1 dintr-un octet.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int suma(unsigned char b);
int main()
{
    unsigned char b = 0xF2;
    cout<<"Suma bitilor de 1 este: "<<suma(b);
}
int suma(unsigned char b)
{
    int s = 0;
    unsigned char mascaCrt;
    for(int i=0; i<8; i++) {
        mascaCrt = 0x01 <<i;
        if((b&mascaCrt) != 0) {
            s++;
        }
    }
    return s;
}