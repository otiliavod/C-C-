// Se da un octet b. Sa se calculeze si afiseze care este cel mai mare
//numar ce se poate obtine aranjand in alta ordine bitii octetului b.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int nr_biti_1(unsigned char b);
int main()
{
    unsigned char b = 6;
    int nr_1;
    int max;
    nr_1 = nr_biti_1(b);
    max = 0;
    for(int i=0; i<nr_1; i++) {
        max = max + pow(2,8-i);
    }
    cout<<"Valoarea maxima ce se poate obtine este: "<<max;
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