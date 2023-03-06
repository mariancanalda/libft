/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:13:52 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 00:20:12 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	* 'strnstr' = "string n-occurrence search"
	*
	* If the first character of needle is found in 'haystack', 
	* then compare the rest of needle to the rest of 'haystack'.
	* 
	* @param haystack The string to search in.
	* 
	* @param needle the string to find.
	* 
	* @param len the maximum number of characters to search in 
	* haystack. 
	* 
	* @return A pointer to the first occurrence of the substring 
	* needle in the string haystack, or a null pointer if the substring 
	* is not found.
	* 
	* * Required libraries:
	* #include <stdio.h>
	* #include <string.h>
	* 
	**/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*match;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			match = (char *)haystack;
			return (match);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

	// "if (*needle == '\0') return ((char *)haystack)"
	// If 'needle' is an empty string, the function returns
	// a pointer to the beginning of the string 'haystack'.

	// 'needle_len = ft_strlen(needle)'
	// Calculates the length of the substring 'needle' by means of 
	// function 'ft_strlen'. 

	// 'while (*haystack && len >= needle_len)'
	// The function iterates over the string 'haystack' for as long 
	// as there are characters in the string and the end of the string 
	// has not been reached or the limit specified by 'len' has been 
	// exceeded.
	// 'if (ft_strncmp(haystack, needle, needle_len) == 0)'
	// 	Inside the loop, the function compares a substring of length 
	// 	'needle_len' at the beginning of the string 'haystack' 
	// 	with the substring 'needle', using 'ft_strncmp'. 

	// 	"match = (char *)haystack return (match)"
	// 	If the substrings are the same, the function 
	// 	returns a pointer to the beginning of the substring 
	// 	within haystack.

	// 	If the function exits the loop without finding the 
	// 	substring needle, it returns NULL.

// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	char		*result;

// 	haystack = "This is a test string";
// 	needle = "test";
// 	result = ft_strnstr(haystack, needle, ft_strlen(haystack));
// 	if (result != NULL)
// 		printf("Substring '%s' found in '%s'\n", needle, haystack);
// 	else
// 		printf("Substring '%s' not found in '%s'\n", needle, haystack);
// 	return (0);
// }

	// Look for the substring "test" within the string 
	// "This is a test string". 
	// Since the substring is in the string, the function returns a 
	// pointer to the beginning of the substring "test". 
