/* Francisco Coliín Ulises
Clase 2, ejercicio 2*/

#include <stdio.h>
void main()
{
  int num1, num2;
  printf ("Ingrese el primer numero: \n");
  scanf ("%d", &num1);
  printf ("Ingrese el segundo numero: \n");
  scanf ("%d", &num2);
  if (num1 % num2 == 0)
  {
    printf ("El numero es divisible");
  }
}
