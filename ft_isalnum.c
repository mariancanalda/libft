/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:44:42 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:27:34 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isalnum' = "is alphanumeric"
	 * 
	 * If the character is a letter or a number, return 1, 
	 * otherwise return 0.
	 * Si el carácter es una letra o un número, devuelve 1, 
	 * en caso contrario devuelve 0.
	 * 
	 * @param c The character to be checked. 
	 * El carácter a comprobar.
	 * 
	 * @return 1 if the character is alphanumeric, 0 if not.
	 * Devuelve 1 si el carácter es alfanumérico, 
	 * 0 en caso contrario.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 **/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

	// Con una estructura de control if-else, se verifica si el 
	// valor entero 'c' está dentro del rango de caracteres 
	// alfanuméricos (letras mayúsculas, letras minúsculas 
	// y números). Si es así, devuelve 1 ("verdadero" o "true"). 
	// Si no es así, devuelve 0 ("falso" o "false")

// int	main(void)
// {
// 	char	input;

// 	printf("Enter a character: ");
// 	scanf("%c", &input);
// 	if (ft_isalnum(input))
// 		printf("Character entered is alphanumeric.\n");
// 	else
// 		printf("Character entered is not alphanumeric.\n");
// 	return (0);
// }

	// El programa pide al usuario que introduzca un carácter 
	// mediante la función 'scanf()', y almacena este valor 
	// en la variable 'input'. Luego, la función 'ft_isalnum()' 
	// se utiliza para verificar si el carácter introducido 
	// es alfanumérico o no.
	// Se utiliza un condicional para imprimir un mensaje 
	// que indica si el carácter introducido es alfanumérico o no.