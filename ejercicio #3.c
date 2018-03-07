//realice un programa que pida el ingreso de un numero entero y un numero flotante al usuario y presente por pantalla estos numeros 
#include <stdio.h>
int main ()
{
int x;
float y;
printf ("ingrese un numero entero");
scanf ("%i", &x);
printf ("ingrese un numero flotante");
scanf ("%f", &y);
printf ("el numero entero es\n");
printf ("%i\n",x);
printf ("el numero flotante es\n");
printf ("%f\n",y);
system ("pause");
return 0;
}
