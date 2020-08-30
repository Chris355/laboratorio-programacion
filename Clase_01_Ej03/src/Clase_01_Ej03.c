/*
 ============================================================================
 Name        : Ejercicio #003
 Author      : Christian Silvero
Agregar al programa adjunto la funcionalidad resaltada con un (*)

    - Limpie la pantalla
    - Solicite dos valores numéricos al usuario distintos de cero *
    - Asigne a las variables numero1 y numero2 los valores obtenidos
    - Realice la resta de dichas variables
    - Muestre el resultado por pantalla
    - Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
    - Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void) {
	int numero1;
	int numero2;
	int resultado;
	printf("Indique el primer numero: ");
	__fpurge(stdin);
	scanf("%d", &numero1);
	while(numero1 == 0)
	{
		printf("Error! Indique numero distinto de 0: ");
		__fpurge(stdin);
		scanf("%d", &numero1);
	}
	printf("Indique el segundo numero: ");
	__fpurge(stdin);
	scanf("%d", &numero2);
	while(numero2 == 0)
	{
		printf("Error! Indique numero distinto de 0: ");
		__fpurge(stdin);
		scanf("%d", &numero2);
	}
	resultado = numero1 - numero2;
	printf("La resta de ambos numeros es: %d\n", resultado);
	if(resultado > 0)
	{
		printf("Resultado positivo");
	}
	else
	{
		if(resultado < 0)
		{
			printf("Resultado negativo");
		}
	}
	return EXIT_SUCCESS;
}
