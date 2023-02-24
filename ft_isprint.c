/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:59:33 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:00:49 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * If the character is between 32 and 127, return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if the character is printable, 0 if not.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character:");
// 	scanf("%c", &c);
// 	if (ft_isprint(c))
// 		printf("The character %c is printable.\n", c);
// 	else
// 		printf("The character %c is not printable.\n", c);
// 	return (0);
// }
