/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:22:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:31:40 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <ctype.h>
/*#include "libft.h"*/

int	ft_isalpha(int c)

{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	c;

// 	printf("Introduce un caracter: ");
// 	scanf("%c", &c);
// 	if (ft_isalpha(c))
// 	{
// 		printf("El carácter %c es una letra.\n", c);
// 	}
// 	else
// 	{
// 		printf("El carácter %c no es una letra.\n", c);
// 	}
// 	return (0);
// }
