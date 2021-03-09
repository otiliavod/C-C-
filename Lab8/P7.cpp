// Se citeste un sir s1 de la tastatura. Sa se construiasca sirul s2 ce 
//contine, in ordinea aparitiei caracterele din sirul s1, luate o singura
//data.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int citire(char v[100], char a);
using namespace std;
int main ()
{
    char s1[100], s2[100];
    cout<<"Primul sir este: ";
    cin>>s1;
    int j =0;
    for(int i=0; i<strlen(s1); i++) {
        if(citire(s2, s1[i]) == 0) {
            s2[j] = s1[i];
            j++;
        }
    }
    cout<<"Al doilea sir este: "<<s2;
}

int citire(char v[100], char a)
{
    for(int i=0; i<strlen(v); i++) {
        if(v[i] == a) {
            return 1;
        }
    }
    return 0;
}