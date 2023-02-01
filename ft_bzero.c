/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:17:54 by macanald          #+#    #+#             */
/*   Updated: 2023/01/26 13:06:46 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/*#include "libft.h"*/

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

int	main(void)
{
	char	str;

	str = "Hello, World!";
	ft_bzero(str, sizeof(str));
	printf("Cadena con valores nulos: %s\n", str);
	return (0);
}
