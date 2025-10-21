/* Francisco Coliín Ulises
Clase 2, ejercicio 12 */

#include <stdio.h>
int main()
{
    int num;
    
    printf("Ingrese algun numero del 1 al 7 para asignar un dia: \n");
    scanf(" %c", &num);

	switch (num)
	{
		case '1':
			printf("\nLunes\n");
			break;
        case '2':
        	printf("\nMartes\n");
			break;
        case '3':
        	printf("\nMiercoles\n");
			break;
        case '4':
        	printf("\nJueves\n");
			break;
        case '5':
        	printf("\nViernes\n");
			break;
        case '6':	
			printf("\nSabado\n");
			break;
		case '7':
			printf("\nDomingo\n");
			break;
		
		default:
			printf("\nEl valor ingresado no es valido\n");
    }
	
	return 0;
}
