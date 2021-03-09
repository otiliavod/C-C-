#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b, i;
    cout<<"a= ";
    cin>>a;
    b=a;
    for(;;) {
            b=b+1;
            int estePrim;
            estePrim=1;
            for(i=2;i<=sqrt(b);i++) {
                if(b%i==0){
                  estePrim=0;
                    break;
                }      
    }
    if(estePrim==1) {
        cout<<"b= "<<b;
        break;
    }
        }
    
}


// Se citeste un numar natural a. Sa se calculeze si afiseze primul
//numar prim mai mare decat a.