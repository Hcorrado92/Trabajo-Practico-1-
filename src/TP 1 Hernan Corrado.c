/*
 ============================================================================
 Name        : TP.c
 Author      : Hernan Corrado
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Este documento expresa una calculadora hecha con diversas funciones.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Llamamos a la libreria
#include "LibreriaTP1.h"


//TAM define el tamaño del array en este caso
#define TAM 2




int main(void) {

	//Declaramos el array
	int array[TAM];
	int hayCero;







	setbuf(stdout, NULL);

	//Pedimos los enteros.
	PedirEntero(array, TAM);


	 printf("\n ================================");
    //Sumamos los enteros e imprimimos el resultado de la funcion SumarEnteros
	printf("\n La suma de los numeros ingresados es: %d", SumarEnteros(array, TAM) );
	//Restamos los enteros e imprimimos el resultado de la funcion RestaEnteros
	printf("\n La resta de los numeros ingresados es : %d", RestaEnteros(array, TAM));
	//printf("\n La division es: %d", DivisionEnteros(array, TAM));
    //printf("\n El ultimo numero es: %d", UltimoItem(array, TAM));
	//UltimoItem(array, TAM, &ultimoNumero);

	//printf("\n El ultimo numero es %d", ultimoNumero);

	//Asignamos el valor de la funcion VisibilizarCero

	hayCero = VisibilizarCero(array, TAM);

	//verificamos que si el resultado de hayCero es 1 entonces hay un 0
	if ( hayCero == 1){

		printf("\n No se puede hacer la division ya que hay un 0");
	}
	else{
		//Caso contratio ejecuta la viriable DivisionEnteros
		printf("\n La division de todos los enteros es %5.2f", DivisionEnteros(array, TAM));
	}

    //Mostramos el numero



	printf("\n La multiplicacion de los numeros es %d", MultiplicacionEnteros(array, TAM));

	CalcularFactorial (array, TAM);
    printf("\n ================================");
	OrdenNumeros(array, TAM);

}










