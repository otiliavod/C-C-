// Se dau trei tije notate cu I(tija initiala), M(tija de manevra) si F
//(tija finala). Pe tija I se afla N discuri, de diametre diferite,asezate
//in ordinea descrescatoare a diametrelor. Acestea trebuie mutate pe tija
//finala F, folosind eventual, tija intermediara. O mutare consta din 
//luarea unui disc de diametru mai mare peste un disc de diametru mai mic.

#include <iostream>
#include <stdio.h>
#include <conio.h>
#define N 3
using namespace std;
void Hanoi(char tI, char tF, char tM, int n);
int main()
{
    Hanoi('I', 'F', 'M', N);
}

void Hanoi(char tI, char tF, char tM, int n)
{
    if(n == 1) {
        cout<<tI<<"->"<<tF;
        return;
    }
    Hanoi(tI, tM, tF, n-1);
    cout<<tI<<"->"<<tF;
    Hanoi(tM, tF, tI, n-1);
}