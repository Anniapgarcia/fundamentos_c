/*
Autor: H�ctor Dom�nguez Mora
Grupo:Q103
Descripci�n:Formula mrua
*/

#include <stdio.h>


int main()


{
const float aceleracion = 9.98;
float velocidad_inicial;
float tiempo;
float velocidad_final;

printf("Introduzca velocidad_incial(m/s): ");
scanf("%f", &velocidad_inicial);
printf("Introduzca el tiempo(s): ");
scanf("%f", &tiempo);

velocidad_final = velocidad_inicial + (aceleracion * tiempo);
printf("La velocidad_final es: %.2f (m/s)", velocidad_final);
}
