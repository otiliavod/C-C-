// Se citeste de la tastatura un sir de caractere. Sa se afiseze cate 
//cifre contine sirul.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    char s[81];
    cout<<"Tastati un sir:"<<"\n";
    cin>>s;
    int L;
    int nCif;
    L = strlen(s);
    nCif = 0;
    for(int i=0; i<L; i++) {
        if(isdigit(s[i])) {
            nCif ++;
        }
    }
    cout<<"Sirul are "<<nCif<<" cifre.";
}