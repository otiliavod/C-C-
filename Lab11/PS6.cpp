// Sa se scrie o functie ce are ca parametru de intrare un numar intreg
//fara semn. Functia returneaza valoarea complementara(bit cu bit) a celui
//mai semnificativ octet din numar.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
unsigned char complementareOctet(unsigned int nr);
int main()
{
    unsigned int nr;
    nr = 0x010F;
    cout<<"rezultat= "<<complementareOctet(nr);
}
unsigned char complementareOctet(unsigned int nr)
{
    unsigned char b;
    b = nr/256;
    return ~b;
}