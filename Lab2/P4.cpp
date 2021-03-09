//  Se citesc trei numere intregi a, b, c de la tastatura. Pot fi lungimile
//laturilor unui triunghi dreptunghic?

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin>>a>>b>>c;
    if((a*a)==(b*b)+(c*c)){
        cout<<"Pot fi laturile unui triunghi dreptunghic";
    }
    else{
        cout<<"Nu pot fi laturile unui triunghi dreptunghic";
    }
}
