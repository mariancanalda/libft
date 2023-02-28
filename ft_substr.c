/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:51:54 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:37:15 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

/**
 * If the string is NULL, return NULL. If the start index is greater than the length of the string,
 * return an empty string. If the length is greater than the length of the string minus the start
 * index, set the length to the length of the string minus the start index. Allocate memory for the
 * substring, copy the substring into the allocated memory, and return the substring.
 * 
 * @param s The string to be split.
 * @param start the index of the first character to include in the substring.
 * @param len the length of the substring to be returned
 * 
 * @return A pointer to a new string.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// void	ft_print_result(char *str)
// {
// 	if (!str)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", str);
// }

// int	main(void)
// {
// 	char	*str;
// 	char	*strsub;
// 	char	*bullshit;

// 	str = "Hello, World!";
// 	strsub = ft_substr(str, 4, 7);
// 	if (!strsub)
// 		ft_print_result("NULL");
// 	else
// 	{
// 		bullshit = &strsub[3];
// 		ft_strlcpy(bullshit, "bullshit", ft_strlen("bullshit")+1);
// 		ft_print_result(strsub);
// 	}
// 	free(strsub);
// 	return (0);
// }
