/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 13:31:18 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

/**
 * It allocates memory for a given size and sets all the bytes to 0.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of the memory block, in bytes.
 * 
 * @return A pointer to the allocated memory.
 */

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
// 		printf("Error while reserving memory.\n");
// 		return (1);
// 	}
// 	printf("Reserved memory address: %p\n", ptr);
// 	free(ptr);
// 	return (0);
// }
