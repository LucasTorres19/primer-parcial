/*
 * censistas.h
 *
 *  Created on: 26 may. 2022
 *      Author: Lucas Torres
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


void initCencistas(censista* list);
void mostrarCencistas(censista* list, int len);

#endif /* CENSISTAS_H_ */
