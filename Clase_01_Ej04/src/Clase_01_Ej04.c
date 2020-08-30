/*
 ============================================================================
 Name        : Ejercicio #004
 Author      : Christian Silvero
Escribir un programa que realice las siguientes acciones:
    - Solicite al usuario 10 números
    - Calcule cuántos son negativos y cuantos son positivos
    - Muestre por pantalla la cantidad de negativos y la cantidad de positivos
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int i;
	int numero;
	int contadorNegativos = 0;
	int contadorPositivos = 0;

	for(i=0; i<10; i++)
	{
		printf("Ingrese un numero: ");
		__fpurge(stdin);
		scanf("%d", &numero);
		if(numero < 0)
		{
			contadorNegativos++;
		}
		else
		{
			if(numero > 0)
			{
				contadorPositivos++;
			}
		}
	}

	printf("La cantidad de negativos es: %d\n", contadorNegativos);
	printf("La cantidad de positivos es: %d", contadorPositivos);

	return EXIT_SUCCESS;
}
