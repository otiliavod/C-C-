#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void returnV(long int nr, int A[]);
int main ()
{
    long int x;
    cout<<"x= ";
    cin>>x;
    int b, A[1000];
    for(int b=0;b<1000;b++){
        A[b] = 0;
    }
    returnV(x,A);
    for(b=0;b<1000;b++) {
        if(A[b]!=0) {
             cout<<A[b]<<"\n";
        }
    }
}
void returnV(long int nr, int A[])
{
    int i, c;
    i=0;
    while(nr!=0) {
        c=nr%10;
        nr=nr/10;
        A[i] = c;
        i++;
    }
}

// Sa se scrie o functie si progremul de test, care are ca intrare un 
//numar de tip long int si scoate ca reultat un vector ce contine toate
//cifrele numarului.