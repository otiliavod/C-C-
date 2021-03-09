#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void max_minV(int A[], int dimA, int&max, int&pozMax, int&min, int&pozMin);
int main ()
{
    int min, max, pozMin, pozMax, A[6] = {11, 9, 19, 30, 310, 36};
    max_minV(A, 6, max, pozMax, min, pozMin);
    cout<<"Maximul este: "<<max<<" "<<"si are indexul: "<<pozMax;
    cout<<"Minimul este: "<<min<<" "<<"si are indexul: "<<pozMin;
}
void max_minV(int A[], int dimA, int&max, int&pozMax, int&min, int&pozMin)
{
    int i;
    max=A[0];
    pozMax=0;
    for(i=1;i<dimA;i++) {
        if(A[i]>max) {
            max=A[i];
            pozMax=i;
        }
    }
    min=A[0];
    pozMin=0;
    for(i=1;i<dimA;i++) {
        if(A[i]<min) {
            min= A[i];
            pozMin= i;
        }
    }
}

// Sa se scrie o functie, impreuna cu un program de test, care returneaza
//minumul si maximul dintr-un vector, precum si pozitiile lor.