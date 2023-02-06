/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:35:04 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:34:15 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/
#include <string.h>
/*#include "libft.h"*/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[100];

// 	printf("Introduce una cadena: ");
// 	scanf("%s", str);
// 	printf("La longitud de la cadena es: %lu \n", ft_strlen(str));
// 	return (0);
// }
