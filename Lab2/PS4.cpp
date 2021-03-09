// Se citeste un nr real x de la tastatura. Sa sa calculeze si afiseze valoarea
// espresiei E(x), definita astfel:
//E(x)=|x-5|+2, x<0
//E(x)=1, x=0
//E(x)=x-1, x>0

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    double x, E;
    cin>>x;
    if(x<0){
        E=abs(x-5)+2;
        cout<<E;
    }
    else if(x==0){
        E=1;
        cout<<E;
    }
    else if(x>0){
        E=x-1;
        cout<<E;
    }
}
