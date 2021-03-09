// Sa se creeze prin program N fisiere text de numere cu valorile -1 
//sau +1 obtinute aleator. Fiecare fisier contine NL linii si NC 
//coloane. Parametrii N, NL si NC se citesc de la tastatura. Primul
//fisier va avea numele date1.txt, al doilea date2.txt samd. Exemplu:
//Pentru NL = 2 si NC = 5, un fisier tipic creat prin program este de
//forma:
//1 -1 -1 -1 1
//-1 1 -1 -1 -1

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    int N, NL, NC;
    cout<<"N= ";
    cin>>N;
    cout<<"NL= ";
    cin>>NL;
    cout<<"NC= ";
    cin>>NC;
    char numeCrt[81];
    char strNrCrt[7];
    FILE *fp;
    rand();
    for(int i=1; i<=N; i++) {
        itoa(i, strNrCrt, 10);
        strcpy(numeCrt, "C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\date");
        strcat(numeCrt, strNrCrt);
        strcat(numeCrt, ".txt");
        fp = fopen(numeCrt, "wt");
        if(fp == NULL) {
            cout<<"Nu se poate deschide fisierul";
            exit(1);
        }
        for(int j= 0; j<NL; j++) {
            for(int k=0; k<NC; k++) {
                if(rand() %2 == 0) {
                    fprintf(fp, "-1 ");
                }
                else {
                    fprintf(fp, " 1 ");
                }
            }
            fprintf(fp, "\n");
        }
        fclose(fp);       
    }
}