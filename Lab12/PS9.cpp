// Sa se calculeze si afiseze maximul dintr-un fisier binar de octeti.
//Pentru testare se va folosi fisierul ran.bin creat prin programul
//anterior.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUME_F "ran.bin"
using namespace std;
int main()
{
    FILE *fp;
    unsigned char nrCrt;
    int L, maxim;
    fp = fopen(NUME_F, "rb");
    if(fp == NULL) {
        cout<<"Nu pot deschide fisier";
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    L = ftell(fp);
    if(L == 0) {
        cout<<"Fisierul este gol";
        exit(1);
    }
    fseek(fp, 0, SEEK_SET);
    fread(&maxim, 1, 1, fp);
    for(int i=1; i<L; i++) {
        fread(&nrCrt, 1, 1, fp);
        if(nrCrt > maxim) {
            maxim = nrCrt;
        }
    } 
    fclose(fp);
    cout<<"Maximul este: "<<maxim;
}