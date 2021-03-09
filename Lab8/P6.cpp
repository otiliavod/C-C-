// Se citeste un numar natural de la tastatura. Numarul putand fi foarte
//mare, citirea lui se va face sub forma de sir.Sa se calculeze si afiseze
//care este cifra maxima din numar.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
    char nr[100];
    cout<<"Numarul este: ";
    cin>>nr;
    char max ='0';
    for(int i=0; i<strlen(nr); i++) {
        if(nr[i] > max) {
            max = nr[i];
        }
    }
    cout<<"Maximul este: "<<max;
}