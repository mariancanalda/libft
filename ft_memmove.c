/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 22:56:33 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * If the destination is less than the source,
 * copy the source to the destination,
 * otherwise copy the source to the destination in reverse
 *
 * @param dst This is the pointer to the destination array
 * where the content is to be copied,
 * type-casted to a void*.
 * @param src The source string.
 * @param len The number of bytes to be moved.
 *
 * @return A pointer to the destination string.
 */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	unsigned char	*p;

// 	p = (unsigned char *)b;
// 	while (len--)
// 		*p++ = (unsigned char)c;
// 	return (b);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len -1];
				len--;	
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{	
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
    		return	(dst);
}

// int main(void)
// {
// 	int size;
// 	char *dst;
// 	char *data;

// 	size = 10;
// 	dst = malloc(size);
// 	data = malloc(size);
// 	ft_memset(dst, 'B', size);
// 	ft_memset(data, 'A', size);
// 	printf("Before memmove: dst=%s, data=%s\n", dst, data);
// 	ft_memmove(dst, data, size);
// 	printf("After memmove: dst=%s, data=%s\n", dst, data);
// 	free(dst);
// 	free(data);
// 	return (0);
// }
