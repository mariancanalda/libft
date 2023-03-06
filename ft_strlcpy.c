/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:49:46 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 08:48:56 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strlcpy' = "string length copy".
	 * 
	 * Copy the string pointed to by src, including the terminating 
	 * null byte ('\0'), to the buffer pointed to by dst.
	 * 
	 * @param dst The destination string.
	 * 
	 * @param src The string to be copied.
	 * 
	 * @param dstsize The size of the destination buffer.
	 * 
	 * @return The length of the string src.
	 * 
	 * Required libraries:
	 * #include <string.h>
	 * */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// The counter 'i' is initialized to zero. 

	// 'if (dstsize == 0) return (ft_strlen(src))' 
	// If 'dstsize' is equal to zero, the function 
	// returns the length of 'src'. 
		// This means that if the destination buffer 
		// has no space to store anything, the function 
		// simply returns the length of the source string.

	// 'while (src[i] && i < dstsize - 1)'
		// If 'dstsize' is not zero, the function iterates over 
		// the source string 'src' until it reaches the end 
		// of the string or until 'i' reaches 'dstsize - 1', 
		// which means that there is not enough space 
		// in the destination buffer to copy 
		// the entire string. 

	// 'dst[i] = src[i] i++;'
		// At each iteration, it performs two actions: 
		// It copies the value of the i-th element of
		// 'src' into the i-th element of 'dst' 
		// while scrolling through both arrays 
		// using the same index 'i'. 
		// Both arrays must be of the same size 
		// for this action to be valid. 

	// 	After iteration, the function sets the final null character 
	// 	at position 'i' of 'dst' and returns the length of src. 

	// 	'return (ft_strlen(src))'The 'ft_strlcpy' function 
	// 	ensures that the target buffer is always terminated 
	// 	with a null character, whether the entire string 
	// 	was copied or not. 
		// 	This is useful in order to avoid memory access errors.

// int	main(void)
// {
// 	char	dst[20];
// 	char	*src;
// 	size_t	dstsize;
// 	size_t	copied_length;

// 	src = "Hello, World!";
// 	dstsize = sizeof(dst);
// 	copied_length = ft_strlcpy(dst, src, dstsize);
// 	ft_putendl_fd(dst, 1);
// 	ft_putendl_fd("Length of copied string:", 1);
// 	ft_putnbr_fd(copied_length, 1);
// 	ft_putendl_fd("", 1);
// 	return (0);
// }

	// Initializes a destination string 'dst' with a size 
	// of 20 bytes and a source string 'src' with the value. 
	// "Hello, World!". 

	// Calls the function 'ft_strlcpy' with these values and 
	// stores the length of the copied string in 'copied_length'. 

	// Finally, print the copied string 'dst' and the length of 
	// the copied string 'copied_length' in the standard output 
	// using 'ft_putendl_fd' and 'ft_putnbr_fd'.
