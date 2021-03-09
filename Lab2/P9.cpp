// Se citeste de la tastatura un numar natural cuprins intre 1 si 365, ce
//reprezinta nr unei zile din an. Sa se calculeze si afiseze luna din an, din
//care face parte ziua respectiva.

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int x;
    cout<<"x= ";
    cin>>x;
    if((x>=1)&&(x<=31)){
        cout<<"IANUARIE";
    }
    else if((x>31)&&(x<=59)){
        cout<<"FBRUARIE";
    }
    else if((x>59)&&(x<=90)){
        cout<<"MARTIE";
    }
    else if((x>99)&&(x<=120)){
        cout<<"APRILIE";
    }
    else if((x>120)&&(x>=151)){
        cout<<"MAI";
    }
    else if((x>151)&&(x<=181)){
        cout<<"IUNIE";
    }
    else if((x>181)&&(x<=212)){
        cout<<"IULIE";
    }
    else if((x>212)&&(x<=243)){
        cout<<"AUGUST";
    }
    else if((x>243)&&(x<273)){
        cout<<"SEPTEMBRIE";
    }
    else if((x>273)&&(x<=304)){
        cout<<"OCTOMBRIE";
    }
    else if((x>304)&&(x<=334)){
        cout<<"NOIEMBRIE";
    }
    else if((x>334)&&(x<=365)){
        cout<<"DECEMBRIE";
    }
}
