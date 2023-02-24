/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:05:18 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 17:07:52 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * The function ft_strchr() locates the first occurrence of c 
 * (converted to a char) in the string pointed to by s.
 * 
 * @param s The string to search.
 * @param c The character to search for.
 * 
 * @return A pointer to the first occurrence of the character c in the string s.
 */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char		*res;
// 	const char	*str;

// 	str = "Search for a letter";
// 	res = ft_strchr(str, 'l');
// 	if (res == NULL)
// 	{
// 		printf("Character not found in string\n");
// 	}
// 	else
// 	{
// 		printf("The character was found in position: %ld\n", res - str + 1);
// 	}
// 	return (0);
// }
