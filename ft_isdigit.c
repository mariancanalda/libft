/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:42:54 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:42:06 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isdigit' = "is digit".
	 * 
	 * If the character is a digit, return 1, otherwise return 0.
	 * 
	 * @param c The character to be checked.
	 * 
	 * @return 1 if the character is a digit, 0 if not.
	 * 
	 * Required libraries:
	 * #include <stdio.h> 
	 **/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

	// With an if-else control structure, we check if the value 
	// of the character is in the decimal range '0' to '9', 
	// 	Returns 1, indicating that it is a decimal digit. 
	// 	If it is not in that range, it returns 0, 
	// 	which means it is not a decimal digit.

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("'%c' is a digit.\n", c);
// 	}
// 	else
// 	{
// 		printf("'%c' is not a digit.\n", c);
// 	}
// 	return (0);
// }

	// A variable 'c' is declared and initialized to '5'. 

	// ft_isdigit() is called with the value of 'c' as argument. 

	// The function checks if the value passed as argument 
	// is a decimal digit, returning 1 if it is. a
	// And 0 if it is not. 

	// The program prints the message "'5' is a digit" and 
	// returns 0 indicating that it finished without errors.
