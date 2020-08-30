/*
 ============================================================================
 Name        : Ejercicio #002
 Author      : Christian Silvero
Remplazar los ' ? ' al siguiente programa [DESCARGAR], para lograr la siguiente funcionalidad.

    - Limpie la pantalla
    - Asigne a las variables numero1 y numero2 los valores obtenidos
    - Realice la resta de dichas variables
    - Muestre el resultado por pantalla
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero1;
	int numero2;
	int resta;

	printf("Indique el numero 1: ");
	scanf("%d", &numero1);
	printf("Indique el numero 2: ");
	scanf("%d", &numero2);

	resta = numero1 - numero2;

	printf("La resta de ambos numeros es: %d", resta);

	return EXIT_SUCCESS;
}
