/*
 * viviendas.h
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 * ============================================================
void initViviendas(vivienda* list, int len);

int findViviendaById(vivienda* list, int len,int id);

int addVivienda(vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda, int legajoCensista);
void removeVivienda(vivienda* list, int len, int id);
void modificarVivienda(int pos,vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda);

void OrdenarViviendasPorCalle(vivienda* list , int len);
void printVivienda(vivienda* list, int length);

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
/**
 * \brief pone en el compo isEmpty de cada vivienda el numero 1
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 */
void initViviendas(vivienda* list, int len);

/**
 * \brief agrega una vivienda a la estructura.
 * \@param list - es la estrutura.
 *  \@param longitud - de la estructura.
 *  \@param calle - calle donde se ubica la vivienda.
 *  \@param cantidadPersonas.
 *  \@param cantidadHabitaciones.
 *  \@param tipoVivienda - (1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO).
 *	\@param legajoCensista - numero de legajo correspondiente al censista.
 *
 */
int addVivienda(vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda, int legajoCensista);

/**
 * \brief Busca si existe alguna vivienda con una id
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 *  \@param id - id de la vivienda a buscar.
 *
 */
int findViviendaById(vivienda* list, int len,int id);

/**
 * \brief Borra una vivienda de la estructura.
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 *  \@param id - id de la vivienda a buscar.
 *
 */
void removeVivienda(vivienda* list, int len, int id);
/**
 * \brief modifica una vivienda.
 * \@param pos - es la posicion del array que se encuentra la vivienda.
 * \@param list - es la estrutura.
 *  \@param longitud - de la estructura.
 *  \@param calle - calle donde se ubica la vivienda.
 *  \@param cantidadPersonas.
 *  \@param cantidadHabitaciones.
 *  \@param tipoVivienda - (1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO).
 *
 */
void modificarVivienda(int pos,vivienda* list, int len,char calle[],int cantidadPersonas, int cantidadHabitaciones , int tipoVivienda);

/**
 * \brief Ordena las viviendas por orden alfabetico de las calles , si las calles son iguales se ordena por cantidad de personas.
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 *
 */
void OrdenarViviendasPorCalle(vivienda* list , int len);
/**
 * \brief imprime todas la viviendas que esten activas.
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 *
 */
void printVivienda(vivienda* list, int length);

#endif /* VIVIENDAS_H_ */
