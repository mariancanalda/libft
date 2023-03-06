/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:40:56 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 08:24:28 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'tolower' = "to lower"
	 * 
	 * If the character is uppercase, add 32 to it
	 * 
	 * @param c The character to be converted.
	 * 
	 * @return The lowercase version of the character.
	 * 
	 * Required libraries. Librerías necesarias:
	 * // #include <stdio.h>
	 * */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

	// The function takes a character as an argument and 
	// returns an integer. If the character is between 'A' 
	// and 'Z' (i.e., it is an uppercase letter), 32 is added 
	// to the value of its ASCII code, which converts it to 
	// its corresponding lowercase letter.
	// The value of the converted or unchanged character is returned.
	// changes.

// int	main(void)
// {
// 	char	input;
// 	int		output;

// 	input = 'A';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'Z';
// 	output = ft_tolower(input);
// 	if (output == 'z')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'a';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = '1';
// 	output = ft_tolower(input);
// 	if (output == '1')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	return (0);
// }

	// The main function tests the ft_tolower function with 
	// different characters to make sure it works correctly. 
	// correctly.

	// It initializes a test character 'input' and calls the 
	// ft_tolower function is called to convert it to its 
	// corresponding lowercase letter. 

	// The output is checked to see if it is the expected 
	// lowercase letter ('a' for 'a' for 'a'). 
	// If so, a success message is printed. 
	// If not, an error message is printed.
	// Similar tests are performed for 'Z', 'a' and '1'.
