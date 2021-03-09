#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int a, b, c, r;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    r=a%b;
    while(r!=0) {
        a=b;
        b=r;
        r=a%b;
    }
    r=b%c;
    while(r!=0) {
        b=c;
        c=r;
        r=b%c;
    }
    cout<<c;
}

// Sa se realizeze un program care realizeaza cmmdc a trei numere.