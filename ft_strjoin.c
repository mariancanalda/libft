/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:20:36 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 19:34:14 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

// int main(void)
// {
//     char *s1 = "Hello";
//     char *s2 = " World!";
//     char *result = ft_strjoin(s1, s2);
//     if (!result)
//     {
//         printf("Error: failed to allocate memory for result.\n");
//         return (1);
//     }
//     printf("s1 = %s\n", s1);
//     printf("s2 = %s\n", s2);
//     printf("result = %s\n", result);
//     free(result);
//     return (0);
// }