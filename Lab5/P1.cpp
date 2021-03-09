#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    long int x;
    cout<<"x= ";
    cin>>x;
    int a[1000], i, c;
    for(i=0; i<1000; i++) {
        a[i] = 0;
    }
    i = 0;
    while(x != 0) {
        c = x%10;
        x = x/10;
        a[i] = c;
        i ++;
    }
    for(i=0; i<1000; i++) {
        if(a[i] != 0) {
            cout<<a[i]<<"\n";
        }
    }
}

// Se citeste un numar natural de tip long int. Sa se copieze toate cifrele
//intr-un vector.