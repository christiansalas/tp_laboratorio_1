
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>



/** \brief Funcion que retorna la suma del los numerosingresado por el usuario
 *
 * \param operando1 es el primer numero que ingresa el usuario.-
 * \param operando2 es el segundo numero ingresado por el usuario.-
 * \return devuelve el resultado de la suma de los dos numeros ingresados por el usuario.-
 *
 */

float getSuma (float operando1, float operando2)
{
    return  operando1+operando2;
}


/** \brief Funcion que retorna la resta de los dos numeros ingresados por el usuario.-
 *
 * \param operando1 es el primer numero que ingresa el usuario.-
 * \param operando2 es el segundo numero ingresado por el usuario.-
 * \return devuelve el resultado de la resta de los dos numeros ingresados por el usuario.-
 *
 */

float getResta (float operando1, float operando2)
{
    return  operando1-operando2;
}
/** \brief Funcion que retorna la division de los dos numeros ingresados por el usuario.-
 *
 * \param operando1 es el primer numero que ingresa el usuario.-
 * \param operando2 es el segundo numero ingresado por el usuario.-
 * \return devuelve el resultado de la division de los dos numeros ingresados por el usuario.-
 *
 */

float getDivision(float operando1, float operando2)
{
   return   operando1/operando2;
}
/** \brief Funcion que retorna el producto de los dos numeros ingresados por el usuario.-
 *
 * \param operando1 es el primer numero que ingresa el usuario.-
 * \param operando2 es el segundo numero ingresado por el usuario.-
 * \return devuelve el resultado de la multiplicacion  de los dos numeros ingresados por el usuario.-
 *
 */

float getProducto (float operando1, float operando2)
{
   return  operando1*operando2;
}
/** \brief Funcion que calcula  el factorial de los numeros ingresados por el usuario.-
 *
 * \param operando es el  numero que ingresa el usuario.-

 * \return retorna el resultado del factorial del numero ingresado.
 */

int factorial(int operando)
{
	int respuesta;
	if (operando == 1)
		return 1;
	    respuesta = operando* factorial(operando-1);
	    return respuesta;
}




