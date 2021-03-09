#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int suntPrime(int a, int b);
int main ()
{
    int N1, N2;
    cout<<"N1= ";
    cin>>N1;
    cout<<"N2= ";
    cin>>N2;
    int i;
    for(i=N1;i<N2;i++) { 
        if(suntPrime(i, i+1) == 1) { 
            cout<< "sunt prime intre ele " << i << " si " << i+1 << "\n";
        } else {
            cout<< "nu sunt prime intre ele " << i << " si" << i+1 << "\n";
        }
    }
    return 0;
}
int suntPrime(int a, int b)
{
    int i, sunt;
    sunt = 1;
    int min = a;
    if(b<a) {
        min=b;
    }
    for(i=2;i<=min;i++) {
        if((a%i==0)&&(b%i==0)) {
            sunt = 0;
            break;
        }
    }
    return sunt;
    
}

// Sa se scrie o functie impreuna cu un program de test care sa afiseze
//toate perechile de numere prime intre ele din intervalul [N1,N2].