/*
 ============================================================================
 Name        : Clase_01.c
 Author      : Christian Silvero
 *pedir 5 numeros y sacar el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int i;
	int numero;
	float promedio;
	int acumulador = 0;

	for(i=0; i<5; i++)
	{
		printf("dime un numero: ");
		__fpurge(stdin);
		scanf("%d", &numero);
		acumulador = acumulador + numero;
	}
	promedio = (float)acumulador / i;
	printf("El promedio es: %f", promedio);

	return EXIT_SUCCESS;
}
