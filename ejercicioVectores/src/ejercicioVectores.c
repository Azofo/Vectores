/*
 ============================================================================
 Name        : ejerciciosVectores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "vectores.h"
#define TAM 30

int main(void) {

	int longitud,lim,elige,marca;
	float low,high;
	int vectorE [TAM];
	float vectorF [TAM];

	do{
		printf("\nElige una opción (1-11, 0 para salir)\n");

		do {
		fflush(stdout);
		scanf("%d",&elige);
		}while (elige < 1 || elige > 11);

	switch(elige){

	case 1:

		/* En este caso, rellenamos un vector de longitud determinada por consola*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);

	break;

	case 2:

		/*En este caso, muestra los elementos menores al alemento seleccionado,
		 *  por consola, en el vector*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		puts("Ingresa el valor para mostrar los menores existentes en el vector\n");
		mostrar_menor(vectorE,longitud,lim); /*Función principal del caso*/

	break;

	case 3:

	/*En este caso, muestra los elementos del vector comprendidos entre el intervalo seleccionado*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorF(vectorF,longitud);
		puts("Ingresa el límite inferior\n");
		fflush(stdout);
		scanf("%f",&low);
		puts("Ingresa el límite inferior\n");
		fflush(stdout);
		scanf("%f",&high);
		mostrar_intervalo_vector(vectorF,longitud,low,high); /*Función principal del caso*/

	break;

	case 4:

		/*En este caso, rotamos el primer elemento del vector al final del mismo*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		puts("Vector original\n");
		mostrar_vectorE(vectorE,longitud);  /*Vector original*/
		rotar_izq_vector(vectorE,longitud); /*Función principal del caso*/
		puts("\nVector rotado\n");
		mostrar_vectorE(vectorE,longitud);  /*Vector rotado*/

	break;

	case 5:

		/*En este caso, rotamos el último elemento al principio del vector */

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		puts("Vector original\n");
		mostrar_vectorE(vectorE,longitud);  /*Vector original*/
		rotar_der_vector(vectorE,longitud); /*Función principal del caso*/
		puts("\nVector rotado\n");
		mostrar_vectorE(vectorE,longitud);  /*Vector rotado*/

	break;

	case 6:

		/*En este caso, devolvemos el 1º elemento mayor que "marca" y,
		 *  a partir de él, el resto de elementos del vector*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		puts("Elige el valor \"bandera\" para mostrar los elementos correspondientes\n");
		fflush(stdout);
		scanf("%d",&marca);
		mostrar_Primero_Vector(vectorE,longitud, marca); /*Función principal del caso*/


	break;

	case 7:

	break;

	default:

	break;


	}

	}while (elige != 0);

	return EXIT_SUCCESS;
}
