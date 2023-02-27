/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:07:22 by macanald          #+#    #+#             */
/*   Updated: 2023/02/26 19:46:13 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * atoi = "ascii to integer".
			 * 
			 * It takes a string, and returns the integer value of that 
			 * string.
			 * Toma una cadena y devuelve el valor entero de esa cadena.
			 * 
			 * @param str This is the string that we are converting to 
			 * an integer.
			 * Es la cadena que estamos convirtiendo en un entero.
			 * 
			 * @return the integer value of the string.
			 * Devuelve el valor entero de la cadena.
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <stdio.h>
			 * #include <stdlib.h>
			 * */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		++i;
	if (str[i] == '-')
	{
		sign = -1;
		++i;
	}
	else if (str[i] == '+')
		++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		++i;
	}
	return (result * sign);
}

			// 1) Declaro e inicializo tres variables:
			// - `result` es una variable de tipo entero que se utilizará para 
			// almacenar el resultado de la conversión de la cadena a un número
			// entero.
			// - sign` es una variable de tipo entero que se utilizará para 
			// almacenar el signo del número entero que se está convirtiendo 
			// (positivo o negativo).
			// - i` es una variable de tipo entero que se utilizará como índice 
			// para iterar sobre los caracteres de la cadena.
				// `result` se inicializa en 0, ya que aún no se ha convertido 
				// ningún dígito de la cadena a un número entero.
				// `sign` se inicializa en 1, ya que el número por defecto es 
				// positivo. Si se encuentra un signo negativo '-' en la 
				// cadena, se cambiará a -1.
				// `i` se inicializa en 0, que es el índice del primer 
				// carácter de la cadena.

			// 2) El proceso de conversión comienza **ignorando cualquier 
			// espacio en blanco al principio de la cadena** (`' '`, `'\t'`, 
			// '\n'`, `'\v'`, `'\f'` y `'\r'`) utilizando un bucle `while` 
			// para recorrer los caracteres en la cadena.

			// 3) Verifico si el primer carácter es un signo `-` o `+` 
			// y ajusto la variable `sign` en consecuencia. Después, 
			// se recorren los caracteres de la cadena que corresponden 
			// a un número entero y se acumulan en la variable `result`. 

			// 4)El bucle `while` se encarga de convertir los caracteres 
			// numéricos del string `str` en un valor numérico entero. 
			// El bucle se repite mientras los caracteres en `str[i]` 
			// son dígitos numéricos, es decir, caracteres que 
			// representan números enteros del 0 al 9.
				// Dentro del bucle, el valor numérico de cada carácter 
				// se calcula restando el valor ASCII del carácter '0' 
				// al valor ASCII del carácter actual en `str[i]`. 
				// Por ejemplo, si `str[i]` es el carácter '5', 
				// entonces `str[i] - '0'` es igual a 5.

			// El valor numérico total se va construyendo multiplicando 
			// el valor anterior de `result` por 10 y sumándole el valor 
			// numérico del carácter actual. Por ejemplo, si `result` es 23 
			// y el carácter actual es '5', entonces `result` se actualizará 
			// a 235.

			// 5) Finalmente, se devuelve el número entero multiplicado 
			// por el signo adecuado (`1` o `-1`,  dependiendo de si se 
			// encontró un signo negativo o no al principio del string) 
			// y se devuelve como el resultado de la función `ft_atoi`.

// int	main(void)
// {
// 	const char	*str;
// 	int			value;

// 	str = "42";
// 	value = ft_atoi(str);
// 	printf("%d\n", value);
// 	return (0);
// }

			// 1) Declaro un puntero constante 'str' que apunta a la 
			// cadena de caracteres "42". 

			// 2) Llamo a la función 'ft_atoi' pasándole como argumento 
			// el puntero 'str'. El valor de retorno de la función, que es 
			// el resultado de la conversión de la cadena de caracteres en 
			// un valor entero, se almacena en la variable 'value'.

			// 3) Imprimo el valor de 'value' utilizando la función 'printf' 
			// y se devuelve el valor '0' para indicar que el programa ha 
			// finalizado correctamente.
