/* Francisco Coliín Ulises
Clase 2, ejercicio 3*/

#include <stdio.h>
#include <math.h>
void main()
{
    int num;
    printf ("Escriba un numero: \n");
    scanf ("%d", &num);
  
    if (num % 2 == 0)
    {
        printf ("El numero es par \n");
        if (num % 3 == 0)
        {
            printf ("El numero es multiplo de 3 \n");
        }
        else
        {
      printf ("El numero no es multiplo de 3 \n");
        }
    }
    else
    {
        printf ("El numero no es par \n");
    }
}
