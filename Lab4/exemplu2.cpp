#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void intersectie(int A[], int nA, int B[], int nB, int C[], int &nC);
void initializeArrayDim(int &nA, int &nB, int &nC);
void initializeArray(int Array[], int dim, bool emptyValues, char name);
void displayArray(int Array[], int dim, char name);


int main ()
{   int nA,nB,nC;
    int A[nA],B[nB],C[nC];
   initializeArrayDim(nA,nB,nC);
   initializeArray(A,nA,false,'A');
   initializeArray(B,nB,false,'B');
   initializeArray(C,nC,true, 'C');
   intersectie(A,nA,B,nB,C,nC); 
   // afisam valorile intersectate
   displayArray(C,nC,'C');
   displayArray(A,nA,'A');
   displayArray(B,nB,'B');
   suma(2,3);
   suma(256, 85);
   suma(432, 567);
   suma(suma(234,2546),4567);
}

int suma(int nr1, int nr2){
    cout<< nr1 + nr2;
    return nr1+ nr2;
}

void displayArray(int Array[], int dim, char name){
   for( int k=0;k<dim;k++) {
        if(Array[k]!=0){
            cout<<name<<"["<<k<<"]=" << Array[k] << "\n";
        }
      
    }
}

void initializeArrayDim(int &nA, int &nB, int &nC){
    cout<<"Numarul elementelor multimii A este= ";
    cin>>nA;
    cout<<"Numarul elementelor multimii B este= ";
    cin>>nB;
    nC = nA; // incerc cu nA 
    if(nB>nC){
        nC = nB; // preiau dimensiunea cea mai mare ca sa fiu sigur
    }
}

void initializeArray(int Array[], int dim, bool emptyValues, char name){
    if(emptyValues == true){
         for(int k=0;k<dim;k++){
           Array[k] = 0;
        }
    }
     else {
         for(int k=0;k<dim;k++){
            cout << name <<"["<<k<<"]=";
            cin>>Array[k];
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



