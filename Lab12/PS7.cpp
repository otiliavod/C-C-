// Sa se adauge la sfarsitul unui fisier existent, un octet de paritate
//calculat ca suma modulo 2 a octetilor din fisierul initial.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp;
    int L;
    unsigned char octetCrt;
    unsigned char octetCalculat;
    fp = fopen("abc.dat", "r+b");
    if(fp == NULL) {
        cout<<"Nu pot deschide fisierul";
        exit(1);
    }
    fseek(fp, 0, SEEK_END);
    L = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    octetCalculat = 0;
    for(int i=0; i<L; i++) {
        fread(&octetCrt, 1, 1, fp);
        octetCalculat = octetCalculat ^ octetCrt;
    }
    fseek(fp, 0, SEEK_END);
    fwrite(&octetCalculat, 1, 1, fp);
    fclose(fp);
    fp = fopen("abc.dat", "rb");
    for(int i=0; i<L; i++) {
        fread(&octetCrt, 1, 1, fp);
        cout<<octetCrt;
    }
    fclose(fp);
}