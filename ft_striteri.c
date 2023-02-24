/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:45:57 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 15:10:36 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

/**
 * Iterate through the string s, passing the index and the address 
 * of each character to the function f
 * 
 * @param s The string to iterate through
 * @param f The function to be applied to each character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	print_and_upper(unsigned int index, char *c)
// {
// 	printf("index: %d, character: %c\n", index, *c);
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int	main(void)
// {
// 	char	*s;
// 	char	*copy;

// 	*s = "hello, world";
// 	copy = strdup(s);
// 	ft_striteri(copy, &print_and_upper);
// 	printf("Result: %s\n", copy);
// 	free(copy);
// 	return (0);
// }
