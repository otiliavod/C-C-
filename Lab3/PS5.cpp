#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
  int x, u, z, s, contor;
  contor=0;
  for(x>=100;x<=999;x++) {
    u=x%10;
    s=x/100;
    z=(x-s*100)/10;
    if((u+z+s)>10){
      contor++;
    }
  }
  cout<<"contor= "<<contor;

}


// Sa se realizeze un program care scoate ca rezultat numarul de numere
//naturale de trei cifre care au suma cifrelor mai mare ca 10.