// Autora: Sonia Somolinos   N�de matr�cula: 54876

#include <stdio.h>
int main(){
	/* F�rmula velocidad final del MRUA */
	
	float vi, aceleracion, vf; // vi-velocidad inicial, vf-velocidad final
	int tiempo;
	
	printf("Introduzca la velocidad inicial en m/s:\n");
	scanf("%f", &vi);
	printf("Introduzca la aceleraci�n en m/s^2:\n");
	scanf("%f", &aceleracion);
	printf("Introduzca el tiempo en segundos:\n");
	scanf("%d", &tiempo);
	
	vf = vi+(aceleracion*tiempo);
	printf("vf: %f", vf);
	
	return 0;
}


	

