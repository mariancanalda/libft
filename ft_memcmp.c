/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:32 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:32:41 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>
/*#include "libft.h"*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	void				*ptr;

	p = s;
	ptr = (void *)p;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (ptr);
		p++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[15];
// 	char	c;
// 	char	*result;

// 	strcpy(str, "Hello, World!");
// 	c = 'W';
// 	result = ft_memchr(str, c, strlen(str));
// 	if (result == NULL)
// 		printf("Character '%c' not found in the string.\n", c);
// 	else
// 		printf("Character '%c' found at position %ld\n", c, result - str);
// 	return (0);
// }
