#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int a=0,b=0,suma,resta,multiplicacion,division, resultado;
    cout <<"Ingrese el valor de a: ";
    cin >>a;
    cout << endl;
    cout <<"Ingrese el valor de b: ";
    cin >> b;
    cout << endl;
    resultado = a + b;
suma=a+b;
resta=a-b;
multiplicacion=a*b;
division=a/b;
cout<<"\n" << endl;
cout<< "la suma es:\t" <<suma<< endl;
cout<<"\n"<< endl;
cout<< "la resta es:\t" <<a<< "-" <<b<< "-" <<resta<< endl;
cout<<"\n"<< endl;
cout<< "la multiplicacion es:\t" << a << "x" << b << "-" <<multiplicacion<< endl;
cout<<"\n"<< endl;
cout<< "la division es:\t" << a << "/" <<b<< "-"<< division << endl;
cout<<"\n"<< endl;
   
system ("pause");
    return 0;


}
