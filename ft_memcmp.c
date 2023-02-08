/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:32 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 17:20:12 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libft.h"

/**
 * The function ft_memcmp() compares the first n bytes 
 * of memory area str1 and memory area str2
 * 
 * @param dst This is the destination string.
 * @param str This is the pointer to the block of memory to fill.
 * @param n The number of bytes to compare.
 * 
 * @return The difference between the two strings.
 */

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	size_t			i;
	int				diff;
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	i = 0;
	diff = 0;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}

// int	main(void)
// {
// 	char	dst[6];
// 	char	str[6];
// 	int		n;	

// 	strcpy(dst, "Hello");
// 	strcpy(str, "Hello");
// 	n = 5;
// 	printf("ft_memcmp result: %d\n", ft_memcmp(dst, str, n));
// 	printf("memcmp result: %d\n", memcmp(dst, str, n));
// 	return (0);
// }
