#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define N 20
using namespace std;
long long int fact(int x);
int main()
{ 
    long long int res = fact(N);
    cout<<res;
}
long long int fact(int x)
{
    if(x == 0) {
        return 1;
    }
    else {
        return x*fact(x-1);
    }
}
// Sa se scrie un program prin care se calculeaza si afiseaza N!, unde N
//este un numar mare. 