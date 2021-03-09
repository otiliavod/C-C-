// Se citesc de la tastatura trei numere intregi a, b, c. Sa se calculeze
//produsul numerelor pare introduse.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, P;
    cin>>a>>b>>c;
    if(a%2==0){
        if(b%2==0){
            if(c%2==0){
                P=a*b*c;
            cout<<P;
            }
            else{
                P=a*b;
            cout<<P;
            }
            
        }
        else if(c%2==0){
            P=a*c;
            cout<<P;
        }
    }
    else
    if(b%2==0){
        if(c%2==0){
            P=b*c;
            cout<<P;
        }
    }
}
