/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:13:52 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 15:04:05 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	* If the first character of needle is found in 'haystack', 
	* then compare the rest of needle to the rest of 'haystack'.
	* Busca la primera ocurrencia de la subcadena 'needle' dentro 
	* de la cadena 'haystack'.
	* 
	* @param haystack The string to search in.
	* La cadena en la que buscar.
	* 
	* @param needle the string to find.
	* La cadena a encontrar.
	* 
	* @param len the maximum number of characters to search in 
	* haystack. El número máximo de caracteres a buscar en pajar.
	* 
	* @return A pointer to the first occurrence of the substring 
	* needle in the string haystack, or a null pointer if the substring 
	* is not found.
	* Si encuentra la subcadena, devuelve un puntero al inicio de la 
	* subcadena dentro de 'haystack', y si no la encuentra, devuelve NULL.
	* 
	* * Required libraries. Librerías necesarias:
	* #include <stdio.h>
	* #include <string.h>
	* 
	**/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	char	*match;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
		{
			match = (char *)haystack;
			return (match);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

	// "if (*needle == '\0') return ((char *)haystack)"
	// Si 'needle' es una cadena vacía, la función devuelve un puntero 
	// al inicio de la cadena 'haystack'.

	// 'needle_len = ft_strlen(needle)'
	// Calcula la longitud de la subcadena 'needle' mediante 
	// la función 'ft_strlen'. 

	// 'while (*haystack && len >= needle_len)'
	// La función itera sobre la cadena 'haystack' mientras haya 
	// caracteres en ella y no se haya llegado al final de la cadena 
	// o se haya superado el límite especificado por 'len'.
	// 'if (ft_strncmp(haystack, needle, needle_len) == 0)'
	// 	Dentro del bucle, la función compara una subcadena de 
	// 	longitud 'needle_len' al inicio de la cadena 'haystack' 
	// 	con la subcadena 'needle', utilizando 'ft_strncmp'. 

	// 		Si las subcadenas son iguales, la función devuelve 
	// 		un puntero al inicio de la subcadena dentro 
	// 		de haystack.
	// 		Si la función sale del bucle sin encontrar la 
	// 		subcadena needle, devuelve NULL.

// int	main(void)
// {
// 	const char	*haystack;
// 	const char	*needle;
// 	char		*result;

// 	haystack = "This is a test string";
// 	needle = "test";
// 	result = ft_strnstr(haystack, needle, ft_strlen(haystack));
// 	if (result != NULL)
// 		printf("Substring '%s' found in '%s'\n", needle, haystack);
// 	else
// 		printf("Substring '%s' not found in '%s'\n", needle, haystack);
// 	return (0);
// }

	// busca la subcadena "test" dentro de la cadena 
	// "This is a test string". Como la subcadena se encuentra 
	// en la cadena, la función devuelve un puntero al inicio 
	// de la subcadena "test".
