/*
 ============================================================================
 Name        : Clase_01.c
 Author      : Christian Silvero
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//pedir 5 numeros y sacar el promedio.

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int numero;
	int i;
	//float promedio;
	//int acumulador;
	//int respuestaScan;

	//scanf(formato de lo que van a escribir, direccion);

	/*for(i=0; i<5; i++)
	{
		printf("dime un numero: ");
		__fpurge(stdin); //para el scanf, limpia el buffer
		respuestaScan = scanf("%d", &numero);

		while(respuestaScan == 0)
		{
			printf("Error! dime un numero: ");
			__fpurge(stdin); //para el scanf, limpia el buffer
			respuestaScan = scanf("%d", &numero);
		}


		scanf("%d", &numero); //devuelve la cant de variables

		acumulador = acumulador + numero;

	}*/

	//promedio = acumulador / i;

	//printf("El promedio es: %f", promedio);

	for(i=0; i<5; i++)
	{
		printf("dime un numero: ");
		__fpurge(stdin);
		scanf("%d", &numero);
	}




	return EXIT_SUCCESS;
}
