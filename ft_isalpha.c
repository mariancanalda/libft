/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:40 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:41:52 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isalpha' = "is alphabetic".
	 * 
	 * The function ft_isalpha() returns 1 if the character passed 
	 * as an argument is an alphabetical character, and 0 if it is not.
	 * 
	 * @param c The character to be checked.
	 * 
	 * @return 1 if the character is a letter, 0 if not.
	 * 
	 * Required libraries:
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

	// With an if-else control structure, we check whether 
	// the character is in the range of alphabetic characters 
	// (A to Z and a to z). 
	// 	If it is in this range, 1 is returned. 
	// 	Otherwise, 0 is returned.

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

	// The user is prompted to enter a character and then uses 
	// the 'ft_isalpha' function to determine if it is a letter
	// or not. 
	// 	If the character is a letter, it will print out a 
	// 	message will be printed indicating that it is a letter, 
	// 	otherwise a message will be printed indicating that it 
	// 	is not a letter. 

	// The program then returns 0, indicating that it 
	// was executed correctly. 
