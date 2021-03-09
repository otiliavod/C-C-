//  Se citesc de la tastatura doua numere intregi x si y. Sa se afiseze
//daca acestea sunt solutii pentru ecuatia 5x+7y=19.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int x, y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    if((5*x)+(7*y)==19){
        cout<<"Sunt solutii ale ecuatiei";
    }
    else {
        cout<<"Nu sunt solutii ale ecuatiei";
    }
}
