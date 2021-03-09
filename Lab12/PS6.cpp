// Sa se creeze prin program un fisier binar ce contine urmatorii 100 
//de octeti: 10 octeti de valoare 0, 10 octeti de 1.....10 octeti de 
//valoare 9.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\cifre.bin", "wb");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisierul";
        exit(1);
    }
    for(int i=0; i<=9; i++) {
        for(int j=1; j<=10; j++) {
            fwrite(&i, 1, 1, fp);      
        }
    }
    fclose(fp);
    cout<<"A fost creat fisierul";
}