// Se defineste structura punct care are doua campuri x si y(coordonatele
//reprezentarii in plan a unui punct). Sa se scrie un program in care se
//citesc coordonatele a doua puncte de la tastatura si se afiseaza 
//distanta dintre aceste puncte.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
typedef struct {
    int x;
    int y;
} punct;
using namespace std;
int main()
{
    punct P1, P2;
    double d12;
    cout<<"Primul punct x= ";
    cin>>P1.x;
    cout<<"\n"<<"Primul punct y= ";
    cin>>P1.y;
    cout<<"\n"<<"Al doilea punct x= ";
    cin>>P2.x;
    cout<<"\n"<<"Al doilea punct y= ";
    cin>>P2.y;
    d12 = sqrt((P1.x - P2.x) * (P1.x - P2.x) + (P1.y - P2.y) * (P1.y - P2.y));
    cout<<"Distanta este: "<<d12;
}