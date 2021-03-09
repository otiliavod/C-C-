#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b;
    do{
        do{ 
            cout<<"a= ";
            cin>>a;
        }
        while ((!a>=1)&&(!a<=10));
        cout<<"b= ";
        cin>>b;
    }
    while (b<a);
    cout<<"a= "<<a<<" "<<"b= "<<b;
}


// Folosind instructiunea do-while sa se transpuna in limbajul C urmatoarea
//secventa de program:
//se repeta
//    se repeta
//           se citeste numar intreg a
//    cat timp a este in afara intervalului [1,10]
//    se citeste numarul intreg b
//cat timp b<a