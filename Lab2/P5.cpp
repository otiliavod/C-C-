//  Se citesc trei numere intregi a, b, c de la tastatura. Pot fi lungimile
//laturilor unui triunghi isoscel?

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin>>a>>b>>c;
    if((a==b)&&(a!=c)){
        cout<<"Pot fi laturile unui triunghi isoscel";
    }
    else if((b==c)&&(b!=a)){
        cout<<"Pot fi laturile unui triunghi isoscel";
    }
    else if((a==c)&&(a!=b)){
        cout<<"Pot fi laturile unui triunghi isoscel";
    }
    else{
        cout<<"Nu pot fi laturile unui triunghi isoscel";
    }
}
