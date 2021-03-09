// Se citesc 4 numere intregi de la tastatura. Sa se afiseze daca sunt sau nu in
// progresie aritmetica.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int a, b, c, d, r;
    cin>>a>>b>>c>>d;
    r=b-a;
    if(c-b==r){
        if(d-c==r)
        cout<<"Sunt in progresie aritmetica";
    }
     else
    cout<<"Nu sunt in progresie aritmetica";
}
