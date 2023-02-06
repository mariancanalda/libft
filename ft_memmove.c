/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/02/06 18:33:08 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <string.h>
/*#include "libft.h"*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d = d + len - 1;
		s = s + len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}

// void	print_elements(char *array, int size)
// {
// 	int	i;

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%c ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

// int	main(void)
// {
// 	char	c_array[10];

// 	memcpy(c_array, "0123456789", 10);
// 	print_elements(c_array, 10);
// 	printf("After ft_memmove()\n");
// 	ft_memmove((void *)&c_array[1], (void *)&c_array[3], 5);
// 	print_elements(c_array, 10);
// 	return (0);
// }
