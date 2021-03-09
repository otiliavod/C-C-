// Se citesc trei numere intregi de la tastatura, a, b si c, coeficienti ai//
// polinomului de gradul doi P(x)=a*x*x+bx+c. Sa se calculeze si afiseze valoarea//
// polinomului pt o valoare particulara intreaga x, citita de la tastatura.//

#include <iostream>
#include <stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a, b, c, x;
    cin>>a>>b>>c;
    int P;
    cin>>x;
    P=a*x*x+b*x+c;
    cout<<P;
}
