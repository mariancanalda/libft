/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:54:55 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:34:34 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>*/
/*#include "libft.h"*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	const char	s1[];
// 	const char	s2[];
// 	size_t		n;
// 	int			result;

// 	s1[6] = "Hello";
// 	s2[6] = "Hello";
// 	n = 5;
// 	result = ft_strncmp(s1, s2, n);
// 	printf("ft_strncmp = %d\n", result);
// 	return (0);
// }
