// Se citeste de la tastatura un sir de caractere. Sa se afiseze daca
//sirul are toate caracterele diferite sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
    char sir[100];
    cout<<"Tastati un sir: ";
    cin>>sir;
    int L = strlen(sir);
    int suntDif = 1;
    for(int i=0; i<L; i++) {
        for(int j=i+1; j<L; j++) {
            if(sir[i] == sir[j]) {
                suntDif = 0;
                break;
            }
        }
    }
    if(suntDif == 1) {
        cout<<"Toate caracterele sunt diferite";
    }
    else {
        cout<<"Nu sunt toate caracterele diferite";
    }
}