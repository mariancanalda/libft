/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:59:33 by macanald          #+#    #+#             */
/*   Updated: 2023/01/26 10:33:19 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	printf("Introduce un caracter: ");
	scanf("%c", &c);
	if (ft_isprint(c))
	{
		printf("El caracter %c es imprimible\n", c);
		else
		{
			printf("El caracter %c no es imprimible\n", c);
			return (0);
		}
	}	
