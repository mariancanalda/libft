/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:38:42 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 08:04:26 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strlcat = "string length concatenate"
	 * 
	 * Appends the NUL-terminated string src to the end of dst. 
	 * It will append at most dstsize - strlen(dst) - 1 bytes, 
	 * NUL-terminating the result.
	 * Concatena dos cadenas de caracteres, 'src' y'dst', y 
	 * devuelve el tamaño total de la cadena resultante, 
	 * con una restricción en el tamaño máximo permitido
	 * para la cadena de destino 'dst'.
	 * 
	 * @param dst This is the destination string.
	 * Es la cadena de destino.
	 * 
	* @param src The string to be appended.
	 * La cadena a añadir.
	 * 
	 * @param dstsize The size of the destination buffer.
	 * El tamaño del búfer de destino.
	 * 
	 * @return The length of the string it tried to create.
	 * Devuelve la longitud de la cadena que intentó crear.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	if (dstsize <= len)
	{
		return (dstsize + ft_strlen(src));
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
	// Se determina la longitud de la cadena de destino.
	// 'i = 0' Se inicializa i en 0
	// 'while (dst[i] != '\0')' 
	// Se recorre el array hasta encontrar el carácter nulo.
	// 'i++' En cada iteración se incrementa el valor de 'i'.
	// 'len = i' Se asigna a 'len' el valor de 'i'.
	// (la cantidad de caracteres que hay hasta el carácter nulo).

	// La condición 'if (dstsize <= len)' verifica si el tamaño 
	// máximo permitido para la cadena de destino (dstsize) 
	// es menor o igual al tamaño actual de la cadena 'dst'. 

		// 	'return (dstsize + ft_strlen(src))'
		// Si se cumple, significa que la cadena 'dst' ya 
		// 	está llena hasta su capacidad máxima y no hay 
		// 	espacio para agregar más caracteres de la cadena 
		// 'src'. la función devuelve el tamaño de la cadena 
		// 	truncada de 'dst' más el tamaño de 'src'.

	// 'while (src[j] != '\0' && i < dstsize - 1)''
	// La condición del ciclo while tiene dos partes: 
	// la primera parte 'src[j] != '\0''' verifica que no se 
	// haya llegado al final de la cadena 'src', y la segunda parte 
	// 'i < dstsize - 1' verifica que aún hay espacio en el 
	// búfer de 'dst' para agregar más caracteres (se reserva un 
	// espacio para el caracter nulo al final de 'dst').

		// dst[i] = src[j] asigna el valor del carácter de 'src' 
		// que se encuentra en la posición 'j' a la posición 'i' 
		// de 'dst'. Luego, 'i' se incrementa en 1 para indicar 
		// que se ha copiado un carácter a 'dst', y 'j' también 
		// se incrementa en 1 para que en la siguiente iteración 
		// se copie el siguiente carácter de 'src'.

		// Luego incrementan los índices 'i' y 'j' para que en 
		// la siguiente iteración se copie el siguiente carácter.

	// 'dst[i] = '\0'' se utiliza para asegurarse de que la cadena 
	// de destino tenga un terminador nulo al final después de haber 
	// concatenado la cadena de origen.

	// 'return (len + ft_strlen(src))' devuelve el tamaño total de la 
	// cadena resultante, que es la longitud de la cadena de destino 
	// original'len' más la longitud de la cadena de origen 'src'.

// int	main(void)
// {
// 	char	*src;
// 	char	dst[20];
// 	size_t	dstsize;
// 	size_t	concatenated_length;

// 	src = "World!";
// 	ft_strlcpy (dst, "Hello, ", sizeof(dst));
// 	dstsize = sizeof(dst);
// 	concatenated_length = ft_strlcat(dst, src, dstsize);
// 	printf("Concatenated string: %s\n", dst);
// 	printf("Length of concatenated string: %ld\n", concatenated_length);
// 	return (0);
// }

	// char *src Se declara un puntero a una cadena de caracteres 
	// llamado 'src'.

	// char dst[20] Se declara un arreglo de caracteres llamado 
	// 'dst', que tiene una longitud de 20 caracteres.

	// size_t dstsize Se declara una variable de tipo size_t 
	// llamada 'dstsize'.

	// size_t concatenated_length Se declara una variable 
	// de tipo size_t llamada 'concatenated_length'.

	// src = "World!" Se asigna la dirección de la cadena 
	// de caracteres "World!" al puntero 'src'.

	// ft_strlcpy (dst, "Hello, ", sizeof(dst)) Se copia la 
	// cadena de caracteres "Hello, " al arreglo 'dst' utilizando 
	// la función 'ft_strlcpy()'. El tercer argumento es sizeof(dst), 
	// que especifica el tamaño máximo de la cadena de caracteres 
	// que puede ser copiada.

	// dstsize = sizeof(dst) Se asigna el tamaño de 'dst' a 
	// la variable dstsize.

	// concatenated_length = ft_strlcat(dst, src, dstsize); 
	// Se concatena la cadena de caracteres 'src' al final de 'dst' 
	// utilizando la función ft_strlcat(), y se asigna la longitud 
	// resultante de la cadena concatenada a la variable 
	// 'concatenated_length'. El tercer argumento es 'dstsize', 
	// que especifica el tamaño máximo de la cadena concatenada.

	// printf("Concatenated string: %s\n", dst);
	// Se imprime en la consola la cadena de caracteres resultante 
	// de la concatenación.

	// printf("Length of concatenated string: %ld\n", 
	// concatenated_length) Se imprime en la consola la longitud
	// de la cadena concatenada.

	// return (0) Se indica que el programa ha terminado 
	// correctamente y se devuelve el valor 0.