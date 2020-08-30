/*
 ============================================================================
 Name        : Repaso_01.c
 Author      : Christian Silvero

Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
	el máximo ingresado
	el mínimo ingresado
	el promedio
	la cantidad de edades ingresadas

Ejercicio 02:
Al ejercicio anterior :
Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
ademas de informar lo anterior ....informar:
la persona mas joven de las casadas
a persona mas Vieja de las solteras
de los estados civiles , cual fue el mas ingresado
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int main(void)
{
	int edad;
	int edadMaxima;
	int edadMinima;
	char respuesta;
	float promedio;
	int acumulador = 0;
	int contador = 0;
	char estadoCivil;

	do
	{
		//ingreso de edades:
		printf("Ingrese edad: ");
		scanf("%d", &edad);
		//consulta para continuar:
		printf("\nDesea continuar? s/n: ");
		__fpurge(stdin);
		scanf("%c", &respuesta);
		//edad maxima y minima:
		if(contador == 0)
		{
			edadMaxima = edad;
			edadMinima = edad;
		}
		else
		{
			if(edad < edadMinima)
			{
				edadMinima = edad;
			}
			else
			{
				if(edad > edadMaxima)
				{
					edadMaxima = edad;
				}
			}
		}
		//ingreso y validación estado civil
		printf("Ingrese estado civil:%c ");
		__fpurge(stdin);
		scanf("%c", &estadoCivil);
		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'd')
		{
			printf("Error! Ingrese estado civil:%c ");
			__fpurge(stdin);
			scanf("%c", &estadoCivil);
		}
		acumulador = acumulador + edad;
		contador++;
	}while(respuesta == 's');

	promedio = (float)acumulador / contador;

	printf("La edad maxima es:%d ", edadMaxima);
	printf("\nLa edad minima es:%d ", edadMinima);
	printf("\nEl promedio es:%.2f ", promedio);
	printf("\nLa cantidad de edades ingresada es:%d ", contador);

	return EXIT_SUCCESS;
}
