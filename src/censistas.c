/*
 * censistas.c
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
int legajoCensista;
char nombre[51];
int edad;
char telefono[10];

}typedef censista;


void initCencistas(censista* list){

	list[0].legajoCensista = 100;
	list[1].legajoCensista = 101;
	list[2].legajoCensista = 102;

	strcpy(list[0].nombre,"Ana");
	strcpy(list[1].nombre,"Juan");
	strcpy(list[2].nombre,"Sol");

	list[0].edad = 34;
	list[1].edad = 24;
	list[2].edad = 47;

	strcpy(list[0].telefono,"203-2345");
	strcpy(list[1].telefono,"4301-54687");
	strcpy(list[2].telefono,"5902-37487");

	return;
}

void mostrarCencistas(censista* list, int len){

	printf("\nlista Censistas \n");
	for(int i = 0; i < len; i++){

			printf("%d",list[i].legajoCensista);
			printf(" ");
			printf("%s",list[i].nombre);
			printf(" ");
			printf("%d",list[i].edad);
			printf(" ");
			printf("%s",list[i].telefono);
			printf(" ");

			printf("\n");

}
		printf("\n");
}


