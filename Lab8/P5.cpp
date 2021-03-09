// Se citesc doua cuvinte de la tastatura. Sa se afiseze daca cel de-al
//doilea este anagrama primului.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
    char s1[100], s2[100];
    cout<<"Primul cuvant: ";
    cin>>s1;
    cout<<"Al doilea cuvant: ";
    cin>>s2;
    if(strlen(s1) != strlen(s2)) {
        cout<<"Nu este o anagrama";
    }
    else{
        for(int i=0; i<strlen(s1); i++){
            for(int j=0; j<strlen(s1); j++) {
                if(s1[i] >s1[j]) {
                    char aux = s1[i];
                    s1[i] = s1[j];
                    s1[j] = aux;
                }
            }
        }
        for(int i=0; i<strlen(s2); i++) {
            for(int j=0; j<strlen(s2); j++) {
                if(s2[i] > s2[j]) {
                    char aux = s2[i];
                    s2[i] = s2[j];
                    s2[j] = aux;
                }
            }
        }
        if(strcmp(s1, s2) == 0) {
            cout<<"Este anagrama";
        }
        else {
            cout<<"Nu este anagrama";
        }
    }

}