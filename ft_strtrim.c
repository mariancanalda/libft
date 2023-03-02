/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:08:00 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:40:32 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"

/**
 * It returns 1 if the character c is in the string set, 
 * and 0 otherwise
 * 
 * @param c The character to check.
 * @param set The set of characters to be searched.
 * 
 * @return The number of words in the string.
 */

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// La función is_set es una función auxiliar que devuelve 1 
// si un carácter c se encuentra en un conjunto de caracteres
// set y 0 en caso contrario.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
	{
		while (is_set(s1[start + end - 1], set))
			end--;
	}
	return (ft_substr(s1, start, end));
}

// La función ft_strtrim recibe como parámetros una cadena de 
// caracteres s1 y un conjunto de caracteres set. El objetivo 
// de esta función es eliminar los caracteres que se encuentran 
// en set al principio y al final de la cadena s1. Para ello, 
// se utiliza la función auxiliar is_set para determinar si el 
// primer carácter de la cadena s1 se encuentra en set. 
// Si es así, se incrementa un índice start hasta que se 
// encuentra un carácter que no se encuentra en set. 
// A continuación, se determina la longitud de la subcadena 
// que no contiene caracteres de set a partir del índice start 
// y se almacena en la variable end. Luego, se utiliza un bucle 
// para decrementar la variable end mientras el último carácter 
// de la subcadena se encuentre en set. Finalmente, se devuelve 
// la subcadena que comienza en start y tiene longitud end 
// utilizando la función ft_substr.

// int	main(void)
// {
// 	char const	*s1;
// 	char		*set;
// 	char		*trimmed_str;

// 	s1 = "  Hello, World!  ";
// 	set = " !";
// 	trimmed_str = ft_strtrim(s1, set);
// 	printf("The trimmed string is: %s\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }

// Se utiliza ft_strtrim para eliminar los espacios y 
// signos de exclamación al principio y al final 
// de la cadena " Hello, World! ". 

// El resultado es una nueva cadena "Hello, World" 
// que se almacena en la variable trimmed_str y 
// se imprime en la salida estándar.

//  La memoria asignada a trimmed_str se libera 
//  utilizando la función free.
