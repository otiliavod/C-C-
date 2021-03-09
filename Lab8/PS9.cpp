// Sa se cripteze un sir citit de la tastatura dupa algoritmul introdus
//de Louis Mansfiel in 1936. La acest tip de criptare, fiecare litera
//este inlocuita cu doua vocale. Toate literele alfabetului englez sunt
//plasate in celulele unei matrici patrate de 5 linii si 5 coloane. Pe
//marginile acestui patrat se aseaza cele 5 vocale, astfel:
// A a b c d e
// E f g h i/j k
// I l m n o p 
// O q r s t u
// U v w x y z
// Literele i si j se codifica la fel. O litera oarecare din cele 25 va 
//fi substituita in textul criptat de cele 2 vocale: cea de pe linie si 
//cea de pe coloana literei din matrice. 

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
    char s[80];
    char sCriptat[160];
    cout<<"Sir: ";
    cin>>s;
    gets(s);
    char C[5][5] = {'a', 'b', 'c', 'd', 'e',
                    'f', 'g', 'h', 'i', 'k',
                    'l', 'm', 'n', 'o', 'p',
                    'q', 'r', 's', 't', 'u',
                    'v', 'w', 'x', 'y', 'z'};
    char V[5] = {'A', 'E', 'I', 'O', 'U'};
    int c;
    int gasit;
    int lin, col;
    int i, j;
    j = 0;
    for(i=0; i<strlen(s); i++) {
        c = tolower(s[i]);
        if(islower(c)) {
            if(c == 'j') {
                sCriptat[j] = 'E';
                j++;
                sCriptat[j] = 'O';
                j++;
            }
            else {
                gasit = 0;
                for(lin=0; lin<5; lin++) {
                    for(col=0; col<5; col++) {
                        if(C[lin][col] == c) {
                            gasit = 1;
                            break;
                        }
                        if(gasit == 1) {
                            break;
                        }
                    }
                }
                sCriptat[j] = V[lin];
                j++;
                sCriptat[j] = V[col];
                j++;
            }
        }
        else {
            sCriptat[j] = c;
            j++;
        }
    }
    sCriptat[j] = 0;
    cout<<sCriptat;
}