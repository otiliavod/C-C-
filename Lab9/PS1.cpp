// Sa se scrie functia factorial, implementandu-se recursiv urmatoarea
//definitie: 1! = 1
//           n! = n*(n-1)!, daca n > 1.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
long int factorial(int n);
int main()
{
    int nr;
    long int rezultat;
    cout<<"Nr= ";
    cin>>nr;
    rezultat = factorial(nr);
    cout<<rezultat;
}

long int factorial(int n)
{
    if(n == 1) {
        return 1;
    }
    else {
        return (n*factorial(n-1));
    }
}