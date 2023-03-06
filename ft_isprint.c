/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:59:33 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:42:14 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isprint' = "is printable".
	 * 
	 * If the character is between 32 and 127, return 1, 
	 * otherwise return 0.
	 * 
	 * @param c The character to be checked.
	 * 
	 * @return 1 if the character is printable, 0 if not.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

	// An if-else control structure checks if the character value 
	// is within the printable range. 
	// 	If it is, it returns 1.
	// 	If it is not, returns 0.

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

	// The user is prompted to enter a character and then
	// the 'ft_isprint' function determine whether the 
	// character is printable or not. 
		// Depending on the result, the program 
		// prints a message.

	// Returns 0 indicating that it finished without 
	// errors.
