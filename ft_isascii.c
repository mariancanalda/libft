/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:00:30 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 13:12:08 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include "libft.h"

/**
 * If the integer passed to the function is between 0 and 127, 
 * return 1, otherwise return 0
 * 
 * @param c The character to be checked.
 * 
 * @return 1 if c is between 0 and 127, 0 otherwise.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	printf("Enter a character: ");
// 	scanf("%c", &c);
// 	if (ft_isascii(c))
// 	{
// 		printf(" %c is an ASCII character.\n", c);
// 	}
// 	else
// 	{
// 		printf("%c is not an ASCII character.\n", c);
// 	}
// 	return (0);
// }
