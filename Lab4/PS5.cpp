#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int inversareStr(char  * in, char *   out);
int main ()
{
    char s1[80]="12abc";
    char s1Inv[80];
    inversareStr(s1, s1Inv);
    cout<<"Sirul inversat este: "<<s1Inv;
}
int inversareStr(char  * in, char *   out)
{
    int i;
    int L; //lungime sir in
    L=strlen(in);
    for(i=L-1;i>=0;i--) {
        out[L-1-i]=in[i]; //terminatorul de string
        out[L]='\0';
    }
    return 0;
}

// Sa se scrie o functie care are ca parametru de intrare un string, si
//ca parametru de iesire, stringul inversat.