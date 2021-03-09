#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
    int x, y, z;
    for(x=0;x<=(71/2);x++) {
        for(y=0;y<=(71/3);y++) {
            for(z=0;z<=(71/4);z++)
            if(2*x+3*y+4*z==71) {
                cout<<"x= "<<x<<"y= "<<y<<"z= "<<z;
            }
        }
    }
}


// Sa se rezolve in numere naturale ecuatia 2x+3Y+4z=71.