#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
int main ()
{
    int A[N][N];
    int i, j, linCrt, colCrt, lin, col;
    int nr;
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            A[i][j] = 0;
        }
    }
    linCrt = N-1;
    colCrt = N/2;
    A[linCrt][colCrt] = 1;
    for(nr=2; nr<N*N; nr++) {
        if((linCrt == N-1) && (colCrt == N-1)) {
            linCrt = N-2;
        }
        else {
            lin = linCrt;
            col = colCrt;
            linCrt = linCrt +1;
            colCrt = colCrt + 1;
            if(linCrt == N) {
                linCrt = 0;
            }
            if(colCrt == N) {
                colCrt = 0;
            }
            if(A[linCrt][colCrt] != 0) {
                linCrt = lin - 1;
                colCrt = col;
            }
        }
        A[linCrt][colCrt] = nr;
    }
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            cout<<A[i][j]<<"\n";
        }
    }
}

//Implmentati urmatorul algoritm prin care se construieste un patrat 
//magic de dimensiune N. Acesta este valabil numai pentru N - impar.
//Plasati valoarea 1 in mijlocul randului de jos. Apoi, pentru fiecare
//numar Nr de la 2 la N*N se repeta:
//daca numarul anterior(Nr-1) a fost plasat in linia i si coloana j,
//numarul curent Nr se va plasa in linia i+1(o linie mai jos) si in 
//coloana j+1(o coloana mai la deapta). Daca linia trece pete ultima, se
//va trece in linia 0. La fel si daca se trece peste ultima coloana: se 
//va trece in coloana 0. Daca pozitia calculata este deja ocupata,numarul
//curent se va scrie in aceeasi coloana, dar cu o linie mai sus. Astfel,
//pentru N = 3 se obtine urmatorul patrat magic :
// 4 9 2
// 3 5 7 
// 8 1 6