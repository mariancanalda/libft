/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:54:55 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:08:14 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/**
 * The function ft_strncmp() compares the first 
 * n characters of the strings s1 and s2
 * 
 * @param s1 The first string to be compared.
 * @param s2 The string to compare to.
 * @param n The maximum number of characters to compare.
 * 
 * @return The difference between the first two characters 
 * that differ in the strings s1 and s2.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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