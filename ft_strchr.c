/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:05:18 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:39:45 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include "libft.h"*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
	return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char	*ch;
// 	char		*res;
// 	const char	*str;

// 	ch = "l";
// 	str = "Search for a letter";
// 	res = ft_strchr(str, ch[0]);
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
