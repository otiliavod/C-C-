// Se citeste un sir s1. Sa se construiasca sirul s2 ce contine, in 
//aceeasi ordine, cifrele care apar in s1.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
    char s1[81], s2[81];
    cout<<"Sir: ";
    cin>>s1;
    int j = 0;
    for(int i=0; i<strlen(s1); i++) {
        if(isdigit(s1[i])) {
            s2[j] = s1[i];
            j++;
        }
    }
    s2[j] = 0;
    if(j > 0) {
        cout<<s2;
    }
    else {
        cout<<"Nu exista cifre in sirul s1";
    }
}