/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:00:30 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 20:29:57 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * isascii = "is ascii"
	 * 
	 * If the integer passed to the function is between 0 and 127, 
	 * return 1, otherwise return 0.
	 * Si el entero pasado a la función está entre 0 y 127 
	 * devuelve 1, en caso contrario devuelve 0.
	 * 
	 * @param c The character to be checked. 
	 * El carácter a comprobar.
	 * 
	 * @return 1 if c is between 0 and 127, 0 otherwise.
	 * Devuelve 1 si c está entre 0 y 127, 0 en caso contrario.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 **/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

	// Con una estructura de control if-else, se verifica si 'c' 
	// está en el rango de 0 a 127, que son los 
	// valores ASCII válidos. Si c está en ese rango, 
	// entonces devuelve 1, de lo contrario, devuelve 0.

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character: ");
// 	scanf("%c", &c);
// 	if (ft_isascii(c))
// 	{
// 		printf(" %c is an ASCII character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not an ASCII character.\n", c);
// 	}
// 	return (0);
// }

	// Se pide al usuario que ingrese un carácter 
	// utilizando la función 'scanf()'. Luego, se llama 
	// a la función 'ft_isascii()' con el carácter 
	// ingresado como argumento. Si 'ft_isascii()' devuelve 
	// un valor verdadero, el programa imprime un mensaje 
	// que indica que el carácter es un carácter ASCII. 
	// De lo contrario, si 'ft_isascii()' devuelve un valor 
	// falso, el programa imprime un mensaje que indica que el 
	// carácter no es un carácter ASCII. 

	// Devuelve 0 para indicar que fue completado con éxito.