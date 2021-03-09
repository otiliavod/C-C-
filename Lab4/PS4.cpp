#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int max_min(int a, int b, int c, int&max, int&min);
int main()
{
    int max, min;
    max_min(30, 6, 0, max, min);
    cout<<min<<max;
}
int max_min(int a, int b, int c, int&max, int&min)
{
    max=a;
    if(b>max) {
        max=b;
    }
    if(c>max) {
        max=c;
    }
    min=a;
    if(b<min) {
        min=b;
    }
    if(c<min) {
        min=c;
    }
    return 0;
}

// Sa se scrie o functie, impreuna cu un program de test, care returneaza
//minimul si maximul dintre trei numere.