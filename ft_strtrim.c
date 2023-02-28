/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:08:00 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:37:05 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"

/**
 * It returns 1 if the character c is in the string set, and 0 otherwise
 * 
 * @param c The character to check.
 * @param set The set of characters to be searched.
 * 
 * @return The number of words in the string.
 */

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
	{
		while (is_set(s1[start + end - 1], set))
			end--;
	}
	return (ft_substr(s1, start, end));
}

// int	main(void)
// {
// 	char const	*s1;
// 	char		*set;
// 	char		*trimmed_str;

// 	s1 = "  Hello, World!  ";
// 	set = " !";
// 	trimmed_str = ft_strtrim(s1, set);
// 	printf("The trimmed string is: %s\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }
