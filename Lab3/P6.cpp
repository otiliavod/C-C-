#include <iostream>
#include <stdio.h>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
{
    int n, esteIred;
    cout<<"n= ";
    cin>>n;
    esteIred=1;
    for(n=1;n<=500;n++) {
        if(((65*n)+3)%((39*n)+2)==0){
            esteIred=0;
            break;
        }
    }
    if(esteIred==1) {
        cout<<"Este ireductibila";
    }
}


//Sa se arate ca fractia (65n+3)/(39n+2) este ireductibila pentru orice 
//nr natural n cuprins intre 1 si 500
