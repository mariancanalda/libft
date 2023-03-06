/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:32 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:23 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memcmp' = "memory compare". 
	 * 
	 * The function ft_memcmp() compares the first 'n' bytes of memory 
	 * area 'str1' and memory area 'str2'
	 * 
	 * @param dst This is the destination string.
	 * 
	 * @param str This is the pointer to the block of memory to fill.
	 * 
	 * @param n The number of bytes to compare.
	 * 
	 * @return The difference between the two strings.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 **/

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}

	// This function compares the first "n" bytes of the memory areas 
	// pointed to by "dst" and "str". And returns an integer indicating 
	// the ratio between those first "n" bytes of the memory areas. 

	// 	The function returns a negative value if the first byte 
	// 	that differs in "dst" is smaller than the corresponding 
	// 	byte in "str". 

	// 	It returns a positive value if the first differing byte  
	// 	in "dst" is greater than the corresponding byte in "str".

	// 	And returns zero if the memory areas are equal.

	// Two pointers to unsigned chars are declared. 
	// that will be used to traverse the memory regions of 'dst' 
	// and 'str'.

	// 'dst2 = (unsigned char *)dst' 'str2 = (unsigned char *)str'.
	// The input parameter pointers are mapped to the unsigned 
	// character pointers (dst2 and str2). This mapping ensures 
	// that the values in the memory locations are treated as 
	// unsigned bytes (necessary to be able to compare the values 
	// of the memory bytes in a safely).

	// If 'if (n)' If 'n' is equal to zero, the function will not perform 
	// any comparison and will return zero immediately. If 'n' is greater 
	// than zero, the function will continue with the byte comparison.

	// 	'while (n--)' n is decremented at each iteration of the loop. 
	// 	In other words, if the value of n is equal to 5, the first 
	// 	iteration of the while loop would compare the bytes in the 
	// 	0 positions of both memory regions, and then decrement the 
	// 	value of 'n' to 4. The second iteration of the while loop would 
	// 	compare the bytes in locations 1, and decrement 'n' to 3, 
	// 	and so on until 'n' reaches the value of 0 and the loop stops. 

		// 'if (*dst2++ != *str2++)'.
		// At each iteration, it checks if the bytes pointed to by "dst2" 
		// and "str2" are equal. 
		// 	'return (*(--dst2) - *(--str2))'.
		// 	If they are not, tthe difference between the two bytes 
		// 	is calculated and returned.

		// 	If the bytes are equal, the pointers 'dst2' and 'str2' 
		// 	are incremented to point to the next byte and 'n' is 
		// 	decremented to indicate that 'n' bytes have been compared. 

	// 	'return (0)' If after traversing the first 'n' bytes of the 
	// 	memory areas are equal, the function returns zero to indicate 
	// 	that the memory areas are equal. 

// int	main(void)
// {
// 	char	dst[6];
// 	char	str[6];
// 	int		n;	

// 	ft_strlcpy(dst, "Hello", 6);
// 	ft_strlcpy(str, "Hello", 6);
// 	n = 5;
// 	printf("ft_memcmp result: %d\n", ft_memcmp(dst, str, n));
// 	return (0);
// }

	// Two character arrays are declared, 'dst' and 'str', 
	// each with space for 6 characters. They will be used to store two 
	// character strings. And an integer variable 'n' which will be used 
	// as the number of bytes to be compared in 'ft_memcmp'.

	// With 'ft_strlcpy' the string "Hello" will be copied into the array 
	// 'dst' with a maximum size of 6 bytes. And to copy the string "Hello" 
	// into the array 'str' with a maximum size of 6 bytes.

	// A value of 5 is assigned to the variable n: only the first 5 bytes 
	// of the arrays 'dst' and 'str' will be compared.

	// 'ft_memcmp' is called with the arguments 'dst', 'str' and 'n' and
	// print the result of the function using 'printf'. 

	// The result is displayed as an integer, which indicates 
	// the difference between the bytes that were compared. In this case, 
	// since the arrays are equal, the function returns 0.
