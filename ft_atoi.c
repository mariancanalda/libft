/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:07:22 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:02:12 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * atoi = "ascii to integer".
	 * 
	 * It takes a string, and returns the integer value of that string.
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

	// - 'result' almacena el resultado de la conversión de la cadena a un 
	// número entero.
	// - 'sign' almacena el signo del número entero que se está convirtiendo 
	// (+ ó -). Se inicicializa en 1 (si es negativo -1)
	// - 'i' se utilizará como índice para iterar sobre los caracteres 
	// de la cadena. Se inicializa en 0 (primer carácter de la cadena)

	// // while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
	// 	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	// 		++i;
	// Bucle para detectar espacios en blanco. Si el carácter actual 
	// es uno de esos caracteres, se incrementa el valor de "i" para avanzar 
	// al siguiente carácter en la cadena y seguir evaluando. La iteración 
	// se  detiene cuando se encuentra un carácter que no es un espacio en 
	// blanco y el valor final de "i" se utiliza para determinar la longitud 
	// de la cadena resultante sin espacios en blanco.

	// If para determinar si el primer carácter es un signo `-` o `+` 
	// y establecer la variable `sign` en consecuencia. 

	// Bucle `while` para convertir 'str' en un valor numérico entero. 
	// El bucle se repite mientras el caracter actual en la cadena 
	// 'str[i]' sea un dígito numérico (número entero del 0 al 9).

		// El valor numérico de cada carácter se calcula 
		// restando el valor ASCII del carácter '0' al valor ASCII 
		// del carácter actual en `str[i]`. 
		// El valor numérico total se va construyendo multiplicando 
		// el valor de `result` por 10 y sumándole el valor 
		// numérico del carácter actual.

		// Cuando el bucle se ejecuta por primera vez, el valor 
		// de 'result' es 0 e 'i' está en la posición cero de la 
		// cadena (primer caracter). Si el dígito numérico actual 
		// es '1', se le debe sumar el valor de este dígito al 
		// valor actual de "result". El valor de '1' en la tabla 
		// ASCII es 49, por lo que el código resta 48 
		// (el valor de '0' en la tabla ASCII) del valor de '1' 
		// para obtener el valor numérico real de '1', que es 1. 
		// Entonces, el código suma 1 al valor actual de "result", 
		// lo que resulta en un nuevo valor de "result" de 1.

	// Después de que se han procesado todos los dígitos numéricos, 
	// se devuelve el resultado multiplicado por el signo correspondiente.

// int	main(void)
// {
// 	const char	*str;
// 	int			value;

// 	str = "42";
// 	value = ft_atoi(str);
// 	printf("%d\n", value);
// 	return (0);
// }

	// Puntero constante 'str' que apunta a la cadena de caracteres "42". 
	// Se llama a la función 'ft_atoi' pasándole como argumento 
	// el puntero 'str'. El valor de retorno de la función se almacena 
	// en la variable 'value'. Se imprime el valor de 'value' utilizando 
	//  y se devuelve el valor '0' para indicar que el programa ha 
	// finalizado correctamente.
