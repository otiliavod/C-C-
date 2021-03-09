// Se citesc N puncte intr-un vector. Sa se afiseze daca sunt coliniare.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    int x;
    int y;
} punct;
#define N 3
using namespace std;
double dist(punct a, punct b);
int main ()
{
    punct p[N];
    int suntColiniare = 1;
     for(int i=0; i<N; i++) {
        cout<<"p["<<i<<"].x= ";
        cin>>p[i].x;
        cout<<"p["<<i<<"].y= ";
        cin>>p[i].y;
    }
    for(int i=0; i<N-1; i++) {
        if(dist(p[i], p[N-1]) != (dist(p[i], p[i+1]) + dist(p[i+1], p[N-1]))) {
            suntColiniare = 0;
            break;
        }
    }
    if(suntColiniare) {
        cout<<"Sunt coliniare";
    }
    else {
        cout<<"Nu sunt coliniare";
    }
}
double dist(punct a, punct b)
{
    return sqrt((a.x-b.x) * (a.x-b.x) + (a.y-b.y) * (a.y-b.y));
}