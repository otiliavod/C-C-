#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
int ec2(double a, double b, double c, double &x1, double &x2);
int main ()
{
    double a, b, c, x1, x2;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    ec2(a, b, c, x1, x2);
    
}
int ec2(double a, double b, double c, double &x1, double &x2)
{
    double delta = (b*b) - 4 * (a*c);
    if(delta > 0) {
        x1 = (-b + sqrt(delta) / (2 * a));
        x2 = (-b - sqrt(delta) / (2 * a));
        cout<<"Solutiile ecuatiei sunt: "<<x1<<" "<<"si"<<" "<<x2;
    }
    else {
        if(delta == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        cout<<"Solutiile ecuatiei sunt: "<<x1<<" "<<"si"<<" "<<x2;
    }
    }
    if(delta < 0) {
        cout<<"Ecuatia nu are solutii reale";
    }
    return 1;
}

// Sa se scrie o functie care scoate drept rezultat solutiile ecuatiei
//de gradul al doilea si are antetul:
//int ec2(double a, double b, double c, double &1, double 2).