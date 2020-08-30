/*
 ============================================================================
 Name        : Ejercicio #001 - Clase 2
 Author      : Christian Silvero
Ejercicio:
     Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.
 ============================================================================

 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int i;
	int numero;
	int acumulador = 0;
	float promedio;
	int maximo;
	int minimo;

	for(i=0; i<5; i++)
	{
		printf("Indique un numero: ");
		__fpurge(stdin);
		scanf("%d", &numero);
		if(i == 0)
		{
			minimo = numero;
			maximo = numero;
		}
		else
		{
			if(numero < minimo)
			{
				minimo = numero;
			}
			if(numero > maximo)
			{
				maximo = numero;
			}
		}
		acumulador = acumulador + numero;
	}
	promedio = (float)acumulador / i;
	printf("El promedio es: %.2f\n", promedio);
	printf("El maximo es: %d\n", maximo);
	printf("El minimo es: %d", minimo);

	return EXIT_SUCCESS;
}
