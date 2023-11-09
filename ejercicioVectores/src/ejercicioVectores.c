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

	int longitud;
	int vectorE [TAM];
	//float vectorF [TAM];

	puts("Dame longitud");
	longitud=longitud_vector(TAM);
	pedir_vectorE(vectorE, longitud);
	rotar_der_vector(vectorE, longitud);
	mostrar_vectorE(vectorE, longitud);

	return EXIT_SUCCESS;
}
