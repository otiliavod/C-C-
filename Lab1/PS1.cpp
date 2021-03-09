// Sa se comute continutul a doua variabile a si b, intre ele.

#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, b, aux;
    cin>>a;
    cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<a<<b;
}
