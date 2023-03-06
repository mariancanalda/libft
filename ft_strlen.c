/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:35:04 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 00:18:10 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strlen = "string length".
	 * 
	 * This function takes a string and returns the length 
	 * of the string.
	 * 
	 * @param str This is the string that we are going to find the length of.
	 * 
	 * @return The length of the string.
	 * 
	 * Required libraries:
	 * #include <unistd.h>
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

	// The function receives as argument a pointer to const char, 
	// which points to the string to measure. 

	// 'while (str[i] != '\0')'
	// A variable i is initialized to zero, and the string is 
	// traversed through a while loop, incrementing i at each 
	// iteration until the null character '\0' is reached. 

	// 'return (i)'
	// Finally, the value of i is returned.

// int	main(void)
// {
// 	char	str[100];

// 	printf("Introduce una cadena: ");
// 	scanf("%s", str);
// 	printf("La longitud de la cadena es: %lu \n", ft_strlen(str));
// 	return (0);
// }

	// The user is prompted to enter a string of characters, 
	// the 'ft_strlen' function is called to calculate the length of 
	// the string and display it on the screen using printf.

	// %lu is a format specifier used in C 
	// 	to print unsigned long values. 

	// The modifier l indicates that an argument of type long is 
	// expected, while the letter l indicates that an argument of 
	// type long is expected, while the letter u indicates that 
	// is to be printed as an unsigned number. 

	// Therefore, %lu is used to print values of type unsigned long. 
