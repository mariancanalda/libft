/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 07:44:25 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strrchr = "string reverse search for character"
	 * 
	 * It returns a pointer to the last occurrence of the 
	 * character 'c' in the string 's'.
	 * 
	 * @param s The string to search.
	 * 
	 * @param c The character to be located.
	 * 
	 * @return A pointer to the last occurrence 
	 * of the character 'c' in the string 's'.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <string.h>
	 * #include <stdlib.h>
	 * #include <stddef.h>
	 *  */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
		if (i < 0)
			break ;
	}
	return (NULL);
}

	// if (c > 256) c %= 256' If the value of the character 'c' is 
	// greater than 256, its value is reduced by modulo 256. 
	// This is done because in ASCII, characters are represented by 
	// integer values between 0 and 127, so the value of the character 
	// is set to this range. 

	// "while (s[i] != '\0') i++" The string 's' is traversed until
	// the end of the string is found, which is represented by the 
	// null character \0. The value of i is incremented at each 
	// iteration.

	// 'while (i >= 0) if (s[i] == c)'
	// The string 's' is traversed from right to left, from the 
	// end of the string to the beginning, looking for the 
	// character 'c'. 
	// 	If the character is found, the expression 
	// 	"return ((char *)s + i);" returns a pointer 
	// 	to that position in the string (converted 
	// 	to a character pointer by explicit casting). 

	// 	The expression "(char *)s" converts the pointer 
	// 	's' to a pointer to char, which means that 
	// 	you are treating the array it points to as a 
	// 	an array of characters. Then, you add 
	// 	the value of 'i' is added, which moves the pointer 
	// 	to position 'i' in the array.
	// 	If the character is not found, it returns
	// 	 NULL IS RETURNED.

	// 	i--; In each iteration, we decrement the 
	// 	value of i is decremented and evaluated to see 
	// 	if it has become less than 0, in which case 
	// 	the loop is interrupted. 

	// It is checked if the variable 'i' has decreased to a 
	// value less than zero. If the condition is true, 
	// the loop is interrupted and the code execution jumps
	// to the next line after the loop: 'return (NULL)'.

	// If the character "c" was not found in the string 's', 
	// the function returns NULL. 

// int	main(void)
// {
// 	char *src;
// 	char *ptr;

// 	src = "Hello";
// 	ptr = ft_strrchr(src, 'l');
// 	if (ptr != NULL)
// 		printf("Result: %s\n", ptr);
// 	else
// 		printf("No se encontró el carácter.\n");

// 	ptr = ft_strrchr(src, 'a');
// 	if (ptr != NULL)
// 		printf("Result: %s\n", ptr);
// 	else
// 		printf("No se encontró el carácter.\n");

// 	return (0);
// }

	// Two variables are declared, 'str' and 'ptr', both of type 
	// pointer to char.

	// The variable 'str' is initialized with the character string. 
	// "Hello, world!" using the 'ft_strlcpy' function.

	// The function 'ft_strrchr' is called by passing as arguments 
	// the string 'str' and the character 'o'. This function returns 
	// a pointer to the last occurrence of the 'o' character in 
	// the string, or NULL if the character is not found.

	// I use 'printf' to print the result returned by 'ft_strrchr'. 

	// It returns the value 0
