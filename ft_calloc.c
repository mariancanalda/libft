/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/02/01 16:52:25 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t 	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL) 
	{
		return (NULL);
    }
	for (size_t i = 0; i < total_size; i++) 
	{
		*((char*)ptr + i) = 0;
	}
	return (ptr);
}

int	main (void) 
{
	int	n;
	int	*ptr;

    n = 5;
	ptr = (int*) ft_calloc(n, sizeof(int));
	if (ptr == NULL) 
	{
		printf("Error allocating memory!\n");
        return (1);
	}
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
	free(ptr);
	return (0);
}
