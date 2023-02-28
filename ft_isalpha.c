/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 20:29:33 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * isalpha = "is alphabetic"
	 * 
	 * The function ft_isalpha() returns 1 if the character passed 
	 * as an argument is an alphabetical character, and 0 if it is not.
	 * La función ft_isalpha() devuelve 1 si el carácter pasado 
	 * como argumento es un carácter alfabético, y 0 si no lo es
	 * 
	 * @param c The character to be checked.
	 * El carácter a comprobar.
	 * 
	 * @return 1 if the character is a letter, 0 if not.
	 * Devuelve 1 si el carácter es una letra, 0 si no lo es.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <ctype.h>
	 **/

#include "libft.h"

int	ft_isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

	// Con una estructura de control if-else, se verifica si
	//  el carácter está en el rango de los caracteres alfabéticos 
	//  (A a Z y a a z). Si está en este rango, se devuelve 1. 
	// De lo contrario, se devuelve 0.

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character: ");
// 	scanf("%c", &c);
// 	if (ft_isalpha(c))
// 	{
// 		printf("The character %c is a letter.\n", c);
// 	}
// 	else
// 	{
// 		printf("The character %c is not a letter.\n", c);
// 	}
// 	return (0);
// }

	// Se pide al usuario que ingrese un carácter y luego usa 
	// la función ft_isalpha para determinar si es una letra o no. 
	// Si el carácter es una letra, se imprimirá un 
	// mensaje que indica que es una letra, de lo contrario, 
	// se imprimirá un mensaje que indica que no es una letra. 

	// Luego, el programa devuelve 0, lo que indica que se 
	// ejecutó correctamente.
