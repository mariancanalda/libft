/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:59:33 by macanald          #+#    #+#             */
/*   Updated: 2023/03/01 13:34:12 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * "isprint" = "is printable"
	 * 
	 * If the character is between 32 and 127, return 1, 
	 * otherwise return 0.
	 * Si el carácter está entre 32 y 127, devuelve 1, 
	 * en caso contrario devuelve 0.
	 * 
	 * @param c The character to be checked.
	 * El carácter a comprobar.
	 * 
	 * @return 1 if the character is printable, 0 if not.
	 * Devuelve 1 si el carácter es imprimible, 
	 * 0 en caso contrario.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h
	 * */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

	// Con una estructura de control if-else, se verifica 
	// si el valor del carácter se encuentra dentro del rango 
	// imprimible. Si es así, devuelve 1, lo que indica que 
	// el carácter es imprimible. Si no lo es, 
	// devuelve 0, lo que indica que el carácter 
	// no es imprimible.

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character:");
// 	scanf("%c", &c);
// 	if (ft_isprint(c))
// 		printf("The character %c is printable.\n", c);
// 	else
// 		printf("The character %c is not printable.\n", c);
// 	return (0);
// }

	// Se pide al usuario que introduzca un caracter 
	// y luego utiliza la función ft_isprint para determinar 
	// si el caracter es imprimible o no. Dependiendo del 
	// resultado, el programa imprime un mensaje.
