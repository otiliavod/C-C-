// Sa se afiseze si genereze trei numere intregi, aleatoare cuprinse in 
// intervalul inchis [10,100].

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main ()
{
   
   int a, b, c;
   a=rand() %100+10;
   b=rand() %100+10;
   c=rand() %100+10;
   cout<<a<<b<<c;    
}
