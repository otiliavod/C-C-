#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int N1, N2, i, x, contor;
    contor=0;
    cout<<"N1= ";
    cin>>N1;
    cout<<"N2= ";
    cin>>N2;
    if(N2>N1) {
        for(x=N1;x<=N2;x++) {
            int estePrim;
             estePrim=1;
           for(i=2;i<=sqrt(x);i++) {
              if(x%i==0){
                  estePrim=0;
              }
                  
              } 
           if( estePrim==1) {
                contor++;
           } 
        }
        cout<<"contor= "<<contor;
    }
        
}

// Se citesc doua numere N1 si N2, naturale, N2>N1. Cate numere prime se afla
//in intervalul[N1,N2]?
