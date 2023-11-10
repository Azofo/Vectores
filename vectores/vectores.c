/*
 * vectores.c
 *
 *  Created on: 2 nov 2023
 *      Author: antonio
 */
#include <stdio.h>
#include <time.h>


int longitud_vector(int tam){

	int num;

	do{

		printf("\nIndica el número de elementos del vector:");
		fflush(stdout);
		scanf("%d",&num);

	}while(num<=0 || num>=tam);

	return num;
}

void pedir_vectorE(int vector[], int tam){

	int i;
	for(i=0; i < tam; ++i){
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%d", &vector[i]);
	}
}

void mostrar_vectorE(int vector[], int tam){

	int i;
	for(i=0; i < tam ; ++i){
		printf("%d\t", vector[i]);
	}
}

void pedir_vectorF(float vector[], int tam){

	int i;
	for(i=0; i < tam; ++i){
		printf("Introduce el elemento %d: ",i+1);
		fflush(stdout);
		scanf("%f", &vector[i]);
	}
}

void mostrar_vectorF(float vector[], int tam){

	int i;
	for(i=0; i < tam ; ++i){
		printf("%.2f\t", vector[i]);
	}
}

float media_vector(int vector[], int tam){

	int i;
	float media=0;
	for(i=0; i < tam ; ++i){
		media+=vector[i];
	}
	return (media/tam);
}

void mostrar_menor(int vector[],int tam,int lim){
	int i;
	for(i=0;i < tam; ++i){
		if (vector[i] < lim){
			printf("%d\t", vector[i]);
		}
	}
}

void mostrar_intervalo_vector(float vector[],int tam, float low, float high){
	int i;
	for(i=0;i < tam;i++){
		if (vector[i]>=low && vector[i]<=high){
			printf("%.2f \t",vector[i]);
		}
	}
}

void rotar_izq_vector(int vector[],int tam){
	int i,aux;
	aux = vector[0];
	for(i=1;i<tam;i++){

		vector[i-1]=vector[i];

		}
	vector[tam-1]=aux;
}

void rotar_der_vector(int vector[],int tam){

	int i,aux;

	aux = vector[tam-1];

	for(i=tam-2;i>=0;i--){

			vector[i+1]=vector[i];

		}
	vector[0]=aux;
}

void mostrar_Primero_Vector(int vector[],int tam, int marca){

	int i;

	for (i=0;i<tam;i++){
		if (marca == vector[i]){
			marca = vector[i+1];
			printf("%d",vector[i]);
		}
	}

}

int proporcional(float vector[], float vector2[], int tam){
	int i;
	float aux=0;
	aux=(vector[0]/vector2[0]);
	for(i=1;i<tam;i++){
		if ((vector[i]/vector2[i]) != aux){
			return 0;
		}
	}
	return 1;
}

void generarF(float vector[], int tam){
	int i;
	srand(time(NULL));
	for(i = 0; i<tam;i++){
		vector[i] = (rand() % 8000) / 1000.0f;
	}
}

void generarE(int vector[], int tam){
	int i;
	srand(time(NULL));
	for(i = 0; i<tam;i++){
		vector[i] = (rand() % 101);
	}
}

