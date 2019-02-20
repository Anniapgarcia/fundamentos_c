/* Autora: Laura �beda
Grupo: Q103 
Descripci�n: Este programa calcula la presi�n de un gas ideal a partir del volumen, temperatura y n�mero de moles con la ecuaci�n de los gases ideales.*/

#include <stdio.h>

int main(){
	const float R = 0.08205746;
	
	float presion, volumen, moles, temperatura; 

	printf("CALCULADORA DE LA PRESI�N DE UN GAS IDEAL\n");
	printf("Introduce el volumen del gas (en litros)\n");
	scanf("%f", &volumen);
	printf("Introduce el numero de moles\n");
	scanf("%f", &moles);
	printf("Introduce la temperatura (en kelvin)\n");
	scanf("%f", &temperatura);

presion = (moles*R*temperatura)/volumen;

printf("La presion del gas es de %f atm.\n", presion);	
	
	return 0;
}
	
