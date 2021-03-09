// Se citesc 4 numere intregi de la tastatura.Sa se afiseze daca cele 4 numere
//sunt in ordine strict crescatoare.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if((a<b)&&(b<c)&&(c<d)){
        cout<<"Sunt in ordine strict crescatoare";
    }
    else{
        cout<<"Nu sunt in ordine strict crescatoare";
    }
}
