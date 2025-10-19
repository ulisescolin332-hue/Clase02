/* Francisco Colín Ulises 
Clase 2, ejercicio 10*/

#include <stdio.h>

void main()
{
	int num1, num2, num3, m, mm, mmm; 

	printf ("Ingrese un numero: \n");
	scanf ("%d", &num1);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num2);
	printf ("Ingrese otro numero: \n");
	scanf ("%d", &num3);

	if (num2<=num3)
	{
	    mmm = num3;
	    if (num1<=num2)
	    {
	        mm = num2;
	        m = num1;
	    }
	    else
	    {
	        mm = num1;
	        m = num2;
	    }
	}
	else
	{
		if (num3<=num2)
	    {
		    mmm = num2;
		    if (num1<=num3)
	        {
	            mm = num3;
	            m = num1;
	        }
	        else
	        {
	            mm = num1;
	            m = num3;
	        }
	    }
	    else
	    {
	        mmm = num1;
	        if (num2<=num3)
	        {
	            mm = num3;
	            m = num2;
	        }
	        else
	        {
	            mm = num2;
	            m = num3;
	        }
	    }
	}
    printf ("Los numeros ordenados de mayor a menor: %d => %d => %d", mmm, mm, m);
}
