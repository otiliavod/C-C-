// Se citesc patru numere intregi de la tastatura. Sa se afiseze daca cele
//4 numere pot fi laturile unui patrat sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if((a==b)&&(b==c)&&(c==d)){
        cout<<"Pot fi laturile unui patrat";
    }
    
    else {
        cout<<"Nu pot fi laturile unui patrat";
    }    
}
