/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:42 by macanald          #+#    #+#             */
/*   Updated: 2023/01/27 18:12:10 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
		return (dstsize + strlen(src));
	}
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + strlen(src));
}

int	main(void)
{
	char	*src;
	char	dst[20];
	size_t	dstsize;
	size_t	concatenated_length;

	src = "World!";
	strcpy (dst, "Hello, ")
	dstsize = sizeof(dst);
	concatenated_length = ft_strlcat(dst, src, dstsize);
	printf("Concatenated string: %s\n", dst);
	printf("Length of concatenated string: %ld\n", concatenated_length);
	return (0);
}
