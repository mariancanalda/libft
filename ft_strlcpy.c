/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:49:46 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:33:56 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>
/*#include "libft.h"*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (src != NULL)
	{
		len = strlen(src);
		if (dst != NULL && dstsize != 0)
		{
			i = 0;
			while ((i < len) && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = '\0';
		}
	}
	return (len);
}

// int	main(void)
// {
// 	char	dst[20];
// 	char	*src;
// 	size_t	dstsize;
// 	size_t	copied_lenght;

// 	src = "Hello, World!";
// 	dstsize = sizeof(dst);
// 	copied_lenght = ft_strlcpy(dst, src, dstsize);
// 	printf("Copied string: %s\n", dst);
// 	printf("Lenght of source string: %ld\n", copied_lenght);
// 	return (0);
// }
