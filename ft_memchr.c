/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:19 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memchr' = "memory character".
	 * 
	 * The function ft_memchr() locates the first occurrence of 'c' 
	 * (converted to an 'unsigned char') in string 's'.
	 * 
	 * @param s The string to search.
	 * @param c The character to search for.
	 * @param n The number of bytes to be searched. 
	 * 
	 * @return A pointer to the first occurrence of the 
	 * character 'c' in the first 'n' bytes of the string 
	 * pointed to, by the argument'str'.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <string.h>
	 **/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

	// Two variables are declared:

	// 	'const unsigned char *str' which is used to store the 
	// 	memory address of the first byte of the memory block 
	// 	pointed to by the input pointer 's'. 
	// 		It is important to use a pointer to unsigned characters 
	// 		to avoid problems with negative signed characters. 
	// 		Also, it is declared as 'const' because the memory
	// 		the memory it points to will not be modified.

	// 	'size_t i': It is used as a counter. It is initialized to 
	// 	zero and is incremented at each iteration of the loop. 

	// 'str = (const unsigned char *)s' Converts the pointer 's' to a 
	// const unsigned char pointer (which guarantees that values from 0 
	// to 255 will be handled without sign problems) and assigns it 
	// to 'str'. 

	// We initialize the variable 'i' to zero and start a while loop 
	// that iterates from a while loop that iterates from 'i = 0' 
	// to 'i < n'.

	// if (str[i] == (unsigned char)c) At each iteration, 
	// 	it checks if the character at position 'i' of 'str' 
	// 	is equal to the unsigned character 'c'. 
	// 		'return ((void *)&str[i])' If so, the function 
	// 		function returns a void * pointer pointing to 
	// 		the memory address &str[i] (place where the first 
	// 		occurrence of the character 'c' was found in memory 
	// 		was found in the memory pointed to by 's'). 
	// 		By converting the pointer to void *, you can assign 
	// 		this pointer to any pointer type in C. 

	// 		'i++' Otherwise, the function increments 'i' and 
	// 		continues the loop. 
	// 		If the loop completes without finding a match. 
	// 		a match.
	// 			return (NULL) The function returns NULL because 
	// 			the character 'c' was not found in the string 's'.

// int	main(void)
// {
// 	char	str[15];
// 	char	c;
// 	char	*result;

// 	ft_strlcpy(str, "Hello, World!", sizeof(str));
// 	c = 'o';
// 	result = ft_memchr(str, c, ft_strlcpy(NULL, str, 0));
// 	if (result == NULL)
// 		printf("Character '%c' not found\n", c);
// 	else
// 		printf("Character '%c' found at position %ld\n", c, result - str);
// 	return (0);
// }

	// Three variables are defined:
	// 	'str': an array of characters with a capacity of 15 characters.
	// 	c': a character to be searched for in str.
	// 	result': a pointer to a character that will point to the position 
	// 	in the string str where c is found.

	// The string "Hello, World!" is copied into the array 'str' using 
	// 'ft_strlcpy' which copies a source string to a destination string 
	// without destination string without causing a buffer overflow. 

	// 'sizeof(str)' specifies the maximum size of the destination array, 
	// ensuring that it is not written beyond the space allotted for it. 
	// 	The result of 'ft_strlcpy' is the size of the source string 
	// 	that was copied.  It will be 13, which is the length of 
	// 	"Hello, World!" (including the final null character).

	// 'c' is defined as 'o'. What you want to search for in the string.

	// Call the function 'ft_memchr' with the following arguments 
	// the string 'str', the character 'c', and the length of the 
	// string (calculated with ft_strlcpy(NULL, str, 0)).
	// 			By passing NULL as argument 'dst' and 0 as
	// 			argument 'size', 'ft_strlcpy' performs no copy 
	// 			operation and returns the length of the source 
	// 			string ("Hello, World!").

	// The program checks to see if the result is NULL, 
	// in which case a message is a message is printed indicating that 
	// the character was not found. 

	// Otherwise, a message is printed indicating the position where the 
	// character was found, which is calculated by subtracting the pointer 
	// returned by the function from the starting address of the string 'str'.
