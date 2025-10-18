/* Francisco Colín Ulises 
Clase 2, ejercicio 10*/

#include <stdio.h>

void main()
{
	int num1, num2, num3, num4, num5;

	printf ("Ingrese un numero: \n");
	scanf ("%d", &num1);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num2);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num3);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num4);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num5);

	if (num1<num2 && num1<num3 && num1<num4 && num1<num5)
	{
		printf ("El numero: %d es el menor", num1);
	}
	else
	{
		if (num2<num1 && num2<num3 && num2<num4 && num2<num5)
	    {
		    printf ("El numero: %d es el menor", num2);
	    }
	    else
	    {
	        if (num3<num1 && num3<num2 && num3<num4 && num3<num5)
	        {
		        printf ("El numero: %d es el menor", num3);
	        }
	        else
	        {
	            if (num4<num1 && num4<num3 && num4<num2 && num4<num5)
	            {    
		            printf ("El numero: %d es el menor", num4);
	            }
	            else
	            {
	                printf ("El numero: %d es el menor", num5);
	            }
	        }
	    }
	}
}
