// Se citesc de la tastatura, in trei variabile sir de caractere, numele
//numele unui director, numele unui folder si extensia lui. Sa se 
//construiasca intr-o alta variabila sir numele complet al fisierului.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
    char numeF[41];
    char numeDir[51];
    char extensie[5];
    char numeComplet[100];
    cout<<"Nume fisier: ";
    cin>>numeF;
    cout<<"Nume director: ";
    cin>>numeDir;
    cout<<"Nume extensie: ";
    cin>>extensie;
    strcpy(numeComplet, numeDir);
    strcat(numeComplet, "\\");
    strcat(numeComplet, numeF);
    strcat(numeComplet, ".");
    strcat(numeComplet, extensie);
    cout<<"Nume complet: "<<numeComplet;
}