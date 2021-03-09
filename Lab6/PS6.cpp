#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 9
using namespace std;
int main()
{
    int A[N] = {11111,-1,77,8,111,4,3,55,100};
    int nr, i, j;
    int iNesortatSt;
    for(iNesortatSt = 1; iNesortatSt<N; iNesortatSt++) {
       nr = A[iNesortatSt];
       if(nr > A[iNesortatSt - 1]) {
           continue;
       }
       for(i=0; i<iNesortatSt; i++) {
           if(nr < A[i]) {
               for(j=iNesortatSt-1; j>=i; j--) {
                   A[j+1] = A[j];
               }
               A[i] = nr;
               break;
           }
       }
    }
    for(i=0; i<N; i++) {
        cout<<A[i]<<"\n";
    }
}

// Sa se implementeze un program care implementeaa algoritmul de sortare
//prin insertie a elementelor unui vector.