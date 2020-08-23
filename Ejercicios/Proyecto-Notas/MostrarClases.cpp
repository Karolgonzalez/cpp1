#include <iostream>
#include <stdlib.h>

using namespace std;

string arrayClases[3][2] = 
{
	{ "1500", "Lenguaje de Programacion I"},
	{ "0901", "Sistemas Operativos"},
	{ "1501", "Recursos Humanos en Informatica"}
};

void mostrarClases() {
    system("cls");
    cout << "Seccion, Nombre" << endl;
    cout << "-------------------------" << endl << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arrayClases[i][0] << " | ";
        cout << arrayClases[i][1] << " | ";
        cout << endl;
    }    

    cout << endl;
    cout << endl;
    system("pause");
}

string buscarClases(string code) {

    for (int i = 0; i < 3; i++)
    {
        if (arrayClases[i][0] == code) {
            return arrayClases[i][1];
        }
    }

    return "";
}