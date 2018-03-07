//Realize un programa que perimita el ingreso de cuatro numeros.Si el primer numero es positivo presente la suma del tercer y cuarto numero.Si la suma del segundo y el tercer numero es un numero impar presente la multiplicacion del primero con el cuarto
#include <stdio.h>
int main ()
{
	printf ("Ingrese cuatro numeros \n");
	int n1,n2,n3,n4;
	int X,Y,W,Z;
	scanf ("%i\n",&n1);
	scanf ("%i\n",&n2);
	scanf ("%i\n",&n3);
	scanf ("%i",&n4);
	if (n1>0) 
	{
	X=n3+n4;
	printf ("%i\n",X);}
	Y=n2+n3;
	W=Y%2; 	
	if (W!=0) {
	Z=n1*n4;
	printf ("%i\n",Z);}
	system ("pause"); 
	return 0;
}
		
