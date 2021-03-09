#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int primulNrPrim(int N);
int estePrim(int x);
int main ()
{
    int N;
    cout<<"N= ";
    cin>>N;
    cout<<"Primul numar prim este: "<<primulNrPrim(N);
}
//definitia functiei primulNrPrim():
int primulNrPrim(int N)
{
    int nrCrt;
    nrCrt=N+1;
    for(;;) {
        if(estePrim(nrCrt)) {
            return nrCrt;
        }
        nrCrt++;
    }
}
//definitia functiei estePrim:
int estePrim(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++) {
        if(x%i==0){
            return 0; //nu este numar prim
        } 
        return 1; //este numar prim
    }
    return 0;
}

// Sa se scrie o functie care returneaza primul numar prim mai mare strict
//decat un numar intreg N dat. Se va scrie si programul principal ce 
//testeaza aceasta funtie.