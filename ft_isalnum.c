/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:44:42 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:41:42 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'isalnum' = "is alphanumeric".
	 * 
	 * If the character is a letter or a number, return 1, 
	 * otherwise return 0.
	 * 
	 * @param c The character to be checked. 
	 * 
	 * @return 1 if the character is alphanumeric, 0 if not.
	 * 
	 * Required libraries:
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

	// With an if-else control structure, it is checked whether 
	// the integer value 'c' is within the range of alphanumeric 
	// characters (uppercase letters, lowercase letters). 
	// alphanumeric characters (uppercase letters, lowercase 
	// letters and numbers). 
	// 	If so, it returns 1 ("true"). 
	// 	If not, it returns 0 ("false" or "false").

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

	// The program prompts the user to enter a character 
	// using the 'scanf()' function, and stores this value 
	// in the variable 'input'. 

	// Then, the function 'ft_isalnum()' is used to check whether 
	// the character entered is alphanumeric or not. 

	// A conditional is used to print a message indicating whether 
	// the character entered is alphanumeric or not.

	// The program then returns 0, indicating that it 
	// was executed correctly.
