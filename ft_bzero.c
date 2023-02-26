/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:17:54 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 18:35:21 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"

/**
 * It sets the first n bytes of the memory area pointed to by str to zero
 * 
 * @param str This is the pointer to the block of memory to fill.
 * @param n The number of bytes to be zeroed.
 */

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	*str;

// 	str = strdup("Hello, World!");
// 	ft_bzero(str, ft_strlen(str));
// 	printf("Cadena con valores nulos: %s\n", str);
// 	free(str);
// 	return (0);
// }
