#include <stdio.h>
/*
Autor: Alonso S�nchez Garc�a
Grupo: Q103
Descripci�n: Este programa te calcula el area de un Octoedro
*/
 
int main(){
	float largo, ancho, altura, area; // m, m, m, m^2
	
	
	printf("�CALCULADORA DE AREAS DE OCTAEDROS!:\n");
	
	printf("Introduzca el largo de su Octaedro (en metros):\n");
	
	scanf("%f", &largo);
	
	printf("Introduzca el ancho de su Octaedro(en metros):\n");
	
	scanf("%f", &ancho);
	
	printf("Introduzca la altura de su Octaedro(en metros):\n");
	
	scanf("%f", &altura);
	
	
	
	area= 2*((largo*ancho)+(largo*altura)+(ancho*altura));
	
	printf("El area del octaedro es: %f m^2", area);
	
	return 0;
	
}
