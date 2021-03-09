#include <iostream>
// Se citesc a, b si c - numere reale, coeficienti ai ecuatiei de gradul doi.
// Sa se calculeze nr de radacini reale distincte ale ecuatiei.


#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    double a, b, c, delta;
    cin>>a>>b>>c;
    delta=b*b+4*a*c;
    if(delta>0)
    cout<<"Doua radacini reale si distincte";
    else
    if(delta==0)
    cout<<"Doua radacini reale si egale";
    else
    cout<<"Radacini complexe";
}
