// Se citeste un caracter de la tastatura. Sa se afiseze daca este vocala 
//sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    char litera;
    cin>>litera;
    litera=(char) tolower(litera);
    switch(litera){
        case 'a':
        cout<<"Este vocala";
        break;
        case 'e':
        cout<<"Este vocala";
        break;
        case 'i':
        cout<<"Este vocala";
        break;
        case 'o':
        cout<<"Este vocala";
        break;
        case 'u':
        cout<<"Este vocala";
        break;
        default:
        cout<<"Este consoana";
    }
}
