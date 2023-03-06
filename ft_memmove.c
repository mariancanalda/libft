/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:28 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memmove' = "memory move".
	 * 
	 * This code is an implementation of the 'memmove' function that 
	 * copies a block of memory from a source address to a destination 
	 * address, allowing the source and destination areas to overlap.
	 * 
	 * If the destination is less than the source, copy the source to 
	 * the destination, otherwise copy the source to the destination in 
	 * reverse. 
	 *
	 * @param dst This is the pointer to the destination array where 
	 * the content is to be copied,type-casted to a void*.
	 * 
	 * @param src The source string.
	 * @param len The number of bytes to be moved.
	 *
	 * @return A pointer to the destination string.
	 * 
	 * Required libraries:
	 * #include <stdlib.h>
	 * #include <stdio.h>
	 **/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_src;
	unsigned char	*p_dst;

	if (!dst && !src)
		return (NULL);
	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (len == 0 || p_dst == p_src)
		return (dst);
	if (p_dst > p_src)
	{
		p_src += len - 1;
		p_dst += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

	// unsigned char *p_src; and unsigned char *p_dst; 
	// are pointers to unsigned character to unsigned characters 
	// that are used to copy the block of memory from block of 
	// memory from source to destination.

	// if (!dst && !src) checks if null pointers are passed as 
	// arguments. If so, it makes no sense to copy data from one 
	// null pointer to another, so it returns NULL to indicate 
	// an error. 

	// p_src = (unsigned char *)src; and p_dst = (unsigned char *)dst
	// The pointers 'src' and 'dst' are converted to unsigned char 
	// pointers (explicit typecasting) and is assigned to 'p_dst' 
	// and 'p_src', respectively.
	// 	By performing a type conversion to unsigned char *, 
	// 	you are indicating to the compiler that you want to treat 
	// 	the data pointed to by 'src' and 'dst' as individual bytes. 
	// 	individual. 

	// if (len == 0 || p_dst == p_src) checks if the block size is 0 	
	// (there is no data to move) or if the source and destination 
	// pointers are equal (no data to move). 
	// 	return (dst); If so, the function returns the destination
	// 	pointer without doing anything.

	// if (p_dst > p_src) checks if the destination pointer is 
	// after the source pointer in memory, this is done to determine 
	// if it is necessary to use a forward or backward copy approach. 
	// 	What is compared are the memory addresses pointed to by 
	// 	'p_dst' and 'p_src'. If the memory address pointed to by 
	// 	'p_src' is larger than the memory address pointed to by 
	// 	'p_dst', it follows that p_dst is closer to the beginning 
	// 	of memory and p_src is closer to the end of memory.

	// 	'p_src += len - 1 p_dst += len - 1'. 
	// 	If 'p_dst' is greater than or equal to 'p_src', 
	// 	the function copies the bytes of 'src' to 'dst' 
	// 	from back to front to avoid overwriting avoid overwriting 
	// 	data before copying.
	// 		The pointers 'p_dst' and 'p_src' are adjusted 
	// 		to point to the last byte in the memory region to 
	// 		be copied (they are initialized to the last byte 
	// 		position of the last byte in 'dst' and 'src', 
	// 		respectively). 

	// 	'while (len--) *p_dst-- = *p_src--'
	// 		The bytes of 'src' are copied into 'dst' in an 
	// 		inverted form using a while loop in which the 'p_dst'
	// 		and 'p_src' are decremented in each iteration until 
	// 		'len' bytes have been copied. 

	// 		'else ft_memcpy(dst, src, len)' 
	// 		If 'p_dst' is less than 'p_src', then the function 
	// 		'ft_memcpy' is called to copy the bytes in the normal
	// 		order.

	// return (dst); returns a pointer to the destination memory 
	// to indicate that the memory copy operation was successful. 
	// operation was successful.

// int main(void)
// {
//     char s1[] = "abcdefg";
//     char s2[] = "1234567";
//     size_t n = 4;

//     printf("s1 before ft_memmove: %s\n", s1);
//     ft_memmove(s1+2, s1, n);
//     printf("s1 after ft_memmove: %s\n", s1);

//     printf("s2 before ft_memmove: %s\n", s2);
//     ft_memmove(s2, s2+3, n);
//     printf("s2 after ft_memmove: %s\n", s2);

//     return (0);
// }

	// In the main function, two arrays of characters 's1' and 's2'
	// containing the values "abcdefg" and "1234567" are declared. 
	// In addition, a variable 'n' with the value 4 is declared.

	// The character strings 's1' and 's2' are printed before 
	// the 'ft_memmove' operation is performed.

	// The 'ft_memmove' function is called twice, once for each 
	// string of characters. In the first call, 4 bytes are moved 
	// from position 0 of the string 's1' to position 2 of the same
	// string. In the second call, 4 bytes are moved from position 
	// 3 of string 's2' to position 0 of the same string.

	// The character strings 's1' and 's2' are printed after 
	// the 'ft_memmove' operation.

	// The program terminates by returning 0.