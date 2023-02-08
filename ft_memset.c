/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 17:33:33 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft.h"

/**
 * Ft_memset() takes a pointer to a memory area, a byte value, 
 * and a size, and fills the memory area with the given byte value
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c the character to fill the memory with
 * @param len The number of bytes to be set to the value c.
 * 
 * @return The address of the first byte of the memory area b.
 */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[42];

// 	ft_memset(str, '*', sizeof(str));
// 	printf("Cadena rellenada con asteriscos: %s\n", str);
// 	return (0);
// }
