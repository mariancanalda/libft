/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 20:13:04 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memchr' = "memory character"
	 * 
	 * The function ft_memchr() locates the first occurrence of 'c' 
	 * (converted to an 'unsigned char') in string 's'.
	 * * La función ft_memchr() localiza la primera aparición de 'c' 
	 * (convertido a un 'char sin signo') en la cadena 's'.
	 * 
	 * @param s The string to search. Cadena a buscar.
	 * @param c The character to search for. Carácter a buscar.
	 * @param n The number of bytes to be searched. Número de bytes a buscar.
	 * 
	 * @return A pointer to the first occurrence of the character 'c' 
	 * in the first 'n' bytes of the string pointed to, by the argument'str'.
	 * @return devuelve un puntero a la primera aparición del carácter 'c' 
	 * en los primeros 'n' bytes de la cadena apuntada por el argumento 'str'.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <string.h>
	 **/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[15];
// 	char	c;
// 	char	*result;

// 	ft_strlcpy(str, "Hello, World!", sizeof(str));
// 	c = 'o';
// 	result = ft_memchr(str, c, ft_strlcpy(NULL, str, 0));
// 	if (result == NULL)
// 		printf("Character '%c' not found\n", c);
// 	else
// 		printf("Character '%c' found at position %ld\n", c, result - str);
// 	return (0);
// }
