#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int sumar(int num1, int num2, int* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		*pResultado = num1 + num2;
		retorno = 0;
	}


	return retorno;

}

int restar(int num1, int num2, int* pResultado)
{
	int retorno = -1;
	if(pResultado != NULL)
	{
		*pResultado = num1 - num2;
		retorno = 0;
	}

	return retorno;
}

float dividir(int num1, int num2, float* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		*pResultado = (float) num1 / num2;
		retorno = 0;
	}

	return retorno;
}

int multiplicar(int num1, int num2, int* pResultado)
{
	int retorno = -1;

	if(pResultado != NULL)
	{
		*pResultado = num1 * num2;
		retorno = 0;
	}

	return retorno;
}

long long int factorizar(int num, long long int* pResultado)
{
	int retorno = -1;
	long long int resultado = 0;

	if(pResultado != NULL)
	{
		if(num >= 0)
		{
			if (num == 1 || num == 0)
			{
				resultado = 1;
				*pResultado = resultado;
			}
			else
			{
				resultado = num * factorizar(num - 1, &resultado);
				*pResultado = resultado;
			}
		}
		retorno = 0;
	}



		return retorno;

}
