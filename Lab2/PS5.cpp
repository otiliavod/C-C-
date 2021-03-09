// Se citeste de la tastatura un nr natural intre 1 si 12,care reprezinta
//nr unei luni din an. Sa se scrie numele lunii corespunzatoare nr citit.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    switch(x){
        case 1:
        cout<<"IANUARIE";
        break;
        case 2:
        cout<<"FEBRUARIE";
        break;
        case 3:
        cout<<"MARTIE";
        break;
        case 4:
        cout<<"APRILIE";
        break;
        case 5:
        cout<<"MAI";
        break;
        case 6:
        cout<<"IUNIE";
        break;
        case 7:
        cout<<"IULIE";
        break;
        case 8:
        cout<<"AUGUST";
        break;
        case 9:
        cout<<"SEPTEMBRIE";
        break;
        case 10:
        cout<<"OCTOMBRIE";
        break;
        case 11:
        cout<<"NOIEMBRIE";
        break;
        case 12:
        cout<<"DECEMBRIE";
        break;
    }
}
