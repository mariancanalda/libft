/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:38:57 by macanald          #+#    #+#             */
/*   Updated: 2023/02/14 11:34:15 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
// #include "libft.h"

int	get_string_length(int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (temp)
	{
		len++;
		temp /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;

	len = get_string_length(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

// int	main(void)
// {
// 	int		n;
// 	char	*result;

// 	n = 42;
// 	result = ft_itoa(n);
// 	printf("The string representation of %d is %s\n", n, result);
// 	free(result);
// 	return (0);
// }
