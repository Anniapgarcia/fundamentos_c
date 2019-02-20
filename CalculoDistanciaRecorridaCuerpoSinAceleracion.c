/*
Autora: Mar�a Canga Ortiz
Grupo: Q-103
Descripci�n: Calculo de la distancia que recorre un cuerpo sin aceleraci�n
*/

#include <stdio.h>

int main() {
	float x, x_0, v, t;
	
	printf ("Queremos saber si la distancia recorrida por un cuerpo sin aceleracion es mayor o igual que 5.\n");
	printf ("Introduce el punto inical, la velocidad que lleva y el tiempo que tarda (SI):\n");
	scanf ("%f %f %f", &x_0, &v, &t);
	
	x=x_0+v*t;
	
	printf ("El resultado es: %.2fm\n", x);
	
	x >= 5? printf ("La distancia si es mayor o igual que 5"):printf ("La distancia no es mayor o igual que 5");
}
