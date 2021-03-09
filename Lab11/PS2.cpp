// Sa se scrie o functie ce returneaza msb-ul(cel mai semnificativ bit) 
//si lsb-ul(cel mai putin semnificativ bit) dintr-un octet.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void msb_lsb(unsigned char b, unsigned char *adrMsb, unsigned char *adrLsb);
int main()
{
    unsigned char msb, lsb;
    unsigned char b = 0xF1;
    msb_lsb(b,&msb,&lsb);
    cout<<"Msb = "<<msb<<" "<<"Lsb= "<<lsb;
}
void msb_lsb(unsigned char b, unsigned char *adrMsb, unsigned char *adrLsb)
{
    unsigned char ms, ls;
    if((b&0x01) == 0) {
        ls = 0;
    }
    else {
        ls = 1;
    }
    if((b&0x80) == 0) {
        ms = 0;
    }
    else {
        ms = 1;
    }
    *adrMsb = ms;
    *adrLsb = ls;
}