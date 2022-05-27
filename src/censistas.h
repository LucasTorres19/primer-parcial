/*
 * censistas.h
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 *
 *============================================================
 * void initCencistas(censista* list);
 * void mostrarCencistas(censista* list, int len);
 * void mostrarCencistasConViviendas(censista* listCencistas, int lenCesista , vivienda* listVivienda, int lenVivienda);
 * void mostrarCencistaConMayorCantidad(censista* listCensista, int lenCensista,vivienda* listVivienda, int lenVivienda);
 *============================================================
 */

#ifndef CENSISTAS_H_
#define CENSISTAS_H_
#include "viviendas.h"

struct
{
int legajoCensista;
char nombre[51];
int edad;
char telefono[10];

}typedef censista;

/**
 * \brief Inicia los cenistas con unos datos especificos.
 * \@param list - es la estrutura.
 */
void initCencistas(censista* list);
/**
 * \brief muestra todos los censistas.
 * \@param list - es la estrutura.
 *  \@param len - longitud de la estructura.
 *
 */
void mostrarCencistas(censista* list, int len);
/**
 * \brief lista todo los censistas generando una lista que se puede ver todos sus censos..
 * \@param listCensistas - es la estructura de censistas.
 *  \@param lencensista - longitud de la estructura censistas.
 **  \@param listVivienda - es la estructura de viviendas.
 *  \@param lenVivienda- longitud de la estructura de viviendas.

 */
void mostrarCencistasConViviendas(censista* listCencistas, int lenCesista , vivienda* listVivienda, int lenVivienda);

/**
 * \brief muestra el mayor censista con su nombre y numero de legajo.
 * \@param listCensistas - es la estructura de censistas.
 *  \@param lencensista - longitud de la estructura censistas.
 **  \@param listVivienda - es la estructura de viviendas.
 *  \@param lenVivienda- longitud de la estructura de viviendas.

 */
void mostrarCencistaConMayorCantidad(censista* listCensista, int lenCensista,vivienda* listVivienda, int lenVivienda);

#endif /* CENSISTAS_H_ */
