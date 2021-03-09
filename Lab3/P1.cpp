#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    a=0; 
    b=0;
    for(;;) {
       if(!a>0) {
           for(;;){
               cout<<"a= ";
               cin>>a;
               if(a>0) {
                   break;
               }
           }   
        }
        cout<<"b= "; 
        cin>>b;
        if(b>a) { 
            break;
        }
    }
}


// Sa se implementeze, utilizand instructiunea for, urmatoarea secventa
//de instructiuni scrisa in pseudocod:
//se repeta
//      se repeta
//           se citeste a
//      pana cand a>0
//           se citeste b
//cat timp b<a