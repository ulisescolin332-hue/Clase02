/* Francisco Coliín Ulises
Clase 2, ejercicio 6*/

#include <stdio.h>
#include <math.h>

void main()
{
    float val, fval;
    
    printf ("Ingrese un valor x de la funcion: \n");
    scanf ("%f", &val);
    
    if (val<=0)
    {
        fval = val + 3;
        printf ("La funcion f(x) evaluda en el valor de x, f(%f) = %f \n", val, fval);
    }
    else
    {
        fval = pow(val,2) + (2 * val);
        printf ("La funcion f(x) evaluda en el valor de x, f(%f) = %f \n", val, fval);
    }
}
