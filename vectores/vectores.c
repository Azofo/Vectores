/*
 * vectores.c
 *
 *  Created on: 2 nov 2023
 *      Author: antonio
 */
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>



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
	puts("");
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
	puts("");
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

int capicua(int vector[],int tam){
	int i;
	for(i=0;i<tam;i++){
		if(vector[i]!=vector[tam-i-1]){
			return 0;
		}
	}
	return 1;
}

void inverso(int vector[],int vector2[],int tam){
	int i;
	for(i=0;i<tam;i++){
		vector2[tam-i-1]=vector[i];
	}
}

void concatenar(int vector[], int vector2[], int vector3[], int tam, int tam2){
	int i,aux=0;
	for(i=0;i<tam;i++){
		vector3[i]=vector[i];
		aux++;
	}
	for(i=0;i<tam2;i++){
		vector3[aux+i]=vector2[i];
	}
}

void sumaVectores(int vector[], int vector2[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("%d\t",vector[i]+vector2[i]);
	}
	puts("");
}

void pedir_vectorC(char vector[], int tam){

		fflush(stdout);
		scanf("%s", vector);
}

void mostrar_vectorC(char vector[], int tam){

	int i;
	for(i=0; i < tam ; ++i){
		printf("%C", vector[i]);
	}
	puts("");
}

void calcularDNI(char vector[],int tam){
	char digitoDNI[]="TRWAGMYFPDXBNJZSQVHLCKE";
	char aux[8];
	char letra;
	int i,numero,DNI;
	for(i=0;i<(tam-1);i++){
		letra = vector[i];
		if (isdigit(letra)){
			aux[i]=vector[i];
		}else{
			puts("\nEl DNI es incorrecto\n");
			break;
		}
	}
	DNI = atoi(aux);
	numero = DNI%23;
	if (vector[tam-1] == digitoDNI[numero]){
		printf("\nNIF correcto: %s. DNI correcto: %d.\n",vector,DNI);
	}else{\n
		puts("\nEl DNI es incorrecto\n");
	}

}




