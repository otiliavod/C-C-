// Se citeste un sir de numere de la tastatura. Sa se roteasca tot sirul
//spre stanga cu o pozitie.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
void rotireSt(char s[100], int L);
using namespace std;
int main()
{
    char sir[100];
    cout<<"Sir: ";
    cin>>sir;
    rotireSt(sir, strlen(sir));
    cout<<sir;
}

void rotireSt(char s[100], int L)
{
    int i, primul;
    primul = s[0];
    for(i=0; i<L-1; i++) {
        s[i] = s[i+1];
    }
    s[L-1] = primul;
}