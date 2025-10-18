/* Francisco Coliín Ulises
Clase 2, ejercicio 8*/

#include <stdio.h>
#include <math.h>

void main()
{    
    int num, pri, seg, sum;
	  float di, deci, c1, c2;

	  printf ("Ingrese un numero: \n");
	  scanf ("%d", &num);

	  if (num>9 && num<=99)
	  {
        di = num / 10;
		    deci = (num % 10)/10;
		    pri = di - deci;
		    printf ("Primer digito: %d \n", pri);

		    seg = num % 10;
		    printf ("Segundo digito: %d \n\n", seg);

		    sum =  pri + seg;
		    printf ("La suma de los digitos = %d \n", sum);
		
		    c1 = pri % 2;
        c2 = seg % 2;
        
		    if (c1 == 0 ||c2 == 0)
		    {
			      if (c1 == 0 && c2 == 0)
			      {
				        printf ("El numero tiene 2 digitos pares");
			      }
			      else
			      {
			          printf ("El numero tiene 1 digito par");
			      }
		    }
		    else
		    {
			      printf ("El numero tiene 0 digitos pares");
		    }
	  }                  
	  else
	  {
	       printf ("Numero fuera del rango");
	   }
}    
