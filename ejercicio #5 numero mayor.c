//realice un preograma que pida al usuario el ingreso de 3 numeros enteros diferentes, y presente por pantalla solo el mayor de ellos
#include <stdio.h>
int main()
{
int a;
int b;
int c;
printf ("ingrese 3 numeros enteros diferentes");
scanf ("%i\n",&a);
scanf ("%i\n",&b);
scanf ("%i",&c);

if (a>b,a>c){
printf ("el primer numero entero es mayor\n");
printf ("%i",a);
}
else {
}
if (b>a, b>c){
printf ("el segundo numero entero es mayor\n");
printf ("%i",b);
}
else {
}
if (c>a, c>b){
printf ("el tercer numero entero es mayor\n");
printf ("%i",c);
}
system ("pause");
return 0;
}
