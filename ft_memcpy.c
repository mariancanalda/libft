/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:26 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memcpy' = "memory copy".
	 * 
	 * Copy 'n' bytes from memory area 'src' to memory area 'dst'.
	 * 
	 * @param dst This is the pointer to the destination array 
	 * where the content is to be copied, type-casted to a pointer 
	 * of type void*.
	 * 
	 * @param src The source string.
	 *
	 *  @param n The number of bytes to copy.
	 * 
	 * @return a pointer to the destination.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 **/

#include "libft.h"

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

	// The function 'ft_memcpy' returns a generic pointer (void type *) 
	// and takes three arguments: a pointer to the destination memory area, 
	// a pointer to the source memory area, and a size in bytes.

	// Two pointers of type unsigned char 'd' and 's' are declared. 

	// 'd = (unsigned char *)dst s = (unsigned char *)src'.
	// The values of the arguments 'dst' and 'src' are assigned to 
	// the pointers 'd' and 's' pointers. 
			// The generic pointers (void *) are casted to pointers of type 
			// unsigned char, since unsigned char pointers are used to access 
			// the memory by used to access memory on a byte-by-byte basis.

	// while (dst == src || !n) Check if the source and destination pointers 
	// are equal or if the size is zero (no bytes to copy). 
			// This check is performed to avoid memory overlapping problems 
			// when the source and destination memory are the same. 

			// If either of these conditions is met, it returns 
			// 'dst' (the original memory address) without making a copy.

	// 'while (n > 0)' As long as 'n' is greater than zero, memory copy is 
	// performed byte by byte with a while loop being executed.
	// 	'*d++ = *s++' At each iteration, the byte pointed to  
	// 	by 's' is copied to the byte pointed to by 'd', and 
	// 	the pointers 's' and 'd' are incremented to point to 
	// 	the next byte.

		// 'n--' In addition, 'n' is decremented by 1 to indicate that a 
		// byte has been copied.
		// 	Decreasing 'n' by 1 in each iteration of the while loop 
		// 	loop, guarantees that exactly 'n' bytes are copied from 
		// 	the source memory to the destination memory, 
		// 	and that the source and destination pointers point to 
		// 	the next byte in each iteration.

	// A pointer to the destination memory area 'dst' is returned. 
	// This indicates that the memory copy has been completed.

// void	print_elements(char *array, int size)
// {
// 	printf ("Elements: ");
// 	while (size-- > 0)
// 	{
// 		printf ("%c, ", *array++);
// 	}
// 	printf ("\n");
// }

	// The 'print_elements' function is useful for displaying the contents 
	// of an array on the console.  
	// After copying the character string into the target array 'dst', 
	// 'print_elements' is called to check that the copy of the string 
	// has been done correctly. 

	// The 'print_elements' function goes through the string 'array' 
	// and prints them to the console. 

	// The 'size' parameter is the length of the string.

	// while (size-- > 0) In the while loop, the 'size' variable is 
	// decremented for each iteration. 

	// 'printf ("%c, ", *array++)' As long as 'size' is greater than 0,
	//  the value of the character pointed to by the 'array' pointer 
	//  points to and advances to the next character in the array with 
	//  the increment operator (++). 
	// 	In addition, after printing each character, a comma and a 
	// 	space to separate the elements.

// int	main(void)
// {
// 	char	dst[7];
// 	char	src[7];

// 	ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)));
// 	printf("ft_memcpy dst: %s\n", dst);

// 	return (0);
// }

	// Two character arrays 'dst' and 'src' are declared, 
	// each with a length of 7 elements.

	// 'ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)))'
	// The function 'ft_memcpy' is called to copy the bytes 
	// from 'src' into 'dst', using 'ft_strlcpy' to calculate the 
	// size of the string to be copied.

	// 'printf("ft_memcpy dst: %s\n", dst)'
	// The 'printf' function is called to print the contents of 'dst'
	// using the format specifier %s. 
