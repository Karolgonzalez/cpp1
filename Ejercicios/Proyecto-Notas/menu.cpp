#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "MostrarClases.h"
#include "Acumulados.h"
#include "seguridad.h"

using namespace std;

void menu() {
    bool salir = false;
    string code, resultSearched;

    while(salir == false) {
        int opcion = 0;

        cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Mostrar mis clases" << endl;
		cout << "2 - Buscar mis clases" << endl;
		cout << "3 - Mostrar mis acumulados" << endl;
		cout << "4 - Rendimiento Final" << endl;
		cout << "5 - Cambiar Password" << endl;
		cout << "6 - Volver" << endl;
		cout << "7 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;

        switch (opcion)
        {
        case 1:
            mostrarClases();
            break;
        case 2: 
            system("cls");
            cout<<"Ingrese la seccion de la clase buscada: "<<endl;
            cin>>code;
            cout<<endl;
            resultSearched = buscarClases(code);
            cout<<"Su clase buscada: "<<endl<<resultSearched<<endl<<endl;
            system("pause");
            break;
        case 3: 
            mostrarAcumulados();
            break;
        case 4: 
            calcularPromedio();
            break;
        case 5: 
            changePassword();
            break;
        case 6:
            login();
            break;
        case 7:
            salir = true;
        default:
            break;
        }

        system("cls");

    }

}