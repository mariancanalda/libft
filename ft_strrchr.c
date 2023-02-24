/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:08:10 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[12];
// 	char	c;
// 	char	*result;

// 	strcpy(str, "Hello World");
// 	c = 'l';
// 	result = ft_strrchr(str, c);
// 	if (result == NULL)
// 	{
// 		printf("Character not found\n");
// 	}
// 	else
// 	{
// 		printf("Last occurrence of %c is at %ld\n", c, result - str);
// 	}
// 	return (0);
// }
