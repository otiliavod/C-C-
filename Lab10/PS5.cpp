// Folosind structuta punct, se vor citi de la tastatura N puncte, care
//vor fi introduse intr-un vector. Sa se realizeze un program care sa 
//afiseze distanta maxima dintre doua puncte.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    int x;
    int y;
} punct;
#define N 3
double dist(punct a, punct b);
using namespace std;
int main() 
{
    punct p[N];
    for (int i=0; i<N; i++) {
        cout<<"p["<<i<<"].x= ";
        cin>>p[i].x;
        cout<<"p["<<i<<"].y= ";
        cin>>p[i].y;
    }
    double distMax = 0;
    for(int i=0; i<N-1; i++) {
        for(int j=i+1; j<N; j++) {
            double distCrt = dist(p[i], p[j]);
            if(distCrt > distMax) {
                distMax = distCrt;
            }
        }
    }
    cout<<"Distanta maxima este: "<<distMax;
}
double dist(punct a, punct b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}