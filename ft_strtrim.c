/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:08:00 by macanald          #+#    #+#             */
/*   Updated: 2023/02/11 17:49:36 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trimmed_str;

	i = 0;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	j = strlen(s1) - 1;
	while (j > 0 && strchr(set, s1[j]))
		j--;
	trimmed_str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!trimmed_str)
		return (NULL);
	k = 0;
	while (i <= j)
		trimmed_str[k++] = s1[i++];
	trimmed_str[k] = '\0';
	return (trimmed_str);
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
