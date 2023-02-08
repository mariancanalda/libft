/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:33:10 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 17:10:24 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libft.h"

/**
 * It duplicates a string.
 * 
 * @param s1 The string to be copied.
 * 
 * @return A pointer to a new string that is a duplicate of the string s1.
 */

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = strlen(s1);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, len + 1);
	return (result);
}

// int	main(void)
// {
// 	const char	*s1;
// 	char		*result;

// 	s1 = "Hello World";
// 	result = ft_strdup(s1);
// 	if (result == NULL)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
