/*
 * vectores.h
 *
 *  Created on: 2 nov 2023
 *      Author: antonio
 */

#ifndef VECTORES_H_
#define VECTORES_H_


int longitud_vector(int tam);
/*Procedimiento que pide un vector por tclado*/
void pedir_vectorE(int vector[], int tam);
void mostrar_vectorE(int vector[], int tam);
void pedir_vectorF(float vector[], int tam);
void mostrar_vectorF(float vector[], int tam);
float media_vector(int vector[], int tam);
void mostrar_menor(int vector[],int tam,int lim);
void mostrar_intervalo_vector(float vector[],int tam, float low, float high);
void rotar_izq_vector(int vector[],int tam);
void rotar_der_vector(int vector[],int tam);
void mostrar_Primero_Vector(int vector[],int tam, int marca);


#endif /* VECTORES_H_ */
