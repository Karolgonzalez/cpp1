#include <iostream>

using namespace std;

double subtotal;
double calculoImpuesto;
double total;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    calculoImpuesto = subtotal * 0.15;
    total = calculoImpuesto + subtotal;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl,
    cout << "*******" << endl;
    cout << endl;

    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "I.S.V 15%: " << calculoImpuesto;
    cout << endl;
    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;
    system("pause");


}