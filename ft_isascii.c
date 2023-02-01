/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:00:30 by macanald          #+#    #+#             */
/*   Updated: 2023/01/26 09:59:20 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include "libft.h"*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	printf("Introduce un caracter: ");
	scanf("%c", &c);
	if (ft_isascii(c))
	{
		printf("El caracter %c es un caracter ASCII\n", c);
	}
	else
	{
		printf("El caracter %c no es un caracter ASCII\n", c);
	}
	return (0);
}
