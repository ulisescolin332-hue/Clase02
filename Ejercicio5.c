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
            precio = base * 0.45;
            printf ("Costo de la entrada = %f euros \n", precio);
        }
        else
        {
            if (edad<60 && edad>5)
            {
               printf ("Costo de la entrada = %d euros \n", base); 
            }
            else
            {
                precio = base * 0.40;
                printf ("Costo de la entrada = %f euros \n", precio);
            }
        }
    }
    else
    {
        printf ("Edad no valida \n");
    }
}
