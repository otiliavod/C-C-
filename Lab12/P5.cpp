// Sa se creeze un fisier binar ce are numele elevi.dat in care sunt
//copiate datele citite de la tastatura pentru toti elevii unei clase.
//Pentru fiecare elev, se citesc urmatoarele informatii: numele, 
//prenumele, media.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    FILE *fp;
    int N;
    char nume[81], prenume[81], media;
    cout<<"Numarul elevilor este: ";
    cin>>N;
    for(int i=1; i<=N; i++) {
        cout<<"Numele elevului "<<i<<" este: ";
        cin>>nume[i];
        cout<<"Prenumele elevului "<<i<<" este: ";
        cin>>prenume[i];
        cout<<"Media elevului "<<i<<" este: ";
        cin>>media;
    }
    for(int i=0; i<N; i++) {
        itoa(i, nume, 2);
        itoa(i, prenume, 2);
    }
    fp = fopen("C:\\Users\\Otii\\Desktop\\CProjects\\rectangle\\Lab12\\elevi.dat", "wb");
    if(fp == NULL) {
        cout<<"Nu se poate crea fisierul";
        exit(1);
    }
    char A[N] = {nume[81], prenume[81], media};
    for(int i=0; i<N; i++) {
        fwrite(&A[i], 1, 1, fp);
    }
    fclose(fp);
    cout<<"S-a creat fisierul";
}