//Realice un programa con mensajes de peticion y presentacion eficientes. Que pìda 2 ños de nacimiento al usuario, presente las edades actuales e indique cual de ellas es mayor
#include <stdio.h>
int main ()
{
int x, z, c=2018;
int y,t;
printf ("ingrese el primer año de nacimento\n");
scanf ("%i", &x);
printf ("ingrese el segundo año de nacimiento\n");
scanf ("%i", &z);
y=x-c;
t=z-c;
printf ("la edad actual del primer año es\n");
printf ("%i\n", y);
printf ("la edad actual del segundo año es\n");
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





