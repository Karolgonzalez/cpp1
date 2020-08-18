#include <iostream>
#include "productos.h"

using namespace std;

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Expresso" << endl;
        cout << "2 - Chocolate" << endl;
        cout << "3 - Cafe Dalgona" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Expresso  - L20 .00", 1, 20 );
            break;
        case 2:
            agregarProducto("1 Chocolate - L 45.00", 1, 45);
            break;
        case 3:
            agregarProducto("1 Cafe Dalgona - L60 .00", 1, 60);
            break;

        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");

        break;
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 Frappe de fresa- " << endl;
        cout << "2 Malteada Mora azul - " << endl;
        cout << "3 Moccaccino Suprime - " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Frappe de fresa  - L 55.00", 1, 55 );
            break;
        case 2:
            agregarProducto("1 Malteada Mora azul  - L50 .00", 1, 50 );
            break;
        case 3:
            agregarProducto("1 Moccaccino Suprime - L 67.00", 1,67 );
            break;
        
        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 Chocochips - " << endl;
        cout << "2 Pay - " << endl;
        cout << "3 Sandwich- " << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto("1 Chocochips  - L 18.00", 1, 18 );
            break;
        case 2:
            agregarProducto("1 Pay - L30 .00", 1, 30 );
            break;
        case 3:
            agregarProducto("1  Sandwich- L 20 .00", 1, 20 );
            break;
        
        default:
            {
                cout << "Opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }

    default:
        break;
    }
}