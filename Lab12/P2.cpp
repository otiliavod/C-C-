// Sa se afiseze cea mai lunga linie dintr-un fisier text.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp;
    int A[5];
    int max;
    max = 0;
    for(int i=0; i<5; i++) {
        cout<<"A["<<i<<"]= ";
        cin>>A[i];
    }
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\linie.txt", "wt");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisier";
        exit(1);
    }
    for(int i=0; i<5; i++) {
        fprintf(fp, " %d ", A[i]);
        fprintf(fp, "\n");
    }
    for(int i=0; i<5; i++) {
        if(A[i] > max) {
            max = A[i];
        }
    }
    fclose(fp);
    cout<<"A fost creat fisierul"<<"\n";
    cout<<max;
}