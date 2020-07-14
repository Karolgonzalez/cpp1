#include <iostream>

using namespace std;
int main ( int argc, char** argv){
double subtotal = 0;
double total =0;
double impuesto= 0.15;
cout <<"Ingrese el sutotal de la factura: ";
cin >>subtotal;

total= subtotal + (subtotal *0.15);

 cout << endl;
cout <<"Total a pagar es: " <<total;
return 0;

}