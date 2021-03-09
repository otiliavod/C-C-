// Sa se afiseze maximul dintre trei numere intregi a, b, c citite de la
// tastatura.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, max;
    cin>>a>>b>>c;
    max=a;
    if(b>max){
        max=b;
    }
    if(c>max){
        max=c;
    }
    cout<<max;
}
