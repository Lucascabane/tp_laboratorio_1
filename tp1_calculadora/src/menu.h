#ifndef MENU_H_
#define MENUO_H_


/**
 * @brief  Pausa el printf.
 *
 * @return void
 *
 */



void pause();

/**
 *@brief  Menu actualizado cada vez que se activen flags.
 *
 *@param numero 1
 *@param numero 2
 *@param flag opcion 1
 *@param flag opcion 2
 *@param flag opcion 3
 *@param flag opcion 4
 *@param resultado suma
 *@param resultado resta
 *@param resultado multiplicacion
 *@param resultado division
 *@param resultado factorizacion 1
 *@param resultado factorizacion 2
 *
 *@return void
 *
 */




void menu(int num1, int num2, int flag1, int flag2, int flag3, int flag4, int suma, int resta, int multi, float divi, long long int fact1, long long int fact2);


/**
 *@brief  Pide numero y cambia flag1
 *
 *@param puntero a flag opcion1
 *@param puntero al primer numero
 *
 *@return 0 o -1 si no se realiza.
 *
 */




int opcion1(int* pFlag1, int* pNum1);

/**
 *@brief  Pide numero y cambia flag2
 *
 *@param flag opcion 1
 *@param puntero a flag opcion2
 *@param puntero al segundo numero
 *
 *@return 0 o -1 si no se realiza.
 *
 */




int opcion2(int flag1, int* pFlag2, int* pNum2);

/**
 *@brief  Llama a las funciones de operaciones.h y cambia flag3
 *
 *@param flag primera opcion
 *@param flag segunda opcion
 *@param puntero a flag opcion 3
 *@param primer numero
 *@param segundo numero
 *@param puntero a var suma
 *@param puntero a var resta
 *@param puntero a var multiplicacion
 *@param puntero a var division
 *@param puntero a var factorizacion del primer 1
 *@param puntero a var factorizacion del segundo 2
 *
 *@return 0 o -1 si no se realiza.
 *
 */




int opcion3(int flag1, int flag2, int* pFlag3, int numero1, int numero2, int* pSuma, int* pResta, int* pMulti, float* pDivi, long long int* pFact1, long long int* pFact2);

/**
 *@brief  reemplaza flag 4 y se muestran resultados en el menu
 *
 *@param flag primer opcion
 *@param bandera de la opcion2
 *@param bandera de la opcion2
 *@param puntero a la bandera de la opcion4
 *
 *@return 0 si la funcion se realiza con exito, o -1 si no lo hace
 *
 */




int opcion4(int flag1, int flag2, int flag3, int* pFlag4);


#endif /* MENUOPCIONES_H_ */
