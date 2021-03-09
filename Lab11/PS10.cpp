// Sa se scrie o functie ce permuta bitii de pe pozitiile i si j ale unui
//octet.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void comuta_ij(unsigned char *b, int i, int j);
int main()
{
    unsigned char a = 0xf0;
    comuta_ij(&a,0,7);
    cout<<"Dupa comutarea bitilor 0 si 7 octetul a=0x"<<a;
}
void comuta_ij(unsigned char *b, int i, int j)
{
    int bit_i;
    int bit_j;
    unsigned char masca_i;
    unsigned char masca_j;
    unsigned char masca;
    masca_i = 0x01 << i;
    masca_j = 0x01 << j;
    if(((*b)&masca_i) == 0) {
        bit_i = 0;
    }
    else{
        bit_i = 1;
    }
    if(((*b)&masca_j) == 0) {
        bit_j = 0;
    }
    else {
        bit_j = 1;
    }
    if(bit_i != bit_j) {
        masca = masca_i | masca_j;
        *b = (*b) ^ masca;
    }
}