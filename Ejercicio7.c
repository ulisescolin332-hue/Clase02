/* Francisco Coliín Ulises
Clase 2, ejercicio 7*/

#include <stdio.h>

void main()
{
    int num1, num2, num3;
    
    printf ("Ingrese el primer numero de una cifra: \n");
    scanf ("%d", &num1);
    printf ("Ingrese el segundo numero de una cifra: \n");
    scanf ("%d", &num2);
    printf ("Ingrese el tercer numero de una cifra: \n");
    scanf ("%d", &num3);
    
    if (num1>=-9 && num1<=9 && num2>=-9 && num2<=9 && num3>=-9 && num3<=9)
    {
        if (num1==1 && num2==2 && num3==3)
        {
            printf ("Acceso permitido");
        }
    }
    else
    {
        printf ("Los numeros deben de tener solo una cifra");
    }
}

