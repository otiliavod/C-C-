// Se da un fisier text de numere intregi. Sa se calculeze cmmdc al 
//acestor numere.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 3
int cmmdc(int x, int y);
using namespace std;
int main()
{
    FILE *fp;
    int A[3];
    int rezultat;
    for(int i=0; i<N; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\cmmdc.txt", "wt");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisier";
        exit(1);
    }
    for(int i=0; i<N; i++) {
        fprintf(fp, " %d ", A[i]);
        fprintf(fp, "\n");
    }
    rezultat = A[0];
    for(int i=0; i<N; i++) {
        rezultat = cmmdc(rezultat, A[i]);
    }
    fclose(fp);
    cout<<"A fost creat fisierul"<<"\n";
    cout<<rezultat;
}
int cmmdc(int x, int y)
{
    while( x != y) {
        if(x > y) {
            x = x - y;
        }
       else {
           y = y - x;
       }
    }
    return x;
}