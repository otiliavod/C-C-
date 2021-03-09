// Se citeste de la tastatura un sir de caractere. Sa se construiasca
//sirul s2, obtinut prin inversarea sirului s1.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char s1[100], s2[100];
    cout<<"Tastati un sir: ";
    cin>>s1;
    int L = strlen(s1);
    for(int i=L-1; i>=0; i++) {
        s2[L-1-i] = s1[i];
        s2[L] = '\0';
    }
    cout<<"Sirul inversat este: "<<s2;
}