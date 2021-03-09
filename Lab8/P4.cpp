// Se citeste un sir de caractere de la tastatura. Sa se afieze daca in 
//sir exista sau nu doua cifre alaturate.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
    char sir[100];
    cout<<"sir= ";
    cin>>sir;
    int suntAlaturate = 0;
    for(int i=0; i<100-1; i++) {
        if((isdigit(sir[i])) &&(isdigit(sir[i+1]))) {
            suntAlaturate = 1;
            break;
        }
    }
    if(suntAlaturate == 1) {
        cout<<"Exista doua cifre alaturate";
        }
    else {
        cout<<"Nu exista doua cifre alaturate";
        }
}