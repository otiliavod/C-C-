// Foloind structura punct, se vor citi de la tastatura N puncte, care vor
//fi introduse intr-un vector. Sa se realizeze un program care sa afiseze
//daca toate cele N puncte sunt diferite sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
typedef struct{
    int x;
    int y;
} punct;
#define N 3
using namespace std;
int main ()
{
    punct p[N];
    for(int i=0; i<N; i++) {
        cout<<"p["<<i<<"].x= ";
        cin>>p[i].x;
        cout<<"p["<<i<<"].y= ";
        cin>>p[i].y;
    }
    int suntDiferite = 1;
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            if((p[i].x == p[j].x) && (p[i].y == p[j].y)) {
                suntDiferite = 0;
                break;
            }
        }
    }
    if(suntDiferite) {
        cout<<"Sunt diferite";
    }
    else {
        cout<<"Nu sunt diferite";
    }
}