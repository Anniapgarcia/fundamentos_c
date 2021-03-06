/*
Autor: Kevin Vejarano Montesinos
Grupo: Q103
Descripcion: Calculo de la presion absoluta a partir de la presion atmosferica y presion manometrica (con densidad y diferencia de altura).
*/

#include<stdio.h>
void main ()
{
	//Valores introducidos con unidades en el sistema internacional
	float pabs, patm, pmanometrica, densidad, altura;
	const float g=9.81;
	printf("Para calcular la presion manometrica introduzca valores de densidad y diferencia de altura en unidades del sistema internacional:\n");
	printf("Densidad: ");
	scanf("%f",&densidad);
	printf("Diferencia de altura: ");
	scanf("%f", &altura);
	pmanometrica=densidad*altura*g;
	printf("La presion manometrica es igual a %.3f Pa\n",pmanometrica);
	printf("Ahora introduzca el valor de la presion atmosferica en pascales: ");
	scanf("%f",&patm);
	pabs=patm+pmanometrica;
	printf("La presion absoluta es igual a %.3f Pa",pabs);
	
}                                                                                                                                                                                                                                                                                                                       
