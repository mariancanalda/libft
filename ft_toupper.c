/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:30:36 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 08:31:30 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'toupper' = "to upper"
	 * 
	 * If the character is lowercase, subtract 32 from it.
	 * 
	 * @param c The character to be converted.
	 * 
	 * @return the uppercase equivalent of the character passed as an 
	 * argument, if the argument is a lowercase letter.
	 * 
	 * Required libraries:
	 * // #include <stdio.h>
	 * */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

	// The ft_toupper function takes a character as input and 
	// returns the same character, but in uppercase if the original 
	// character is a lowercase letter. In the function, it checks 
	// whether the character is in the range of lowercase characters 
	// (between 'a' and 'z') and if so, 32 is subtracted to convert
	// to its uppercase equivalent. The final result is returned 
	// as an integer.

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

	// The function is tested with the character 'a' and it is
	// checked whether if the output is 'A'. 

	// If the function is correct, a message is printed indicating 
	// that the function is correct for character 'a'. If the 
	// function is not correct, a message is printed indicating 
	// that the function is not correct for the character 'a'.
