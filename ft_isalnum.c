/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:44:42 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:00:02 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * If the character is a letter or a number, return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is alphanumeric, 0 if not.
 */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	input;

// 	printf("Enter a character: ");
// 	scanf("%c", &input);
// 	if (ft_isalnum(input))
// 		printf("Character entered is alphanumeric.\n");
// 	else
// 		printf("Character entered is not alphanumeric.\n");
// 	return (0);
// }