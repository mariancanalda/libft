/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:51:54 by macanald          #+#    #+#             */
/*   Updated: 2023/02/11 18:04:50 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= strlen(s))
		return (NULL);
	if (len > strlen(s) - start)
		len = strlen(s) - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

int	main(void)
{
	char const	*s;
	char		*substr;

	s = "Hello, World!";
	substr = ft_substr(s, 7, 5);
	printf("The substring is: %s\n", substr);
	free(substr);
	return (0);
}
