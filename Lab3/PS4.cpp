#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int x, i, estePrim;
    cout<<"x= ";
    cin>>x;
    estePrim=1;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            estePrim=0;
            break;
        }
    }
    if(estePrim==1){
        cout<<"Este prim";
    }
    else{
        cout<<"Nu este prim";
    }
}

// Se citeste un numar natural de la tastatura. Sa se stabileasca
//daca este prim sau nu.