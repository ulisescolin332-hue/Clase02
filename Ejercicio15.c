/* Francisco Coliín Ulises
Clase 2, ejercicio 15*/

#include <stdio.h>
int main()
{
    int car;
    
    printf("Ingrese un numero de carta de la baraja española: ");
    scanf("%d", &car);
    
    if (car>=1 && car<=12)
    {
    	if (car==1)
    	{
    		printf("\nAs\n");	
		}
		else
		{
			if (car>=2 && car<=9)
			{
				printf("\nNo es as ni figura\n");
			}
			else
			{
				if (car==10)
				{
					printf("\nSota\n");
				}
				else
				{
					if (car==11)
					{
						printf("\nCaballo\n");
					}
					else
					{
						printf("\nRey\n");
					}
				}
			}
		}
	}
	else
	{
		printf("\nEste no es un numero de una carta de la baraja española\n");
	}
    return 0;
}
