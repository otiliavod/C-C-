#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 20
using namespace std;
int main()
{
    int i, s, nr;
    s=0;
    for(i=1;i<=N;i++){
        cout<<"nr= ";
        cin>>nr;
        s=s+nr;
    }
    cout<<"Suma este: "<<s;
}

// Sa se calculeze si afiseze suma a N numere citite de la tastatura.