//Realize un programa que pida el ingreso de dos numeros enteros, si su promedio de ellos es un numero par presentelo sumando mas diez y si es un numero impar indiqelo con un mensaje
#include <stdio.h>
int main ()
{
printf ("Ingrese dos numero enteros \n");
int N1,N2,A,B,C;
scanf ("%i\n",&N1);
scanf ("%i",&N2);
A=(N1+N2)/2;
printf ("%i\n",A);
B=A%2;
if (B==0){
C=B+10;
printf ("%i",C); }
else {
printf ("Es impar \n");}
system ("pause ");
return 0;
}
