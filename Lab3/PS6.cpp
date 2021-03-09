#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, i, aux, sunt;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    if(a>b) {
        aux=a;
        a=b;
        b=aux;
    }
    sunt=1;
    for(i=2;i<=a;i++) {
        if((a%i==0)&&(b%i==0)) {
            sunt=0;
            break;
        }
    }
    if(sunt==1){
        cout<<"Sunt prime intre ele";
    }
    else {
        cout<<"Nu sunt prime intre ele";
    }

}




// Se citesc doua numere naturale a si b. Sa se afiseze daca sunt prime intre
//ele sau nu.