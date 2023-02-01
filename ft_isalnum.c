/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:44:42 by macanald          #+#    #+#             */
/*   Updated: 2023/01/25 17:41:32 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include "libft.h"*/

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	char	input;

	printf("Ingresa un caracter: ");
	scanf("%c", &input);
	if (ft_isalnum(input))
		printf("El caracter ingresado es alfanumérico.\n");
	else
		printf("El caracter ingresado no es alfanumérico.\n");
	return (0);
}
