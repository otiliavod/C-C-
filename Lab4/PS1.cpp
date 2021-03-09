#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int suntProgArit(int a, int b, int c);
int main()
{
    cout<<suntProgArit(1, 2, 4);
}
int suntProgArit(int a, int b, int c)
{
    if(b-a==c-b){
        return 1;
    }
    else{
        return 0;
    }
}
// Sa se scrie o functie impreuna cu un program de test, care decide
//daca trei numere sunt in progresie aritmetica.