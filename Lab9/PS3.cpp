// Se citeste un numar natural de la tastatura. Sa se afiseze daca este
//termen in sirul lui Fibonacci sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int fib(int n);
int main()
{
    int nr;
    cout<<"Nr= ";
    cin>>nr;
    int n = 0;
    for(;;) {
        int termenFib = fib(n);
        if(termenFib == nr) {
            cout<<"Este termen in sirul lui Fibonacci";
            break;
        }
        if(termenFib > nr) {
            cout<<"Nu este termen in sirul lui Fibonacci";
            break;
        }
        n++;
    }
}

int fib(int n)
{
    if(n == 0) {
        return 1;
    }
    else if(n == 1) {
        return 1;
    }
    else {
        return (fib(n-1) + fib(n-2));
    }
}