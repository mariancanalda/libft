/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 13:14:34 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>
// #include "libft.h"

/**
 * The function ft_memchr() locates the first occurrence of c 
 * (converted to an unsigned char) in string s
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * @param n The number of bytes to be searched.
 * 
 * @return A pointer to the first occurrence of the character c 
 * in the first n bytes of the string pointed to, by the argument str.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[15];
// 	char	c;
// 	char	*result;

// 	strcpy(str, "Hello, World!");
// 	c = 'o';
// 	result = ft_memchr(str, c, strlen(str));
// 	if (result == NULL)
// 		printf("Character '%c' not found\n", c);
// 	else
// 		printf("Character '%c' found at position %ld\n", c, result - str);
// 	return (0);
// }
