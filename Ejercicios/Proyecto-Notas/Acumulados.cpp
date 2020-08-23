#include <iostream>
#include <stdlib.h>

using namespace std;


struct Notas
{
    string name;
    double notas[3];
}
notaClase1 = {"Lenguaje de Programacion I", {90,95,92}},
notaClase2 = {"Sistemas Operativos", {92,92,92}},
notaClase3 = {"Recursos Humanos en Informatica", {93,95,90}};

void mostrarAcumulados()
{
    system("cls");
    cout<<"              *** ACUMULADOS ***"<<endl;
    cout<<"          -------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"          Nombre     "<<"         Notas   "<<endl;
    cout<<endl;
    cout<<notaClase1.name<<"     | "<<notaClase1.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase1.notas[i];
    }
    cout<<endl;
    
    cout<<notaClase2.name<<"            | "<<notaClase2.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase2.notas[i];
    }
    cout<<endl;
    
    cout<<notaClase3.name<<"| "<<notaClase3.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase3.notas[i];
    }
    cout<<endl;
    cout<<endl;
    system("pause");
}

void calcularPromedio()
{
    system("cls");
    double nota1,nota2,nota3,acum=0.0;
    nota1 = nota2 = nota3 = 0.0;

    cout<<"   *** Rendimiento Final ***   "<<endl<<endl;
    for(unsigned short i = 0; i < 3; i++)
    {
        acum += notaClase1.notas[i];
    }
    nota1 = acum/3;
    cout<<notaClase1.name<<"     |"<<nota1<<endl;
    acum=0.0;
    for(unsigned short i = 0; i < 3; i++)
    {
        acum += notaClase2.notas[i];
    }
    nota2 = acum/3;
    cout<<notaClase2.name<<"            |"<<nota2<<endl;

    acum =0.0;
    for(unsigned short i = 0; i < 3; i++)
    {
        acum += notaClase3.notas[i];
    }
    nota3 = acum/3;
    cout<<notaClase3.name<<"|"<<nota3<<endl<<endl;
    system("pause");

}