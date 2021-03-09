#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    long int x;
    int contor;
    cout<<"x= ";
    cin>>x;
    contor=0;
    for(;;) {
        x=x/10;
        contor++;
        if(x==0){
            break;
        }
    }
    cout<<"contor= "<<contor;
}



// Sa se calculeze numarul de cifre ale unui numar intreg citit de la
//tastatura.