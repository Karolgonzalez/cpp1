#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
    {
        int i, numero, pares, impares;

    pares = 0;
    impares = 0;
    
       for ( i = 1 ; i <= 5 ; i++ )
    {
        printf( "\n   Introduzca un n%cmero entero %d: ", 163, i );
        scanf( "%d", &numero );

        if ( numero % 2 == 0 )
            pares++;
        else
            impares++;
    }

    printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 163, impares );

    getch(); /* Pausa */

    
        return 0;
    }