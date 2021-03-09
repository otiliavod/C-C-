// Se citesc trei numere intregi a, b, c de la tastatura. Pot fi lungimile
//laturilor unui triunghi oarecare?

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b, c;
    cin>>a>>b>>c;
    if((a!=b)&&(b!=c)&&(a!=c)){
        cout<<"Pot fi laturile unui triunghi oarecare";
    }
    
    else{
        cout<<"Nu pot fi laturile unui triunghi oarecare";
    }    
}
