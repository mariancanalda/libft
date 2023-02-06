/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:31:23 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>
/*#include "libft.h"*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	int		*ptr;
// 	size_t	count;
// 	size_t	size;

// 	count = 5;
// 	size = sizeof(int);
// 	ptr = ft_calloc(count, size);
// 	if (ptr == NULL)
// 	{
// 		printf("Error al reservar memoria\n");
// 		return (1);
// 	}
// 	printf("Dirección de memoria reservada: %p\n", ptr);
// 	free(ptr);
// 	return (0);
// }
