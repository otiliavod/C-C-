// Sa se scrie o functie ce are ca argumente de intrare doi octeti b1 si 
//b2. Functia returneaza 1 daca b1 si b2 au acelasi numar de biti de 1,
//si returneaza 0 in caz contar.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int nr_biti_1(unsigned char b);
int compara(unsigned char b1, unsigned char b2);
int main()
{
    unsigned char b1 = 0x71;
    unsigned char b2 = 0x30;
    if(compara(b1,b2)) {
        cout<<"Au numar egal de biti de 1";
    }
    else {
        cout<<"Au numere diferite de biti de 1";
    }
}
int nr_biti_1(unsigned char b)
{
    int n1;
    unsigned char masca[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
    n1 = 0;
    for(int i=0; i<8; i++) {
        if((b&masca[i]) != 0) {
            n1++;
        }
    }
    return n1;
}
int compara(unsigned char b1, unsigned char b2)
{
    int nr_b1, nr_b2;
    nr_b1 = nr_biti_1(b1);
    nr_b2 = nr_biti_1(b2);
    if(nr_b1 == nr_b2) {
        return 1;
    }
    else {
        return 0;
    }
}