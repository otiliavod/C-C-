// Se citeste un sir de la tastatura. Sa se afiseze ultima vocala din
//sirul citit.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    char sir[100];
    cout<<"Sir: ";
    cin>>sir;
    int L = strlen(sir);
    char ultima = 'N';
    for(int i=0; i<L; i++) {
        char caracterCrt = (char) tolower(sir[i]);
        switch(sir[i]) {
            case 'a':
            ultima = sir[i];
            break;
            case 'e':
            ultima = sir[i];
            break;
            case 'i':
            ultima = sir[i];
            break;
            case 'o':
            ultima = sir[i];
            break;
            case 'u':
            ultima = sir[i];
            break;
        }
    }
    if(ultima == 'N') {
        cout<<"Nu are ultimul caracter vocala";
    }
    else {
        cout<<ultima;
    }
}