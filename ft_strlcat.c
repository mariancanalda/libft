/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:42 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 23:29:28 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strlcat = "string length concatenate".
	 * 
	 * Appends the NUL-terminated string src to the end of dst. 
	 * It will append at most dstsize - strlen(dst) - 1 bytes, 
	 * NUL-terminating the result.
	 * 
	 * @param dst This is the destination string.
	 * 
	* @param src The string to be appended.
	 * 
	 * @param dstsize The size of the destination buffer.
	 * 
	 * @return The length of the string it tried to create.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	if (dstsize <= len)
	{
		return (dstsize + ft_strlen(src));
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
	// The length of the target string is determined.
	// 'i = 0' Initialize i to 0
	// 'while (dst[i] != '0')' 
	// The array is traversed until the null character 
	// is found.
	// 'i++' At each iteration the value of 'i' is 
	// incremented.
	// 'len = i' The value of 'i' is assigned to 'len'.
	// (the number of characters up to the null character).

	// The 'if (dstsize <= len)' condition checks if the maximum 
	// allowed size for the target string (dstsize) is less than 
	// or equal to the current size of the string 'dst'. 

	// 		'return (dstsize + ft_strlen(src))'
	// 		If this is true, it means that the string 'dst' is already
	// 		filled to its maximum capacity and there is no 
	// 		space to add more characters from the string 'src'. 
	// 		The function returns the size of the 
	// 		truncated string of 'dst' plus the size of 'src'.

	// 'while (src[j] != '\0' && i < dstsize - 1)'
	// The while loop condition has two parts: 
	// the first part 'src[j] != '\0' checks the end of the 
	// string 'src' has not been reached, and the second part 
	// 'i < dstsize - 1' checks that there is still space in the 
	// buffer to add more characters (a space is reserved for the 
	// null character at the end of 'dst').

	// 	dst[i] = src[j] sets the value of the character in 'src' 
	// 	at position 'j' to position 'i' of 'dst'. 
	// 	Then, 'i' is incremented by 1 to indicate 
	// 	that a character has been copied to 'dst', and 'j' is also 
	// 	incremented by 1 so that in the next iteration the next character
	// 	is copied from 'src'.

	// 	Then the indices 'i' and 'j' are incremented so that on the 
	// 	next iteration the next character is copied.

	// dst[i] = 'j' is used to ensure that the target string
	// has a null terminator at the end after concatenating 
	// the source string. 

	// 'return (len + ft_strlen(src))' returns the total size of 
	// the resulting string, which is the length of the original 
	// destination string 'len' plus the length of the source 
	// string 'src'.

// int	main(void)
// {
// 	char	*src;
// 	char	dst[20];
// 	size_t	dstsize;
// 	size_t	concatenated_length;

// 	src = "World!";
// 	ft_strlcpy (dst, "Hello, ", sizeof(dst));
// 	dstsize = sizeof(dst);
// 	concatenated_length = ft_strlcat(dst, src, dstsize);
// 	printf("Concatenated string: %s\n", dst);
// 	printf("Length of concatenated string: %ld\n", concatenated_length);
// 	return (0);
// }

	// char *src A pointer to a string named 'src' is declared. 
	// named 'src'.

	// char dst[20] An array of characters named 'dst', 
	// which is 20 characters long, is declared.

	// size_t dstsize A variable of type size_t 
	// called 'dstsize'.

	// size_t concatenated_length A size_t variable named 
	// 'concatenated_length' is declared. 

	// src = "World!" the address of the string "World!" 
	// is assigned to the 'src' pointer.

	// 'ft_strlcpy (dst, "Hello, ", sizeof(dst))' Copies the string "Hello, " 
	// to the array 'dst' using the 'ft_strlcpy()' function. The third 
	// argument is sizeof(dst), which specifies the maximum size of 
	// the string that can be copied. 

	// 'dstsize = sizeof(dst)' The size of 'dst' is assigned to the 
	// variable dstsize. 

	// 'concatenated_length = ft_strlcat(dst, src, dstsize)' 
	// The character string 'src' is concatenated to the end of 'dst' 
	// using the ft_strlcat() function, and the resulting length of 
	// the concatenated string is assigned to the variable 
	// concatenated_length'.

	// printf("Concatenated string: %size", dst);
	// The string resulting of the concatenation is 
	// printed on the console.

	// printf("Length of concatenated string: %ld\n", 
	// concatenated_length) The length of the concatenated string 
	// is printed to the console.

	// return (0) Indicates that the program has finished 
	// successfully and the value 0 is returned.
