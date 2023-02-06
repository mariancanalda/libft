/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:32:49 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>
/*#include "libft.h"*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

// void	print_elements(char *array, int size)
// {
// 	printf ("Elements : ");
// 	while (size-- > 0)
// 	{
// 		printf ("%c, ", *array++);
// 	}
// 	printf ("\n");
// }

// int	main(void)
// {
// 	char	c_array [];

// 	c_array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
// 	print_elements(c_array, sizeof(c_array));
// 	printf("After ft_memcpy()\n");
// 	ft_memcpy((void *)&c_array[1], (void *)&c_array[3], 5);
// 	print_elements(c_array, sizeof(c_array));
// }
