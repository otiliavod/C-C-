#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
int cmmdc(int x, int y);
int main()
{
    int a[N], r;
    for(int i=0; i<N; i++) {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    r = a[0];
    for(int i=1; i<N; i++) {
        r = cmmdc(r, a[i]);
    }
    cout<<r;
}

int cmmdc(int x, int y)
{
    while( x != y) {
        if(x > y) {
            x = x - y;
        }
       else {
           y = y - x;
       }
    }
    return x;
}

// Sa se realizeze un program care calculeaza cmmdc al elementelor unui
//vector.