#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void intersectie(int A[], int nA, int B[], int nB, int C[], int &nC);
int main ()
{   int nA,nB,nC;
    cout<<"Numarul elementelor multimii A este= ";
    cin>>nA;
    cout<<"Numarul elementelor multimii B este= ";
    cin>>nB;
    nC = nA; // incerc cu nA 
    if(nB>nC){
        nC = nB; // preiau dimensiunea cea mai mare ca sa fiu sigur
    }
    int A[nA],B[nB], C[nC];

    //initializez valorile in vectorul C cu 0
    for(int k=0;k<nC;k++){
        C[k] = 0;
    }
    
    // initializam valorile in vectorul A
    for(int i=0;i<nA;i++) {
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
    // initializam valorile in vectorul B
    for(int j=0;j<nB;j++) {
        cout<<"B["<<j<<"]=";
        cin>>B[j];
    }
    // calculam intersectia si setam valorile in vectorul C
    intersectie(A,nA,B,nB,C,nC); // aici sunt deja pregatite datele pentru verificare
    // afisam valorile intersectate
    for( int k=0;k<nC;k++) {
        if(C[k]!=0){
            cout<<"C["<<k<<"]=" << C[k] << "\n";
        }
      
    }
}
void intersectie(int A[], int nA, int B[], int nB, int C[], int &nC)
{
    int k = 0;  
    for(int i=0;i<nA;i++) {
        for(int j=0;j<nB;j++) {
            if(A[i]==B[j]) {
                C[k] = A[i];
                k++;
            }
        }
    }
}

// Sa se scrie o functie care are ca rezultat intersectia a doua multimi
//si are antetul:
//void intersectie(int A[], int nA[], int B[], int nB[], int C[], int&nC[])



