/*
 * censistas.h
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
 *
 *============================================================
 * void initCencistas(censista* list);
 * void mostrarCencistas(censista* list, int len);
 *============================================================
 */

#ifndef CENSISTAS_H_
#define CENSISTAS_H_

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

#endif /* CENSISTAS_H_ */
