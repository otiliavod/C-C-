#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
   int *a = new int[3];
   for(int i=0; i<3; i++) {
       cout<<"a["<<i<<"]= ";
       cin>>a[i];
   }
   for(int i=0; i<3; i++) {
       cout<<a[i];
   }
   delete [] a;
}

// Folosind alocarea dinamica a memoriei, sa se memoreze intr-un vector
//un numar de valori introduse de la tastatura, in vederea unor prelucrari
//ulterioare.