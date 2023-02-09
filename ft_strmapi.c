/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:46:34 by macanald          #+#    #+#             */
/*   Updated: 2023/02/09 16:53:20 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

/**
 * It takes a string and a function, and returns a new string where 
 * each character is the result of the function applied to the corresponding
 * character of the original string
 * 
 * @param s The string to be mapped.
 * @param f The function to be applied to each character of the string.
 * 
 * @return A pointer to a new string.
 */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	to_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("hello, world", to_upper);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }