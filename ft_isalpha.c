/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:00:39 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

/**
 * The function ft_isalpha() returns 1 if the character passed 
 * as an argument is an alphabetical character, and 0 if it is not
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is a letter, 0 if not.
 */

int	ft_isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character: ");
// 	scanf("%c", &c);
// 	if (ft_isalpha(c))
// 	{
// 		printf("The character %c is a letter.\n", c);
// 	}
// 	else
// 	{
// 		printf("The character %c is not a letter.\n", c);
// 	}
// 	return (0);
// }
