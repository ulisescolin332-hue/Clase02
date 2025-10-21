/* Francisco Coliín Ulises
Clase 2, ejercicio 11 (switch) */

#include <stdio.h>
int main()
{
    char car;
    
    printf("Ingrese algun caracter: ");
    scanf(" %c", &car);

	switch (car)
	{
		case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':	
			printf("\nEl caracter ingresado es una vocal\n");
			break;
		
		default:
			printf("\nEl caracter ingresado NO es una vocal\n");
	}
    return 0;
}
