// Se citeste de la tastatura un sir de caractere. Sa se afiseze daca
//este palindrom.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
    char s[81];
    cout<<"Tastati un sir: ";
    cin>>s;
    int L = strlen(s);
    int esteSimetric = 1;
    for(int i=0; i<L; i++) {
        if(s[i] != s[L-i-1]) {
            esteSimetric = 0;
            break;
        }
    }
    if(esteSimetric == 1) {
        cout<<"Este palindrom";
    }
    else {
        cout<<"Nu este palindrom";
    }
}