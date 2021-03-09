// Se citeste un sir de la tastatura. Sa se afiseze care este vocala care
//apare de cele mai multe ori in sir.

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
    char v[5] = {'a', 'e', 'i', 'o', 'u'};
    int contoare[5] = {0, 0, 0, 0, 0};
    for(int i=0; i<5; i++) {
        char caracterCrt = (char) tolower(sir[i]);
        switch(sir[i]) {
            case 'a':
            contoare[0] = contoare[0] + 1;
            break;
            case 'e':
            contoare[1] = contoare[1] + 1;
            break;
            case 'i':
            contoare[2] = contoare[2] + 1;
            break;
            case 'o':
            contoare[3] = contoare[3] + 1;
            break;
            case 'u':
            contoare[4] = contoare[4] + 1;
            break;
        }
    }
    int max, pozMax;
    max = 0;
    for(int i=0; i<5; i++) {
        if(contoare[i] > max) {
            max = contoare[i];
            pozMax = i;
        }
    }
    cout<< v[pozMax] << " apare de " << max << " ori";
}
