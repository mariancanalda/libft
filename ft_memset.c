/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:29 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memset' = "memory set".
	 * 
	 * Takes a pointer to a memory area, a byte value, and a size, 
	 * and fills the memory area with the given byte value.
	 * 
	 * @param b This is the pointer to the memory area to be filled.
	 * 
	 * @param c the character to fill the memory with.
	 * 
	 * @param len The number of bytes to be set to the value 'c'.
	 * 
	 * @return The address of the first byte of the memory area 'b'.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 **/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

	// A pointer 'p' is declared that points to an unsigned char. 
	// This pointer will be used to traverse the block of memory.
	// 	In C it is recommended that functions that work with single  
	// 	bytes (such as memset) use pointers to unsigned char to ensure 
	// 	predictable behavior and avoid sign problems in comparisons. 

	// p = b; The pointer 'p' is assigned the value of the memory address 
	// pointed by 'b' to by 'b' is assigned to the pointer 'p' in order to
	// be able to write to that memory address. 
	// It is guaranteed that you are writing to the correct memory. 
	// 	If this is not done, then the pointer 'p' would point to a random 
	// 	memory address and writing to that address could cause errors. 

	// while (len--) We use a while loop that will run until len equals zero. 
	// 	'*p++ = (unsigned char)c'
	// 	On each iteration, the value of 'c' is set to the current byte 
	// 	pointed to by 'p'. 
			// The casting to (unsigned char) is performed to ensure that 
			// that the value of 'c' to be copied into the pointer 'p' is 
			// a positive number between 0 and 255. 
			// If 'c' is a char variable, the range of values it can take 
			// depends on whether it is signed or unsigned. If it is 
			// signed, the range is from -128 to 127, whereas if it is 
			// unsigned, the range is from 0 to 255.

	// The pointer to the memory area is returned.

// int	main(void)
// {
// 	char	str[42];

// 	ft_memset(str, '*', sizeof(str));
// 	printf("Cadena rellenada con asteriscos: %s\n", str);
// 	return (0);
// }

	// The 'main' calls the 'ft_memset' function, which is
	// responsible for filling the array 'str' with asterisks. 

	// 'char str[42]' A character array named 'str' with a length 
	// of 42 elements.

	// 'ft_memset(str, '*', sizeof(str));'
	// 'str' is the array that you want to fill with asterisks, 
	// the value of asterisk is passed as argument 'c' and 'sizeof' 
	// is used to get the 'sizeof' is used to get the size of the 
	// array in bytes, which is passed as argument 'len'.

	// Then, 'printf' is used to print the contents of 'str' to the 
	// console, which should now be full of asterisks. 

	// It returns 0 to indicate that the program finished without 
	// errors.
