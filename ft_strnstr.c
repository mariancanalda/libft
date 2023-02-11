/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:13:52 by macanald          #+#    #+#             */
/*   Updated: 2023/02/11 12:56:17 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/**
 * It returns a pointer to the first occurrence of the string needle 
 * in the string haystack, or a null pointer if needle is not part of haystack.
 * 
 * @param haystack The string to search in
 * @param needle The string to search for.
 * @param len The maximum number of characters to search in haystack.
 */

const char	*my_strnstr(const char *haystack, const char *needle, size_t len)
{
	const size_t	needle_len = strlen(needle);

	while (len-- >= needle_len)
	{
		if ((strncmp(haystack++, needle, needle_len) == 0))
			return (--haystack);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	const char	*result;
// 	size_t		len;

// 	haystack = "Hello, world!";
// 	needle = "world";
// 	len = strlen(haystack);
// 	result = my_strnstr(haystack, needle, len);
// 	if (result)
// 	{
// 		printf("Substring found at: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}
// 	return (0);
// }
