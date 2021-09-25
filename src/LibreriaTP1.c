/*
 * LibreriaTP1.c
 *
 *  Created on: Sep 24, 2021
 *      Author: hernan.j.corrado
 */

#include "LibreriaTP1.h"


//Calculamos el factorial
void CalcularFactorial(int array[], int t)
{

	/* Esta funcion se maneja con un While en vez de un FOR, mientras que el factorial sea mayor a 1 (ultimo numero de la multplicacion factorial),
	   va a multiplicar el resultado previo por el actual y en cada pasaje le restamos 1 al resultado inicial, de esta forma podemos obtener el factorial

	  */
	int i;
	 long int Resultado=0;
	 long int Factorial;
	 int numeroIngresado;
	for (i = 0; i < t ; i++)
	{
           numeroIngresado = array[i];
		   Factorial = numeroIngresado;
		    Resultado = 1;
		    while(Factorial > 1) {
		       Resultado *= Factorial;
		      // printf(" %ld x",Factorial);
		       Factorial--;
		    }
		    printf("\n El factorial del numero %d es %ld", numeroIngresado ,Resultado);


	}

}



int MultiplicacionEnteros(int array[], int t)
{
	int i;

		int multiplicacion;
		int flag = 0;


		for (i = 0; i < t; i++)
		{
			//Mediante un flag asignamos el primer numero como valor de la primer multiplacion para luego
			//Multiplcar por el siguiente numero del array, de esta forma si modificamos el tamaño funciona igual
			if (flag == 0)
			{
				multiplicacion = array[i];
				flag = 1;
			}
			else
			{
				multiplicacion = multiplicacion * array[i];
			}


		}

		return multiplicacion;


}

float DivisionEnteros(int array[], int t){


	int i;
   //Declaramos Float en vez de int ya que necesitamos obtener al menos 2 decimales en caso de que el resultado contenga decimales.
	float division;
	int flag = 0;


	for (i = 0; i < t; i++)
	{
		if (flag == 0)
		{
			division = array[i];
			flag = 1;
		}
		else
		{
			division = division / array[i];
		}


	}

	return division;
}

//esta variable verifica si dentro del array hay un 0, de esta manera sabemos que si devuelve 1 la funcion, no hay que dividir porque hay un 0
int VisibilizarCero(int array[], int t)
{

	int i;
	int flag = 0;

	for (i = 0; i < t; i++)
	{

		if (array[i] == 0)
		{

			flag = 1;
		}
	}

	return flag;
}

//Esta variable fue generada por si en algun momento necesitamos dividir por el ultimo valor


void UltimoItem(int array[], int t, int* ultimo)
{


	int ultimoNumero;
	int final;
    ultimoNumero = t - 1;

    final = array[ultimoNumero];

     *ultimo = final;





}


//Funcion que resta los enteros a medida que se vayan ingresando
int RestaEnteros (int array[], int t){

	int i;
	int resta;
	int flag = 0;

	for (i = 0; i < t ; i++)
	{
		if (flag == 0)
		{
			resta = array[i];
			flag = 1;
		}

		else{


			resta -= array[i];
		}


	}


	return resta;
}



int SumarEnteros (int array[], int t)
{
	int i;
	int suma = 0;

	for (i = 0; i<t; i++)
	{
		suma += array[i];
	}

	return suma;
}

void PedirEntero (int array[], int t){

	 int i;


		for (i = 0 ; i<t; i++)
		{

			printf("Ingrese un numero ");
			scanf("%d", &array[i]);



		}



	}


//Mostramos en pantalla los numeros
void OrdenNumeros (int array[], int t){

	int i;
	int flag = 0;
	int posicion = 0;
	int realPosicion = 0;

	for (i = 0; i < t; i++)
	{

		if (flag == 0)
		{
		 printf("\n El 1 numero ingresado es: %d " , array[0]);
		 flag = 1;

		}
		else
		{

			posicion++;


			realPosicion = posicion + 1;

			printf("\n El numero  %d ingresado es: %d" , realPosicion , array[posicion]);

		}

	}


}



