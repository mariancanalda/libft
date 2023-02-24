/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:38:57 by macanald          #+#    #+#             */
/*   Updated: 2023/02/23 14:57:07 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = (n < 0);
	len = ft_get_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--len] = '0' + n % 10;
		else
			str[--len] = '0' - n % 10;
		n /= 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 123;
// 	str = ft_itoa(n);
// 	printf("El entero n es %d y su representación en cadena es %s\n", n, str);
// 	free(str);
// 	return (0);
// }
