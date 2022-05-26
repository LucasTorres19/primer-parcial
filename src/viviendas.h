/*
 * viviendas.h
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 * ============================================================

* ============================================================
*/

#ifndef VIVIENDAS_H_
#define VIVIENDAS_H_

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

void initViviendas(vivienda* list, int len);
int addVivienda(vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda, int legajoCensista);
int findViviendaById(vivienda* list, int len,int id);
void removeVivienda(vivienda* list, int len, int id);
void modificarVivienda(int pos,vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda);


#endif /* VIVIENDAS_H_ */
