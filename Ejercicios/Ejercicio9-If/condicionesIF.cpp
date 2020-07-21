#include <iostream>

using namespace std;
int  main(int argc, char** argv)
{

    int numeroSecreto = 7;
    int numero = 0;

    cout <<"ingrese un numero: ";
    cin >> numero;

    if (numero == numeroSecreto){
        cout <<"Adivinaste el numero secreto: "<< numero;
    } else {
         cout <<"No adivinaste";
    
    }
    

    return 0;
}