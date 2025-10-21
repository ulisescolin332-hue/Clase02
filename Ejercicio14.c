/* Francisco Coliín Ulises
Clase 2, ejercicio 14*/

#include <stdio.h>
int main()
{
    float hor, pre, sue;
    
    printf("Ingrese las horas que trabaja a la semana: ");
    scanf("%f", &hor);
    printf("Ingrese el sueldo percibido por hora: ");
    scanf("%f", &pre);
    
    if (hor>=0)
    {
    	if (hor<=40)
    	{
    		sue = hor*pre;
    		printf("\nEl sueldo semanal total corresponde a: %f ", sue);	
		}
		else
		{
			if (hor>40 && hor<=50)
			{
				sue = (40*pre) + ((hor-40)*pre*1.5);
    			printf("\nEl sueldo semanal total corresponde a: %f ", sue);
			}
			else
			{
				sue = (40*pre) + (10*pre*1.5) + ((hor-50)*pre*2);
    			printf("\nEl sueldo semanal total corresponde a: %f ", sue);
			}
		}
	}
	else
	{
		printf("\nDatos escritos no validos");
	}
    return 0;
}
