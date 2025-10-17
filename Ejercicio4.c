/* Francisco Coliín Ulises
Clase 2, ejercicio 4*/

#include <stdio.h>
void main()
{
    int num1, num2;
    printf ("Escriba un numero: \n");
    scanf ("%d", &num1);
    printf ("Escriba otro numero: \n");
    scanf ("%d", &num2);
    if (num1 == num2)
    {
        printf ("Ambos numeros son iguales \n");
    }
    else
    {
        if (num1 > num2)
        {
            printf ("El primero es mayor al segundo \n");
        }
        else
        {
            printf ("El segundo es mayor al primero \n");
        }
    }
}
