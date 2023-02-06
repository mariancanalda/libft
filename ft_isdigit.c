/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:42:54 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:32:15 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/      
/*#include "libft.h"*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("El caracter '%c' es un dígito numérico\n", c);
// 	}
// 	else
// 	{
// 		printf("El caracter '%c' no es un dígito numérico\n", c);
// 	}
// 	return (0);
// }
