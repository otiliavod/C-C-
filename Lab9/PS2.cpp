// Sa se implementeze o functie recursiva care sa calculeze termenul de
//rang n din sirul lui Fibonacci.

#include <iostream>
#include <stdio.h>
#include <conio.h>
int fib(int n);
using namespace std;
int main()
{
    int n, rez;
    cout<<"n= ";
    cin>>n;
    rez = fib(n);
    cout<<"Termenul de rang "<<n<<" este "<<rez;
}

int fib(int n)
{
    if(n == 0) {
        return 1;
    }
    else if(n == 0) {
        return 1;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}