/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:42 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 16:52:03 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/**
 * The function strlcat() appends the NUL-terminated string 
 * src to the end of dst. It will append at most dstsize 
 * - strlen(dst) - 1 bytes, NUL-terminating the result.
 * 
 * @param dst This is the destination string.
 * @param src The string to be appended.
 * @param dstsize The size of the destination buffer.
 * 
 * @return The length of the string it tried to create.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	if (dstsize <= len)
	{
		return (dstsize + ft_strlen(src));
	}
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}

// int	main(void)
// {
// 	char	*src;
// 	char	dst[20];
// 	size_t	dstsize;
// 	size_t	concatenated_length;

// 	src = "World!";
// 	strcpy (dst, "Hello, ");
// 	dstsize = sizeof(dst);
// 	concatenated_length = ft_strlcat(dst, src, dstsize);
// 	printf("Concatenated string: %s\n", dst);
// 	printf("Length of concatenated string: %ld\n", concatenated_length);
// 	return (0);
// }
