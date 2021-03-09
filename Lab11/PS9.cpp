// Sa se scrie o functie in care se realizeaza, pentru un octet, rotirea
//spre dreapta cu un bit.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void r_dreapta(unsigned char *b);
int main()
{
    unsigned char b;
    b = 0x01;
    r_dreapta(&b);
    cout<<"Dupa rotire: "<<b;
}
void r_dreapta(unsigned char *b)
{
    if((*b) & 0x01 != 0 ) {
        *b = ((*b) >> 1) | 0x80;
    } 
    else {
        *b = ((*b) >> 1) & 0x7F;
    }
}