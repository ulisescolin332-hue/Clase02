/* Francisco Coliín Ulises
Clase 2, ejercicio 11 (If else) */

#include <stdio.h>
int main()
{
    char car;
    
    printf("Ingrese algun caracter: ");
    scanf(" %c", &car);

	if (car=='a' || car=='e' || car=='i' || car=='o' || car=='u' || car=='A' || car=='E' || car=='I' || car=='O' || car=='U')
    {
    	printf("\nEl caracter ingresado es una vocal\n");
	}
	else 
	{
		printf("\nEl caracter ingresado NO es una vocal\n");
	}
	return 0;
}
