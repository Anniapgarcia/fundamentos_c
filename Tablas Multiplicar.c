//EJERCICIOS PROPUESTOS 3.7		 1�EJERCICIO

/*Realizar un programa que le pida un n�mero entero �n� al usuario,
mostr�ndole las tablas de sumar y de multiplicar de dicho n�mero n, as�
como su cuadrado y su cubo. Una vez mostrado todo esto, volver� a pedir
otro n�mero al usuario, y as� indefinidamente hasta que se pulse ctrl.+C o se
cierre la aplicaci�n. */
#include <stdio.h>
#include <stdlib.h>


int  main()
{
	//Presentacion
	puts ("Realizar un programa que le pida un numero entero 'n' al usuario,\n"
	"mostrandole las tablas de sumar y de multiplicar de dicho numero n, asi\n"
	"como su cuadrado y su cubo. Una vez mostrado todo esto, volvera a pedir\n "
	"otro numero al usuario, y asi indefinidamente hasta que se pulse ctrl.+C o se\n"
	"cierre la aplicacion.\n"
	"-------------------------------------------------------------------------\n");
	
	//Declaracion de variables
	int n,i,j,k;

	//PROGRAMA
	while (1)	//cuando escribimos while (1), el programa solo se cerrara pulsando CTRL.+C
	{
		printf("\nIntroduzca un numero entero:	");
		scanf("%d", &n);
		fflush(stdin);
	
		//suma del numero N
		printf("\nTabla de sumar.\n");
		for(i=0;i<11;i++)
		{
			printf(" %d + %d = %d \n", n,i,n+i);
		}
	
		//multiplicacion del numero N 
		printf("\nTabla de multiplicar.\n");
		for(j=0;j<11;j++)
		{
			printf(" %d * %d = %d \n", n,j,n*j);
		}
	
		//Cuadrado y Cubo del numero N
		printf("\nEl cuadrado del numero %d es:	%d",n,n*n);		
		printf("\nEl cubo del numero %d es:	%d", n, n*n*n);	
		printf("\n");		
	}
	return 0;
}
