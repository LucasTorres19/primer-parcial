/*
 ============================================================================
 Name        : primerParcial.c
 Author      : Lucas Torres
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "viviendas.h"
#include "censistas.h"
#include "extraFunctions.h"

int main(void) {

	setbuf(stdout,NULL);

	//variables.
	int menu = 0;//variable utilizada para finalizar el programa.
	int fragViviendas = 0;
	int opcionElejida = 0;

	//variables auxiliares para vivienda.
	char calle[25];
	int cantidadPersonas = 0;
	int cantidadHabitaciones = 0;
	int tipoVivienda = 0;
	int legajoCensista = 0;
	int id;
	int validarId;
	//iniciar estructuras.

	int largoViviendas = 20;
	vivienda viviendas[largoViviendas];

	int LargoCensistas = 3;
	censista censistas[LargoCensistas];


	//bucle del programa.

	printf("CENSO NACIONAL 2022 \n");

	do{

		if(fragViviendas == 0){//todavia no existe ninguna vivienda.

			initViviendas(viviendas,largoViviendas); // iniciar viviendas.
			initCencistas(censistas);

			//verificar opcion ingresada.
			printf("1.Ingresar Vivienda.\n"
					   "2.Lista Censistas.\n"
					   "3.Salir.\n"
			);

			getInt(&opcionElejida,"ingrese una opcion:","Error. ingrese nuevamente la opcion.\n",1,3);

			//menu.
			switch(opcionElejida){

			case 1://agregar vivienda.

			    //pedir datos.
				getString(calle,"Ingrese la calle de la vivienda:\n","Error:ingrese nuevamente la calle.\n");
				getInt(&cantidadPersonas,"ingrese la cantidad de personas:","Error. ingrese nuevamente la cantidad.\n",1,1000);
				getInt(&cantidadHabitaciones,"ingrese la cantidad de Habitaciones:","Error. ingrese nuevamente la cantidad.\n",1,1000);
				getInt(&tipoVivienda,"ingrese el tipo de vivienda(1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO):","Error. ingrese nuevamente el tipo de vivienda.\n",1,4);
				getInt(&legajoCensista,"ingrese el nro. legajo del censista:","Error. ingrese nuevamente el nro de legajo.\n",100,102);

				//ingresar vivienda.
				addVivienda(viviendas,largoViviendas,calle,cantidadPersonas,cantidadHabitaciones,tipoVivienda,legajoCensista);

				fragViviendas = 1;//cambiar la bandera para agregar las demas opciones al menu,
				break;

			case 2://lista censistas.
				mostrarCencistas(censistas , LargoCensistas);
				break;

			case 3://Salir de programa.
				menu = 1;
				break;
			}


		}


		else{//ya existen viviendas.


						//verificar opcion ingresada.
						printf("\n1.Ingresar Vivienda.\n"
								"2.Modificar Vivienda.\n"
								"3.Borrar vivienda.\n"
								"4.Listar vivienda.\n"
								"5.Lista Censistas.\n"
								"6.Salir.\n"
						);

						getInt(&opcionElejida,"ingrese una opcion:","Error. ingrese nuevamente la opcion.\n",1,6);

						//menu.
						switch(opcionElejida){

						case 1://agregar vivienda.

						    //pedir datos.
							getString(calle,"Ingrese la calle de la vivienda:\n","Error:ingrese nuevamente la calle.\n");
							getInt(&cantidadPersonas,"ingrese la cantidad de personas:","Error. ingrese nuevamente la cantidad.\n",1,1000);
							getInt(&cantidadHabitaciones,"ingrese la cantidad de Habitaciones:","Error. ingrese nuevamente la cantidad.\n",1,1000);
							getInt(&tipoVivienda,"ingrese el tipo de vivienda(1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO):","Error. ingrese nuevamente el tipo de vivienda.\n",1,4);
							getInt(&legajoCensista,"ingrese el nro. legajo del censista:","Error. ingrese nuevamente el nro de legajo.\n",100,102);

							//ingresar vivienda.
							addVivienda(viviendas,largoViviendas,calle,cantidadPersonas,cantidadHabitaciones,tipoVivienda,legajoCensista);

							fragViviendas = 1;//cambiar la bandera para agregar las demas opciones al menu,
							break;

						case 2://modificar vivienda.

							getInt(&id,"ingrese el nro. de id de la vivienda a modificar:","Error. ingrese nuevamente el nro de id.\n",20000,99999);

							validarId = findViviendaById(viviendas,largoViviendas,id);

							if(validarId != -1){

								printf("Modificando la vivienda con la id:");
								printf("%d",id);
								printf("\n");

								getString(calle,"Ingrese la calle de la vivienda:\n","Error:ingrese nuevamente la calle.\n");
								getInt(&cantidadPersonas,"ingrese la cantidad de personas:","Error. ingrese nuevamente la cantidad.\n",1,1000);
								getInt(&cantidadHabitaciones,"ingrese la cantidad de Habitaciones:","Error. ingrese nuevamente la cantidad.\n",1,1000);
								getInt(&tipoVivienda,"ingrese el tipo de vivienda(1.CASA – 2.DEPARTAMENTO – 3.CASILLA - 4.RANCHO):","Error. ingrese nuevamente el tipo de vivienda.\n",1,4);

								modificarVivienda(validarId,viviendas,largoViviendas,calle,cantidadPersonas,cantidadHabitaciones,tipoVivienda);


							}else{
								printf("Id ingresada no encontrada.\n");
							}

							break;
						case 3://borrar vivienda.

							getInt(&id,"ingrese el nro. de id de la vivienda a borrar:","Error. ingrese nuevamente el nro de id.\n",20000,99999);

							validarId = findViviendaById(viviendas,largoViviendas,id);

							if(validarId != -1){

								removeVivienda(viviendas,largoViviendas,id);

							}else{
								printf("Id ingresada no encontrada.\n");
							}

							break;
						case 4: //listar viviendas.

							OrdenarViviendasPorCalle(viviendas , largoViviendas);
							printVivienda(viviendas, largoViviendas);
							break;
						case 5://lista censistas.
							mostrarCencistas(censistas , LargoCensistas);
							break;
						case 6://Salir de programa.
							menu = 1;
							break;

						}
		}


	}while(menu == 0);


	return EXIT_SUCCESS;
}
