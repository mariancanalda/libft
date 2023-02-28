/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:13:52 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:36:53 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/**
 * If the first character of needle is found in haystack, then compare the rest of needle to the rest
 * of haystack
 * 
 * @param haystack The string to search in
 * @param needle the string to find
 * @param len the maximum number of characters to search in haystack
 * 
 * @return A pointer to the first occurrence of the substring needle in the string haystack, or a null
 * pointer if the substring is not found.
 */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*match;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			match = (char *)haystack;
			return (match);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	char		*result;

// 	haystack = "This is a test string";
// 	needle = "test";
// 	result = ft_strnstr(haystack, needle, ft_strlen(haystack));
// 	if (result != NULL)
// 		printf("Substring '%s' found in '%s'\n", needle, haystack);
// 	else
// 		printf("Substring '%s' not found in '%s'\n", needle, haystack);
// 	return (0);
// }
