/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:00:30 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:41:59 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isascii' = "is ascii".
	 * 
	 * If the integer passed to the function is between 0 and 127, 
	 * return 1, otherwise return 0.
	 * 
	 * @param c The character to be checked. 
	 * 
	 * @return 1 if c is between 0 and 127, 0 otherwise.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 **/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

	// With an if-else control structure, it is checked if 'c' 
	// is in the range 0 to 127, which are the valid ASCII values.
	// 	If c is in that range, then it returns 1, 
	// 	otherwise it returns 0.

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

	// The user is prompted to enter a character using 
	// the 'scanf()' function. Then, 'ft_isascii()' is 
	// called with the character as an argument. 
	// 	If 'ft_isasascii()' returns a true value, 
	// 	the program prints out a message indicating
	// 	that the character is an ASCII character. 
	// 	Otherwise, if 'ft_isascii()' returns false, 
	// 	the program prints a message indicating that 
	// 	the character is not an ASCII character. 

	// Returns 0 to indicate successful completion.
