// Se citeste de la tastatura un numar natural. Sa se calculeze si afiseze
//cate cifre contine.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int x, contor;
    cout<<"x= ";
    cin>>x;
    contor=0;
    if(x!=0){
        x=x/10;
        contor++;
    }
    if(x!=0){
        x=x/10;
        contor++;
    }
    if(x!=0){
        x=x/10;
        contor++;
    }
    if(x!=0){
        x=x/10;
        contor++;
    }
    if(x!=0){
        x=x/10;
        contor++;
    }
    cout<<contor;
}
