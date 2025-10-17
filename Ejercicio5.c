/* Francisco Coliín Ulises
Clase 2, ejercicio 5*/

#include <stdio.h>
#include <math.h>
void main()
{
    int edad; 
    const int base = 7;
    float precio;
    printf ("Ingrese su edad: \n");
    scanf ("%d", &edad);
    if (edad>=0)
    {
        if (edad>=60)
        {
            precio = 7-(base * 0.55);
            printf ("Costo de la entrada = %f euros", precio);
        }
        else
        {
            if (edad<60 && edad>5)
            {
               printf ("Costo de la entrada = %d euros", base); 
            }
            else
            {
                precio = 7-(base * 0.60);
                printf ("Costo de la entrada = %f euros", precio);
            }
        }
    }
    else
    {
        printf ("Edad no valida \n");
    }
}
