#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int N, max, i, nr;
    cout<<"Numarul total de numere este: ";
    cin>>N;
    cout<<"Numarul 1: ";
    cin>>max;
    for(i=2;i<=N;i++){
        cout<<"Numarul ",i;
        cin>>nr;
        if(nr>max){
            max=nr;
        }
    }
    cout<<"Maximul este: "<<max;
}


// Sa se calculeze si afiseze maximul a N numere intregi citite
//de la tastatura.