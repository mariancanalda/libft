/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:49:46 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 21:51:01 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Copy the string pointed to by src, including the terminating 
 * null byte ('\0'), to the buffer pointed to by dst.
 * 
 * @param dst The destination string.
 * @param src The string to be copied.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The length of the string src.
 */

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
