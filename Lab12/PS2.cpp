// Sa se afle suma numerelor dintr-un fisier text de numere intregi.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUME_F "C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\numere.txt"
using namespace std;
int main()
{
    FILE *fp;
    int rez, nrCrt, suma;
    fp = fopen(NUME_F, "rt");
    if(fp == NULL) {
        cout<<"Nu se poate deschide fisierul";
        exit(1);
    }
    suma = 0;
    for(;;) {
        rez = fscanf(fp, "%d", &nrCrt);
        if(rez == EOF) {
            break;
            suma = suma + nrCrt;
        }
    }
    fclose(fp);
    cout<<"Suma este: "<<suma;
}