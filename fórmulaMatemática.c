#include <stdio.h>
/*
Rita Villalba Roncal 
Grupo: Q103

Dscripci�n: C�lculo de n�mero de moles conociendo la cantidad y la masa de la mol�cula.
*/


int main()
{
	float numeromoles;
	float cantidad;
	float masamolar;
	
	printf ("Introduzca cantidad de la molecula (g): \n");
	scanf ("%f", &cantidad);
	printf ("Intrduzca masa molar (g/mol):\n ");
	scanf ("%f", &masamolar);
	
	numeromoles = cantidad / masamolar;
	printf("El numero de moles es: %.2f (moles)", numeromoles);
}
