#include <stdio.h>
int main()
{
	float area, lado,apotema;
	printf("Calculadora de �rea del pentagono regular\n");
	printf("Introduce el valor del lado del pent�gono en cm:\n");
	scanf("%f",&lado);
	
	printf("Introduce el valor del apotema del pent�gono en cm:\n");
	scanf("%f",&apotema);
	
	area=(5*lado*apotema)/(2);
	printf("El �rea del pent�gono con los datos introducidos es el siguiente:%.2f\n",area,lado,apotema);
	return 0;
	
}
