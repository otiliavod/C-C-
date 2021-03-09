// Se citesc 2 octeti a si b de la tastatura. Sa se permute prin program
//urmatorii 4 biti intre cei doi octeti:
//Inainte de permutare:
//a: a7 a6 a5 a4 a3 a2 a1 a0
//b: b7 b6 b5 b4 b3 b2 b1 b0
//Dupa permutare:
//a: a7 a6 a5 a4 b3 b2 b1 b0
//b: b7 b6 b5 b4 a3 a2 a1 a0

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    unsigned char a, b, a_vechi;
    int n;
    cout<<"Octetul a= ";
    cin>>n;
    a = n;
    cout<<"Octetul b= ";
    cin>>n;
    b = n;
    a_vechi = a;
    a = (a&0xF0) | (b&0x0F);
    b = (b&0xF0) | (a_vechi&0x0F);
    cout<<"Dupa permutare a= "<<a<<" "<<"b= "<<b;
}