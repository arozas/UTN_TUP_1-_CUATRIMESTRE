/*
 ============================================================================
 Name        : Clase01_Promedio.c
 Author      : Alejandro Rozas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numeroIngresado;
	int acumuladorNumeros;
	int contadorVueltas;
	float promedio;

	contadorVueltas=0;
	acumuladorNumeros=0;

	while(contadorVueltas<5)
	{
		printf("\n Ingrese el número \n");
		scanf("%d", &numeroIngresado);
		acumuladorNumeros=acumuladorNumeros+numeroIngresado;
		contadorVueltas=contadorVueltas+1;
	}

	promedio=(float)acumuladorNumeros/contadorVueltas;

	printf("\n %d", contadorVueltas);
	printf("\n %d", acumuladorNumeros);
	printf("\n El promedio es: \n");
	printf("%f", promedio);

	return EXIT_SUCCESS;
}
