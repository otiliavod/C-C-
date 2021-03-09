// Se citesc de la tastatura 20 de numere intregi care se memoreaza
//intr-o matrice A de 4 linii si 5 coloane. Sa se copieze continutul
//matricii intr-un fisier intr-un fisier text care are acelasi format
//ca si matricea.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp;
    int A[4][5];
    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
    }
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\A_4_5.txt", "wt");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisierul";
        exit(1);
    }
    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            fprintf(fp, " %d", A[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    cout<<"A fost creat fisierul";
}