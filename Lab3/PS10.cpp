#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int stop;
    stop=0;
    int nrOptiune;
    do{
        cout<<"1. Desen triunghi \n";
        cout<<"2. Desen patrat \n";
        cout<<"3. Iesire \n";
        cout<<"Introduceti numarul optiunii: ";
        nrOptiune= getch();
        switch(nrOptiune) {
            case '1': cout<<"  *\n";
                      cout<<" *  *\n";
                      cout<<"*******\n";
                      break;
            case '2': cout<<"****\n";
                      cout<<"*  *\n";
                      cout<<"*  *\n";
                      cout<<"****\n";
                      break;
            case '3': stop=1;
                      break;
        }
    }
    while(stop==0);
}


// Folosind instructiunea do-while sa se scrie un program care executa
//urmatorul meniu de comenzi:
//1.desen triunghi
//2.desen patrat
//3.iesire
// Figurile geometrice se deseneaza in modul text, folosind caracterul "*".