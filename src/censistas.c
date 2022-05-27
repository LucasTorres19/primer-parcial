/*
 * censistas.c
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "viviendas.h"

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
		printf("-");
		printf("%s",list[i].nombre);
		printf(" ");
		printf("%d",list[i].edad);
		printf(" años tel:");
		printf("%s",list[i].telefono);
		printf("\n");

}
		printf("\n");
}

void mostrarCencistasConViviendas(censista* listCencistas, int lenCensista , vivienda* listVivienda, int lenVivienda){

	int i,j;

	for(i = 0; i < lenCensista ; i++){

		printf("\n");
		printf("%d",listCencistas[i].legajoCensista);
		printf("-");
		printf("%s",listCencistas[i].nombre);
		printf(" ");
		printf("%d",listCencistas[i].edad);
		printf(" años tel:");
		printf("%s",listCencistas[i].telefono);
		printf("\n");

		for(j = 0; j < lenVivienda;j++){

			if(listVivienda[j].legajoCencista == listCencistas[i].legajoCensista){

				printf("%d",listVivienda[j].id);
				printf(" ");
				printf("%s",listVivienda[j].calle);
				printf(" ");
				printf("%d",listVivienda[j].cantidadHabitaciones);
				printf(" ");
				printf("%d",listVivienda[j].cantidadPersonas);
				printf(" ");

			switch(listVivienda[j].tipoVivienda){

				case 1:
					printf("Casa");
					break;
				case 2:
					printf("Departamento");
					break;
				case 3:
					printf("Casilla");
					break;
				case 4:
					printf("Rancho");
					break;
				}

				printf("\n");

			}
		}
	}
}

void mostrarCencistaConMayorCantidad(censista* listCensista, int lenCensista,vivienda* listVivienda, int lenVivienda){

	int i,j;
	int contadorCensos = 0;
	char nombresMayorCensista[50];
	int cantidadMayorCensista;
	int frag = 0;

	for(i = 0 ; i < lenCensista;i++){

		for(j = 0 ;j < lenVivienda; j++){

			if(listCensista[i].legajoCensista == listVivienda[j].legajoCencista){
				//contamos la cantidad de viviendas del censista.
				contadorCensos++;
			}
		}

		//iniciamos el primer censista como el mayor.
				if(frag == 0){
					cantidadMayorCensista = contadorCensos;
					strcpy(nombresMayorCensista,listCensista[i].nombre);
					//cambiamos la bandera.
					frag = 1;
					contadorCensos = 0;//reiniciamos el contador.
				}
				else{

					//comparamos las cantidades.
					if(contadorCensos > cantidadMayorCensista){
						cantidadMayorCensista = contadorCensos;
						strcpy(nombresMayorCensista,listCensista[i].nombre);
						contadorCensos = 0;//reiniciamos el contador.
					}
					else if(contadorCensos == cantidadMayorCensista){
						strcat(nombresMayorCensista,"-");
						strcat(nombresMayorCensista,listCensista[i].nombre);
						contadorCensos = 0;//reiniciamos el contador.

					}

				}
	}

	//mostrar el o los censistas.

	printf("los censistas que mas censos realizaron fueron: ");
	printf("%s",nombresMayorCensista);
	printf(" con la cantidad de censos realizados de:");
	printf("%d",cantidadMayorCensista);
	printf("\n");
}
