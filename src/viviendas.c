/*
 * viviendas.c
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct
{
int id;
char calle[25];
int cantidadPersonas;
int cantidadHabitaciones;
int tipoVivienda;
int legajoCencista;
int isEmpty;

}typedef vivienda;


void initViviendas(vivienda* list, int len){

	for(int i=0 ;i < len;i++){

		list[i].isEmpty = 1;

	}

	fflush(stdin);

	return;
}

void addVivienda(vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda ,int legajoCencista){

	for(int i =0 ; i < len; i++){

		//buscar el primero en la lista con isEmply en 1;
		if(list[i].isEmpty == 1){

			//ingresar los datos.

			list[i].id = 20000 + i;
			strcpy(list[i].calle,calle);
			list[i].cantidadPersonas = cantidadPersonas;
			list[i].cantidadHabitaciones = cantidadHabitaciones;
			list[i].tipoVivienda = tipoVivienda;
			list[i].legajoCencista = legajoCencista;
			list[i].isEmpty = 0;

			printf("Vivienda agregada con exito.\n");
			break;

		}
	}

	return;
}


int findViviendaById(vivienda* list, int len,int id){

	for(int i = 0; i < len ; i++){

		if(list[i].id == id){

			return i;
		}
	}
	return -1;

}


void removeVivienda(vivienda* list, int len, int id){

	for(int i = 0; i < len ; i++){

				if(list[i].id == id){

					list[i].isEmpty = 1;

					printf("Vivienda eliminada con exito.\n");
				}
			}
}

void modificarVivienda(int pos,vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda ,int legajoCencista){

	for(int i =0 ; i < len; i++){

					if(i == pos){

						//ingresar los datos.
						strcpy(list[i].calle,calle);
						list[i].cantidadPersonas = cantidadPersonas;
						list[i].cantidadHabitaciones = cantidadHabitaciones;
						list[i].tipoVivienda = tipoVivienda;

						printf("vivienda modificada con exito.\n");
						break;

				}
			}

}
