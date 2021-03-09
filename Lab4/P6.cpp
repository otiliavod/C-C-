#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int returnMax();
int main()
{
    int Max;
    Max = returnMax();
    cout << "Cel mai mare numar prim este: " << Max;
}
int returnMax()
{
    int i, x;
    int max = 1000;

    for (x = 1000; x <= 9999; x++)
    {
        int este = 1;
        for (i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                este = 0;
                break;
            }
        }
        if (este == 1)
        {
            if (x > max)
            {
                max = x;
            }
        }
    }
    return max;
}
// Sa se scrie o functie care returneaza cel mai mare numar prim de 4 cifre.