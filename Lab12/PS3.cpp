// Sa se concateneze doua fisiere text, intr-un al treilea fisier text.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int c;
    FILE *fp1 = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\a.txt", "rt");
    if(fp1 == NULL) {
        exit(1);
    }
    FILE *fp2 = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\b.txt", "rt");
    if(fp2 == NULL) {
        exit(1);
    }
    FILE *fp3 = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\c.txt", "wt");
    if(fp3 == NULL) {
        exit(1);
    }
    for(;;) {
        c = fgetc(fp1);
        if( c == EOF) {
            break;
        }
        fputc(c,fp3);
    }
    for(;;) {
        c = fgetc(fp2);
        if(c == EOF) {
            break;
        }
        fputc(c, fp3);
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}