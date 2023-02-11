/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:35:04 by macanald          #+#    #+#             */
/*   Updated: 2023/02/11 12:55:56 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
#include <string.h>
// #include "libft.h"

/**
 * This function takes a string and returns the length of the string
 * 
 * @param str This is the string that we are going to find the length of.
 * 
 * @return The length of the string.
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[100];

// 	printf("Introduce una cadena: ");
// 	scanf("%s", str);
// 	printf("La longitud de la cadena es: %lu \n", ft_strlen(str));
// 	return (0);
// }
