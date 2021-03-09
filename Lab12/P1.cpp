// Sa se scrie un program prin care un fisier oarecare este citit si 
//afisat pe ecran, octet cu octet.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUME_F "cifre.bin"
using namespace std;
int main()
{
    FILE *fp;
    unsigned char octetCrt;
    int L;
    fp = fopen(NUME_F, "rb");
    if(fp == NULL) {
        cout<<"Nu pot deschide fisier";
        exit(1);
    }
    L = ftell(fp);
    for(int i=0; i<L; i++) {
        fread(&octetCrt, 1, 1, fp);
        cout<<octetCrt;
    }
    fclose(fp);
}