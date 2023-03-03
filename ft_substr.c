/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:51:54 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 18:13:35 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include "libft.h"

/**
 * If the string is NULL, return NULL. If the start index is 
 * greater than the length of the string,return an empty 
 * string. If the length is greater than the length of the 
 * string minus the start index, set the length to the 
 * length of the string minus the start index. 
 * Allocate memory for the substring, copy the substring 
 * into the allocated memory, and return the substring.
 * 
 * El código proporciona una función llamada ft_substr que toma una 
 * cadena s y devuelve una subcadena que comienza en la posición 
 * start y tiene una longitud máxima de len. La función reserva 
 * la memoria necesaria para la nueva cadena usando malloc, y 
 * luego copia la subcadena correspondiente de s en la nueva 
 * cadena utilizando la función ft_strlcpy.
 * 
 * @param s The string to be split.
 * @param start the index of the first character to include 
 * in the substring.
 * @param len the length of the substring to be returned
 * 
 * @return A pointer to a new string.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// Declarar una cadena substr, que se usará para almacenar 
// la subcadena. Si la cadena de entrada s es nula, entonces 
// la función devuelve un puntero nulo. Luego, la función 
// comprueba si el índice de inicio start está 
// más allá de la longitud de la cadena s. Si es así, entonces 
// la función devuelve una cadena vacía utilizando malloc 
// para reservar memoria para un solo carácter nulo.

// Si start es menor que la longitud de s, la función continúa 
// comprobando si len es mayor que la longitud de la subcadena 
// que comienza en la posición start. Si es así, entonces la 
// longitud len se ajusta para que no sea mayor que la longitud 
// de la subcadena que comienza en la posición start.

// Luego, la función reserva la memoria necesaria para 
// almacenar la subcadena utilizando malloc. Si la 
// reserva de memoria falla, entonces la función 
// devuelve un puntero nulo.

// La función copia la subcadena correspondiente de s en la 
// nueva cadena substr utilizando ft_strlcpy. La nueva cadena 
// se devuelve como resultado de la función.

// void	ft_print_result(char *str)
// {
// 	if (!str)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", str);
// }

// La función ft_print_result imprime la cadena que 
// se le pasa como argumento. 
// Si la cadena es nula, imprime la cadena "NULL".

// int	main(void)
// {
// 	char	*str;
// 	char	*strsub;
// 	char	*bullshit;

// 	str = "Hello, World!";
// 	strsub = ft_substr(str, 4, 7);
// 	if (!strsub)
// 		ft_print_result("NULL");
// 	else
// 	{
// 		bullshit = &strsub[3];
// 		ft_strlcpy(bullshit, "bullshit", ft_strlen("bullshit")+1);
// 		ft_print_result(strsub);
// 	}
// 	free(strsub);
// 	return (0);
// }

// Se declara una cadena str, que se establece en "Hello, World!".
// A continuación, se llama a ft_substr para obtener una subcadena 
// de str que comienza en la posición 4 y tiene una longitud 
// máxima de 7 caracteres. La nueva subcadena se almacena 
// en la variable strsub. Si la subcadena es nula, se 
// imprime "NULL" utilizando ft_print_result. Si no, se 
// declara un puntero bullshit que se establece en la 
// dirección del cuarto carácter de strsub. Luego, se 
// utiliza ft_strlcpy para copiar la cadena "bullshit" 
// en bullshit, reemplazando los caracteres que se 
// encontraban allí antes. Por último, se imprime 
// la subcadena resultante utilizando ft_print_result, 
// y se libera la memoria reservada para strsub.