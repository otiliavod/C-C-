#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 7
using namespace std;
int main ()
{
    int a[N], i;
    for(i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    int x;
    cout<<"x= ";
    cin>>x;
    int estePrezent = 0;
    for(i=0; i<N; i++) {
        if(a[i] == x) {
            estePrezent = 1;
            break;
        }
    }
    if(estePrezent == 1) {
        cout<<"x: "<<x<<" "<<"este prezent in vector";
    }
    else {
        cout<<"x: "<<x<<" "<<"nu este prezent in vector";
    }
}

// Se citesc N numere intregi de la tastatura si se memoreaza intr-un
//vector a. Se citeste un numar intreg x. Sa se afiseze daca numarul x
//este prezent in vector sau nu.