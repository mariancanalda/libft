/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:33:10 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:33:12 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * 'strdup' = "string duplicate"
 * 
 * It duplicates a string.
 * Duplica una cadena de caracteres en una nueva ubicación de memoria.
 * 
 * @param s1 The string to be copied.
 * La cadena a copiar.
 * 
 * @return A pointer to a new string that is a 
 * duplicate of the string s1.
 * Devuelve un puntero a una nueva cadena que es un 
 * duplicado de la cadena s1.
 * 
 * Required libraries. Librerías necesarias:
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <string.h>
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = ft_strlen(s1);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, len + 1);
	return (result);
}

		// Recibe como argumento un puntero a una cadena 
		// de caracteres 's1'.

		// len = ft_strlen(s1) llama a la función 'ft_strlen' 
		// para determinar la longitud de la cadena de entrada 
		// 's1', y asigna el valor de retorno a la variable 'len'.

		// 'result = (char *)malloc((len + 1) * sizeof(char))'
		// Reserva un bloque de memoria del tamaño suficiente para 
		// contener la cadena 's1' más un byte adicional para el caracter 
		// nulo al final de la cadena. 
		// 	El tipo de datos se convierte a un puntero de 
		// 	tipo char, ya que malloc devuelve un puntero de 
		// 	tipo void. 

		// 'if (result == NULL) return (NULL)'	Si malloc devuelve un 
		// puntero nulo, lo que significa que no se pudo reservar 
		// la memoria solicitada, la función devuelve un puntero nulo.

		// ft_memcpy(result, s1, len + 1) copia la cadena de entrada 's1' 
		// en la memoria asignada a 'result', incluyendo el caracter 
		// nulo final.  

		// 'return (result)' Devuelve el puntero result, que apunta a la 
		// copia de la cadena de entrada s1 que se ha creado.

// int	main(void)
// {
// 	const char	*s1;
// 	char		*result;

// 	s1 = "Hello World";
// 	result = ft_strdup(s1);
// 	if (result == NULL)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }

	// Se define una cadena de caracteres 's1'. 

	// Se llama a la función 'ft_strdup' para crear una copia de
	// la cadena 's1'. 
	// 	Si la asignación de memoria con 'malloc' falla, la función
	// 	'ft_strdup' devuelve NULL. Se imprime un mensaje de error 
	// 	y se termina el programa con un valor de retorno diferente 
	// 	de cero. 

	// 	Si la asignación de memoria tiene éxito, se imprime la copia
	// 	de la cadena 's1', se libera la memoria asignada por 'malloc' 
	// 	utilizando 'free', y el programa termina con un valor de 
	// 	retorno de cero.