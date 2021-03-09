// Cu ajutorul structurii punct definita anterior sa se realizeze un 
//program care afiseaza daca trei puncte ale caror coordonate se introduc
//de la tastatura sunt coliniare sau nu.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct{
    int x;
    int y;
} punct;
double dist(punct a, punct b);
using namespace std;
int main()
{
    punct A, B, C;
    cout<<"Coordonatele primului numar: ";
    cin>>A.x>>A.y;
    cout<<"Coordonatele numarului al doilea: ";
    cin>>B.x>>B.y;
    cout<<"Coordonatele numarului al treilea: ";
    cin>>C.x>>C.y;
    double a, b, c;
    a = dist(B,C);
    b = dist(C,A);
    c = dist(A,B);
    if((a == b+c) || (b == a+c) || (c == a+b)) {
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