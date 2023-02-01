/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/01/26 12:03:36 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t	i;
	
	p = b;
	i = 0;
	
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
return (b);
}

int main(void) 
{
	char str[42];
	ft_memset(str, '*', sizeof(str));
	printf("Cadena rellenada con asteriscos: %s\n", str);
	return (0);
}
