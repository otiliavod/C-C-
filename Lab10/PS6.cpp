// Se defineste structura elev, ce contine doua campuri: numele de familie
//al unui elev(de tipul string) si nota obtinuta de elev(de tipul int). Se
//citesc de la tastatura si se memoreaza intr-un vectori de structuri elev
//elevii unei clase si notele obtinute de ei. Sa se ordoneze acest vector
//in ordinea descrescatoare a notelor elevilor.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define NR_ELEVI 20
typedef struct{
    char nume[41];
    int nota;
} elev;
using namespace std;
int main()
{
    elev tab[NR_ELEVI];
    elev temp;
    int existaInversiuni;
    for(int i=0; i<NR_ELEVI; i++){
        cout<<"Numele elevului numarul ";
        cin>>tab[i].nume;
        cout<<"Nota elevului numarul ";
        cin>>tab[i].nota;
    }
    existaInversiuni = 0;
    for(int i=0; i<NR_ELEVI; i++) {
        if(tab[i].nota <tab[i+1].nota) {
            existaInversiuni = 1;
            temp = tab[i];
            tab[i] = tab[i+1];
            tab[i+1] = temp;
        }
    }
    while(existaInversiuni) {
        for(int i=0; i<NR_ELEVI; i++) {
            cout<<tab[i].nume<<" "<<tab[i].nota;
        }
    }
}