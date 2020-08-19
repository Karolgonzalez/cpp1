#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeros[5][5];

    srand(time(NULL));
   
    numeros[0][0] = rand() % 30 + 1;
    numeros[0][1] = rand() % 30 + 1;
    numeros[0][2] = rand() % 30 + 1;
    numeros[0][3] = rand() % 30 + 1;
    numeros[0][4] = rand() % 30 + 1;

    numeros[1][0] = rand() % 30 + 1;
    numeros[1][1] = rand() % 30 + 1;
    numeros[1][2] = rand() % 30 + 1;
    numeros[1][3] = rand() % 30 + 1;
    numeros[1][4] = rand() % 30 + 1;

    numeros[2][0] = rand() % 30 + 1;
    numeros[2][1] = rand() % 30 + 1;
    numeros[2][2] = rand() % 30 + 1;
    numeros[2][3] = rand() % 30 + 1;
    numeros[2][4] = rand() % 30 + 1;

    numeros[3][0] = rand() % 30 + 1;
    numeros[3][1] = rand() % 30 + 1;
    numeros[3][2] = rand() % 30 + 1;
    numeros[3][3] = rand() % 30 + 1;
    numeros[3][4] = rand() % 30 + 1;

    numeros[4][0] = rand() % 30 + 1;
    numeros[4][1] = rand() % 30 + 1;
    numeros[4][2] = rand() % 30 + 1;
    numeros[4][3] = rand() % 30 + 1;
    numeros[4][4] = rand() % 30 + 1;

    int suma = 0;
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "|" << numeros[i][j] << "|"  << " ";
            suma = suma + numeros[i][j] ;
        }

     cout << endl;
    }

    cout << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
}