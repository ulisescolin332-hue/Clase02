#include <stdio.h>
int main()
{
    float x1, y1, x2, y2, den, m;
    
    printf("Ingrese el valor de x del punto A: ");
    scanf("%f",&x1);
    printf("Ingrese el valor de y del punto A: ");
    scanf("%f",&y1);
    printf("\nIngrese el valor de x del punto B: ");
    scanf("%f",&x2);
    printf("Ingrese el valor de y del punto B: ");
    scanf("%f",&y2);
    
    printf("\nPunto A(%f,%f) \n", x1, y1);
    printf("Punto B(%f,%f) \n", x2, y2);
    
    den = x2 - x1;
    if (den != 0)
    {
    	m = (y2-y1)/(x2-x1);
    	printf("\nLa pendiente entre los dos puntos es: \n m = %f", m);
	}
	else
	{
		printf("\nLa pendiente entre los dos puntos es indefinida (recta vertical: x = %f)", x1);
	}
    return 0;
}
