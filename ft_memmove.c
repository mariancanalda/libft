/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/02/24 14:09:41 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (dst <= src || (char *)dst >= ((char *)src + len))
		return (ft_memcpy(dst, src, len));
	else
	{
		char *tmp = (char *)malloc(len);
		if (!tmp)
			return (NULL);
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
		free(tmp);
	}
	return (dst);
}

// int	main(void)
// {
//     char    str[] = "Hello world";
//     char    buffer[20];

//     ft_memmove(buffer, str, strlen(str) + 1);
//     printf("Buffer contents after memmove: %s\n", buffer);

//     ft_memcpy(buffer, str, strlen(str) + 1);
//     printf("Buffer contents after memcpy: %s\n", buffer);

//     return (0);
// }