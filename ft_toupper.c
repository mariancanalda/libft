/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:30:36 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:35:39 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * If the character is lowercase, subtract 32 from it
 * 
 * @param c The character to be converted.
 * 
 * @return the uppercase equivalent of the character passed as an 
 * argument, if the argument is a lowercase letter.
 */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

	// La función ft_toupper toma un carácter como entrada y 
	// devuelve el mismo carácter, pero en mayúscula si el carácter 
	// original es una letra minúscula. En la función, se comprueba 
	// si el carácter está en el rango de caracteres en minúsculas 
	// (entre 'a' y 'z') y si es así, se le resta 32 para convertirlo 
	// en su equivalente en mayúsculas. El resultado final se devuelve 
	// como un entero.

// int	main(void)
// {
// 	char	input;
// 	int		output;

// 	input = 'a';
// 	output = ft_toupper(input);
// 	if (output == 'A')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// }

	// Se prueba la función con el carácter 'a' y se comprueba 
	// si la salida es 'A'. 
	// Si la función es correcta, se imprime un mensaje que indica 
	// que la función es correcta para el carácter 'a'. Si la 
	// función no es correcta, se imprime un mensaje que indica 
	// que la función no es correcta para el carácter 'a'.