#include <iostream>

using namespace std;
int main (int argc, char const *argv[])
{
    int nota = 0;
     cout << "Ingrese la nota que obtuvo: ";
     cin >> nota;
    if (nota >= 96 && nota <=100){
     cout <<(" Obtuviste una A++");
    }
    if (nota >=94  && nota <=95){
     cout <<(" Obtuviste una A+");
    }
    if (nota >= 86 && nota <=90){
     cout <<( "Obtuviste una A-");
    }
    if (nota >= 80 && nota <=84){
     cout <<( "Obtuviste una B+");
    }
    if (nota >= 84 && nota <=74){
     cout <<( "Obtuviste una B+");
    }
    if (nota >= 70 && nota <=75){
     cout <<( "Obtuviste una B");
    }
    if (nota >= 65 && nota <=70){
     cout <<( "Obtuviste una B-");
    }
    if (nota >= 60 && nota <=65){
     cout <<( "Obtuviste una C");
    }
    if (nota >= 50 && nota <=54){
     cout <<( "Obtuviste una C-");
    }
    if (nota >= 55 && nota <=50){
     cout <<( "Obtuviste una C-");
    }
    if (nota >=45 && nota <=50){
     cout <<( "Obtuviste una D+");
    }
     if (nota >= 45 && nota <=40){
     cout <<( "Obtuviste una D");
    }
    if (nota >=44  && nota <=40){
     cout <<( "Obtuviste una D-");
    }
    if (nota >=35 && nota <=40){
     cout <<( "Obtuviste una E+");
    }
 if (nota >=34  && nota <=30){
     cout <<( "Obtuviste una E ");
    }
    if (nota >=25  && nota <=35){
     cout <<( "Obtuviste una E+");
    }
    if (nota >=20 && nota <=25){
     cout <<( "Obtuviste una F+");
    }
 if (nota >= 15 && nota <=20){
     cout <<( "Obtuviste una F");
    }
    if (nota >=10  && nota <=15){
     cout <<( "Obtuviste una F ");
    }
    if (nota >=5 && nota <=10){
     cout <<( "Obtuviste una F-"); 
     }
     if (nota >= 0 && nota <=10){
     cout <<( "Obtuviste una F--");

    }
    }return 0;
}
