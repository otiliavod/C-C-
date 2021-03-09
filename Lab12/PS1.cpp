// Sa se creeze prin program urmatorul fisier text, ce contine 10 linii a
//cate 10 numere fiecare. Intre cifrele de pe o linie sunt 2 blank-uri.
//0 0 0 0 0 0 0 0 0 0
//1 1 1 1 1 1 1 1 1 1 
//2 2 2 2 2 2 2 2 2 2
//3 3 3 3 3 3 3 3 3 3
//4 4 4 4 4 4 4 4 4 4
//5 5 5 5 5 5 5 5 5 5
//6 6 6 6 6 6 6 6 6 6
//7 7 7 7 7 7 7 7 7 7
//8 8 8 8 8 8 8 8 8 8
//9 9 9 9 9 9 9 9 9 9

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\cifre.txt", "wt");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisierul c:\\cifre.txt";
        exit(1);
    }
    for(int i=0; i<=9; i++) {
        for(int j=1; j<10; j++) {
            fprintf(fp, "  %d", i);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    cout<<"A fost creat fisierul C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\cifre.txt";
}