/* AUTOR: JAVIER GARC�S
GRUPO: Q103
DESCRIPCI�N: �ste programa imprime el per�metro y el �rea de una circunferencia.
*/





#include <stdio.h>





int main ()
{
	const float pi = 3.1415f;
	
	float radio, perimetro, area;
	
	printf("Introduzca el radio del circulo: ");
	scanf("%f",&radio);
	
	perimetro = 2*pi*radio;
	
	area = pi*radio*radio;
	
	printf("El perimetro es = %f y el area es = %f",perimetro, area);
}
