// Se citeste un octet de la tastatura, caruia i se va calcula paritatea.
//La acest octet se adauga bitul de paritate, astfel incat per ansamblu
//paritatea cuvantului rezultat sa fie para. Se va construi deci un 
//cuvant in care cel mai putin semnificativ octet este octetul citit
//iar restul de 8 biti de obtin astfel:
//BIT8 = 0 daca paritatea octetului citit este para
//BIT8 = 1 daca paritatea octetului citit este impara
//BIT9...BIT15 = 0
//In final se va afisa in format binar cuvantul construit.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
unsigned int makeParitate(unsigned char b);
int paritate(unsigned char b);
void convertWord(unsigned int w, int A[]);
void afisareCuvantInbinar(unsigned int w);
int main()
{
    unsigned char b;
    int i_b;
    unsigned int w;
    int c, stop;
    stop = 0;
    cout<<"Tastati un octet (0..255): ";
    cin>>i_b;
    b = i_b;
    w = makeParitate(b);
    cout<<"Cuvantul cu bitul de paritate adaugat, in binar, este: ";
    afisareCuvantInbinar(w);
    if(c == 'n') {
        stop = 1;
    }while (!stop);
}
unsigned int makeParitate(unsigned char b)
{
    unsigned int word;
    word = b;
    if(paritate(b) == 0) {
        word = word | 0x0100;
    }
    return word;
}
int paritate(unsigned char b)
{
    int nr_1 = 0;
    for(int i=1; i<=8; i++) {
        if((b&0x80) != 0) {
            nr_1++;
        }
        b = b << 1;
    }
    if ((nr_1 % 2) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}
void afisareCuvantInBinar(unsigned int w)
{
    int A[16];
    convertWord(w,A);
    for(int i=15; i>=0; i--) {
        if((i == 11) || (i == 7) || (i == 3)) {
            cout<<A[i];
        }
        else {
            cout<<A[i];
        }
    }
}
void convertWord(unsigned int w, int A[])
{
    unsigned int MASCA[16] = {0x001,0x002,0x004,0x008,
                              0x010,0x020,0x040,0x080,
                              0x0100,0x0200,0x0400,0x0800,
                              0x1000,0x2000,0x4000,0x8000};
    for(int i=0; i<16; i++) {
        if((w&MASCA[i]) == 0) {
            A[i] = 0;
        }
        else {
            A[i] = 1;
        }
    }
}