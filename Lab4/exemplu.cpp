#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;

int calculeazaProdus(int n1, int n2, int n3){ // dupa cum vezi... ce este in paranteze rotunde... le primesc de altundeva
    return n1*n2*n3;
} 
int calculeazaSumaNrSiProdus(int nr1, int nr2, int nr3){ // la fel si aici, primesc de altundeva, si dau mai departe
    int suma = nr1+nr2+nr3;
    int produs = calculeazaProdus(nr1,nr2,nr3);
    return suma+produs;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c; // si de fapt le trimit abia de aici
    cout<<calculeazaSumaNrSiProdus(a,b,c);
}