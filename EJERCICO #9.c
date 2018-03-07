// Realize un programa que permita el ingreso de una hora actual, sus minutos y segundos. Ademas que devuelva por pangtalla la hora dentro de un segundo
#include <stdio.h> 
int main ()
{
	printf ("Ingrese su hora actual \n");
	int H;
	scanf ("%i",&H);
	printf ("Ingrese los minutos \n");
	int M;
	scanf ("%i",&M);
	printf ("Ingrese los segundos\n  ");
	int S;
	scanf ("%i",&S);
	int S2,M2,B,H2;
	B=0;
	if (S==59) {
	scanf ("%i",&S); 
	M2=M+1; 
	printf ("Los minutos actuales son %i",H,M2,S); }
	else {
	S2=S+1; 
	printf ("Los segundos actuales son %i",H,M,S2); }
	if (M==59 && S==59) {
	H2=H+1;
	printf ("La hora dentro de un segundo es %i",H2,M2,S2); }
	system ("pause");
	return 0;
}

