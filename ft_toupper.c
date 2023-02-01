/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:30:36 by macanald          #+#    #+#             */
/*   Updated: 2023/01/27 17:52:19 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char	input;
	int		output;

	input = 'a';
	output = ft_toupper(input);
	if (output == 'A')
	{
		printf("La función es correcta para el carácter '%c'\n", input);
	}
	else
	{
		printf("La función no es correcta para el carácter '%c'\n", input);
	}
}
