#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int suntPrime(int a, int b);
int main()
{
    cout<<suntPrime(3, 7);
}
int suntPrime(int a, int b)
{
    int i, sunt, min;
    min=a;
    if(b<a){
        min=b;
    }
    sunt=1;
    for(i=2;i<=min;i++) {
        if((a%i==0)&&(b%i==0)){
            sunt=0;
            break;
        }
    }
    return sunt;

}



// Sa se scrie o functie impreuna cu un program de test, care stabileste
//daca doua numere sunt prime intre ele.