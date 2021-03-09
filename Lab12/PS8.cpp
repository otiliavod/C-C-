// Se va crea un fisier binar ran.bin ce contine 200 de numere,generate
//ca numere aleatoare in gama 0..255.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUME_F "ran.bin"
#define NR_VALORI 200
using namespace std;
int main()
{
    FILE *fp;
    unsigned char nrCrt;
    rand();
    fp = fopen(NUME_F, "wb");
    if(fp == NULL) {
        cout<<"Nu pot deschide fiserul";
        exit(1);
    }
    for(int i=1; i<NR_VALORI; i++) {
        nrCrt = rand() %256;
        fwrite(&nrCrt, sizeof(unsigned char), 1, fp);
    }
    fclose(fp);
    cout<<"S-a creat fisierul specificat";
}