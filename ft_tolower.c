/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:40:56 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:37:24 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * If the character is uppercase, add 32 to it
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase version of the character.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	input;
// 	int		output;

// 	input = 'A';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'Z';
// 	output = ft_tolower(input);
// 	if (output == 'z')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'a';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = '1';
// 	output = ft_tolower(input);
// 	if (output == '1')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	return (0);
// }
