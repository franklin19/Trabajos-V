//Realice un programa con mensajes de peticion y presentacion eficientes. Que p�da 2 �os de nacimiento al usuario, presente las edades actuales e indique cual de ellas es mayor
#include <stdio.h>
int main ()
{
int x, z, c=2018;
int y,t;
printf ("ingrese el primer a�o de nacimento\n");
scanf ("%i", &x);
printf ("ingrese el segundo a�o de nacimiento\n");
scanf ("%i", &z);
y=x-c;
t=z-c;
printf ("la edad actual del primer a�o es\n");
printf ("%i\n", y);
printf ("la edad actual del segundo a�o es\n");
printf ("%i\n", t);
if (t>y)
{
printf ("la primera edad es mayor\n");
printf ("%i\n", y);
}
else
{
printf ("la segunda edad es mayor\n");
printf ("%i\n", t);
}
system ("pause");
return 0;
}





