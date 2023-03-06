/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:05:18 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:41 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strchr' = "string character".
	 * 
	 * Locates the first occurrence of'c' (converted to a char) 
	 * in the string pointed to by 's'.
	 * 
	 * @param s The string to search. 
	 * 
	 * @param c The character to search for.
	 * 
	 * @return A pointer to the first occurrence of the character 
	 * c in the string s.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

	// A variable 'ch' is declared which stores the searched character 
	// converted to unsigned char. 

	// 'while (*s != '\0')'
	// A while loop is used to iterate over each character in the 
	// string 's' as long as it does not reach the end of the string 
	// (the null character '\0'). 
	// 	'if (*s == ch)'
	// 	Inside the loop, each character is compared with 'ch'. 
	// 		'return ((char *)s)'
	// 		If a match is found, a pointer to the found character 
	// 		is returned, indicating that the searched character 
	// 		has been found in the string.

	// 'if (ch == '\0')'
	// If the end of the string is reached and ch was not found, 
	// it is checked if 'ch' is the null character '\0'. 
	// 	'return ((char *)s)'
	// 	If so, a pointer to the end of the string is returned, 
	// 	indicating that the end of the string without finding 
	// 	the searched character. 

	// 	'return (NULL)' If 'ch' is not the null character, 
	// 	a null pointer is returned, which indicates that 
	// 	the character was not found in the string.

// int	main(void)
// {
// 	char		*res;
// 	const char	*str;

// 	str = "Search for a letter";
// 	res = ft_strchr(str, 'l');
// 	if (res == NULL)
// 	{
// 		printf("Character not found in string\n");
// 	}
// 	else
// 	{
// 		printf("The character was found in position: %ld\n", res - str + 1);
// 	}
// 	return (0);
// }

	// A string 'str' is defined 

	// res = ft_strchr(str, 'l')
	// 'ft_strchr' is called to search for the character 'l' in the string.
	// 		if (res == NULL) If the character is not found,
	// 		a message is printed indicating that it was not found.

	// 		If the character is found, its position in the string 
	// 		is printed. 

	// Returns 0, indicating that the program has terminated successfully.
