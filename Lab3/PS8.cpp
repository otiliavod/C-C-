#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int x;
    for(;;) {
        cout<<"x= ";
        cin>>x;
        if((x>=7)&&(x<=20)) {
            break;
        }
    }
    cout<<"x= "<<x;
}



// Se repeta citirea unui numar de la tastatura pana cand numarul introdus
//se gaseste in intervalul [7,20].