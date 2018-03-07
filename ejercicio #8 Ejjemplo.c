//realice un programa que pida el ingreso de un numero entero y un numero flotante al usuario y presente por pantalla estos numeros 
#include <stdio.h>
int main ()
{
int w,x,A;
float y,z,B;
printf ("ingrese dos numeros entero");
scanf ("%i", &w);
scanf ("%i",&x);
printf ("ingrese dos numeros flotante");
scanf ("%f", &y);
scanf ("%f",&z);
A=w+x;
printf ("el numero entero es\n");
printf ("%i\n",A);
B=y/z;
printf ("el numero flotante es\n");
printf ("%.2f\n",B);
system ("pause");
return 0;
}
