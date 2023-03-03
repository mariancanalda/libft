/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:05:18 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:33:06 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strchr' = "string character"
	 * 
	 * Locates the first occurrence of'c' (converted to a char) 
	 * in the string pointed to by 's'.
	 * Localiza la primera aparición de 'c' (convertida a un char) 
	 * en la cadena apuntada por 's'.
	 * 
	 * @param s The string to search. 
	 * La cadena a buscar.
	 * 
	 * @param c The character to search for.
	 * El carácter a buscar.
	 * 
	 * @return A pointer to the first occurrence of the character 
	 * c in the string s.
	 * Devuelve un puntero a la primera aparición del carácter 
	 * c en la cadena s.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

	// Se declara una variable 'ch' que almacena el carácter buscado 
	// convertido a unsigned char. 

	// 'while (*s != '\0')'
	// Se utiliza un bucle while para iterar sobre cada carácter de la 
	// cadena 's' mientras no se llegue al final de la cadena 
	// (el carácter nulo '\0'). 
	// 	'if (*s == ch)'
	// 	Dentro del bucle, se compara cada carácter con 'ch'. 
	// 		'return ((char *)s)'
	// 		Si se encuentra una coincidencia, se devuelve un puntero 
	// 		al carácter encontrado, lo que indica que se ha encontrado 
	// 		el carácter buscado en la cadena.

	// 'if (ch == '\0')''
	// Si se llega al final de la cadena y no se ha encontrado ch, 
	// se verifica si 'ch' es el carácter nulo '\0'. 
	// 	'return ((char *)s)'
	// 	Si es así, se devuelve un puntero al final 
	// 	de la cadena, lo que indica que se ha llegado al final 
	// 	de la cadena sin encontrar el carácter buscado. 

	// 	'return (NULL)' Si 'ch' no es el carácter nulo, 
	// 	se devuelve un puntero nulo, lo que indica que 
	// 	no se ha encontrado el carácter en la cadena.

// int	main(void)
// {
// 	char		*res;
// 	const char	*str;

// 	str = "Search for a letter";
// 	res = ft_strchr(str, 'l');
// 	if (res == NULL)
// 	{
// 		printf("Character not found in string\n");
// 	}
// 	else
// 	{
// 		printf("The character was found in position: %ld\n", res - str + 1);
// 	}
// 	return (0);
// }

	// Se define una cadena 'str' 

	// res = ft_strchr(str, 'l')
	// Se llama a 'ft_strchr' para buscar el carácter 'l' en la cadena.
		// 	if (res == NULL) Si no se encuentra el carácter,
		// se imprime un mensaje indicando que no se ha encontrado.

		// 	Si se encuentra el carácter, se imprime su posición 
		// 	en la cadena. 

	// Devuelve 0, lo que indica que el programa ha terminado correctamente.