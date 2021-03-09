// Ce numar natural cuprins intre 1 si 3 trebuie adaugat la un nr natural x
//citit de la tatatura, astfel incat rezultatul sa fie divizibil cu 3?

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    if((x+1)%3==0){
        cout<<1;
    }
    else if((x+2)%3==0){
        cout<<2;
    }
    else if((x+3)%3==0){
        cout<<3;
    }
}
