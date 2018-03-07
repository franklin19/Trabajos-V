// Realize un programa que pida el ingreso de tres precios y cantidades de productos. Que presente el valor a pagar de cada producto, el total de la compra y un descuento del 5%
#include <stdio.h>
int main ()
{
printf ("Ingrese 3 precios de productos ");
float p1,p2,p3;
scanf ("%f%f%f",&p1,&p2,&p3);
printf ("Ingrese 3 cantidades de productos ");
float c1,c2,c3;
scanf ("%f%f%f",&c1,&c2,&c3);
float G,H,I,J,X;
G=(p1*c1);
H=(p2*c2);
I=(p3*c3);
printf ("El valor del primer producto es %2.f \n",G);
printf ("El valor del segundoi producto es %2.f \n",H);
printf ("El valor del tercer producto es %2.f \n",I);
J=G+H+I;
printf ("El valor a pagar es %2.f \n",J);
X=J*0.95;
printf ("El descuento es%2.f \n",X);
system ("pause");
return 0;
}

