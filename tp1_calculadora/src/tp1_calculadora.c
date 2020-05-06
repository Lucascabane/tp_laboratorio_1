/*
 ============================================================================
 Name        : tp1_calculadora.c
 Author      : Lucas Cabane
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


int main(void) {

	int num1;
	int num2;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;
	int opcion;
	int resulSuma;
	int resulResta;
	int resulMultiplicacion;
	float resulDivision;
	long long int resulFact1;
	long long int resulFact2;



	do{
		system("cls");

		menu(num1, num2, flag1, flag2, flag3, flag4, resulSuma, resulResta, resulMultiplicacion, resulDivision, resulFact1, resulFact2); //llamo al menu y luego pido al user que elija una opcion:

		printf("Elija una opcion: ");

		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:

				opcion1(&flag1, &num1);
				break;

			case 2:

				opcion2(flag1, &flag2, &num2);
				break;

			case 3:

				opcion3(flag1, flag2, &flag3, num1, num2, &resulSuma, &resulResta, &resulMultiplicacion, &resulDivision, &resulFact1, &resulFact2);
				break;

			case 4:

				opcion4(flag1, flag2, flag3, &flag4);
				break;

			case 5:

				printf("Adios! \n\n");
				system("pause");
				break;

			default:

				printf("No es una opcion valida. \n");
				break;

		}


	}while(opcion != 5);


	return 0;
}
