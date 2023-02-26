/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 17:31:23 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

/**
 * Copy n bytes from memory area src to memory area dst
 * 
 * @param dst This is the pointer to the destination array 
 * where the content is to be copied, type-casted to a pointer of type void*.
 * @param src The source string.
 * @param n The number of bytes to copy.
 * 
 * @return a pointer to the destination.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

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

void	print_elements(char *array, int size)
{
	printf ("Elements : ");
	while (size-- > 0)
	{
		printf ("%c, ", *array++);
	}
	printf ("\n");
}

// int	main(void)
// {
// 	char	dst[7];
// 	char	src[7];

// 	ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)));
// 	printf("ft_memcpy dst: %s\n", dst);

// 	ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)));
// 	printf("ft_memcpy dst: %s\n", dst);

// 	return (0);
// }
