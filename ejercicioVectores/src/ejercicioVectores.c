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
#include <unistd.h>
#include "vectores.h"
#define TAM 30

int main(void) {

	int longitud,longitud2,lim,elige,marca;
	float low,high;
	int vectorE [TAM];
	int vectorE2 [TAM];
	float vectorF[TAM];
	float vectorF2 [TAM];
	int vectorDoble[60];

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
		generarE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);

	break;

	case 2:

		/*En este caso, muestra los elementos menores al alemento seleccionado,
		 *  por consola, en el vector*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		generarE(vectorE,longitud);
		puts("Ingresa el valor para mostrar los menores existentes en el vector\n");
		mostrar_menor(vectorE,longitud,lim); /*Función principal del caso*/

	break;

	case 3:

	/*En este caso, muestra los elementos del vector comprendidos entre el intervalo seleccionado*/

		puts("Rellena un vector de reales con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		generarF(vectorF, longitud);
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
		generarE(vectorE,longitud);
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
		generarE(vectorF, longitud);
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
		generarE(vectorE,longitud);
		puts("Elige el valor \"bandera\" para mostrar los elementos correspondientes\n");
		fflush(stdout);
		scanf("%d",&marca);
		mostrar_Primero_Vector(vectorE,longitud, marca); /*Función principal del caso*/


	break;

	case 7:

		/*En este caso, vamos a comparar dos vectores de reales para saber si son proporcionales*/

		puts("Rellena un vector con la longitud deseada\n");
		longitud = longitud_vector(TAM);
		pedir_vectorF(vectorF,longitud);
		pedir_vectorF(vectorF2,longitud);
		mostrar_vectorF(vectorF,longitud);
		mostrar_vectorF(vectorF2,longitud);
		if(proporcional(vectorF,vectorF2,longitud)){
			puts("Son proporcionales\n");
		}else{
			puts("No son proporcionales\n");
		}

	break;

	case 8:

		/*En este caso, comprobamos si el vector es capicúa*/

		puts("Vamos a ver si es capícua el vector\n");
		longitud = longitud_vector(TAM);
		pedir_vectorE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);
		if(capicua(vectorE,longitud)){
			puts("Es capicúa\n");
		}else{
			puts("No es capicúa\n");
		}

	break;

	case 9:

		/*En este caso, vamos a copiar un vector, de forma inversa, en otro vector de igual tamaño*/

		puts("Vamos a copiar a la inversa un vector en otro\n");
		longitud = longitud_vector(TAM);
		generarE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);
   inverso(vectorE,vectorE2,longitud);
   mostrar_vectorE(vectorE2,longitud);

	break;

	case 10:

		/*En este caso, vamos a concatenar dos vectores, con longitud N y M, en otro vector
		 * con longitud N+M*/
		puts("Longitud de 1º vector (hasta 30)\n");
		longitud = longitud_vector(TAM);
		generarE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);
		puts("Longitud de 2º vector (hasta 30)\n");
		longitud2 = longitud_vector(TAM);
		generarE(vectorE2,longitud2);
		mostrar_vectorE(vectorE2,longitud2);
		concatenar(vectorE,vectorE2,vectorDoble,longitud,longitud2);
		mostrar_vectorE(vectorDoble,longitud+longitud2);

	break;

	case 11:

		puts("Longitud  (hasta 30)\n");
		longitud = longitud_vector(TAM);
		generarE(vectorE,longitud);
		mostrar_vectorE(vectorE,longitud);
		sleep(3);
		generarE(vectorE2,longitud);
		mostrar_vectorE(vectorE2,longitud);
		sumaVectores(vectorE,vectorE2,longitud);

	break;

	default:

		return 0;

	break;


	}

	}while (elige != 0);

	return EXIT_SUCCESS;
}
