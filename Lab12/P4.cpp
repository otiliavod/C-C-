// Sa se calculeze si afiseze numarul de valori nule dintr-un fisier
//binar de octeti.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NR_VALORI_TOTALE 15
using namespace std;
int main()
{
    FILE *fp;
    unsigned char nr;
    int L;
    int contor = 0;
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\contor.bin", "wb");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisierul";
        exit(1);
    }
    for(int i=0; i<NR_VALORI_TOTALE; i++) {
        fwrite(&i, 1, 1, fp);
    }
    L = ftell(fp);
    for(int i=0; i<L; i++) {
        fread(&nr, 1, 1, fp);
        if(nr == 0) {
            contor++;
        }
    }
    fclose(fp);
    cout<<"A fost creat fisierul"<<"\n";
    cout<<contor;
}