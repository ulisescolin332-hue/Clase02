/* Francisco Coliín Ulises
Clase 2, ejercicio 13 */

#include <stdio.h>
int main()
{
    int op; 
    float b, bmay, bmen, h, a;
    
    printf("CALCULO DE AREAS \n\n");
    printf("1 - Calcular el area de un triangulo \n");
    printf("2 - Calcular el area de un trapecio \n");
    printf("3 - Calcular el area de un rectangulo \n\n");
    printf("Seleccione alguna opcion\n");
    scanf("%d", &op);

	switch (op)
	{
		case 1:
			
    			printf("\nIngrese el valor de la base del triangulo \n");
    			scanf("%f", &b);
    			printf("Ingrese el valor de la altura del triangulo \n");
    			scanf("%f", &h);
    			
    			a=(b*h)/2;
    			printf("\nEl area del triangulo es: %f \n", a);
    			break;
    
    case 2:
        	
	    		printf("\nIngrese el valor de la base menor del trapecio \n");
    			scanf("%f", &bmen);
    			printf("Ingrese el valor de la base mayor del trapecio \n");
    			scanf("%f", &bmay);
    			printf("Ingrese la altura del trapecio \n");
    			scanf("%f", &h);
    			
    			a=((bmen+bmay)*h)/2;
    			printf("\nEl area del trapecio es: %f \n", a);
    			break;
    
    case 3:
        	
        	printf("\nIngrese el valor de la base del rectangulo \n");
    			scanf("%f", &b);
    			printf("Ingrese el valor de la altura del rectangulo \n");
    			scanf("%f", &h);
    			
    			a=(b*h);
    			printf("\nEl area del rectangulo es: %f \n", a);
    			break;
		
		default:
			    printf("\nEl valor ingresado no es valido\n");
    }
	
	return 0;
}
