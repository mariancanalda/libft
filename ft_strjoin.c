/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:20:36 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:52:34 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strjoin' = 'string join'
	 * It takes two strings and returns a new string that is 
	 * the concatenation of the two strings
	 * La función ft_strjoin une dos cadenas de caracteres en una sola 
	 * cadena, que es devuelta como resultado.
	 * 
	 * @param s1 The first string to be joined.
	 * La primera cadena a unir.
	 * 
	 *  @param s2 the string to be appended to s1.
	 *  La cadena que se añadirá a s1
	 * 
	 * @return A pointer to a new string that is the result of the 
	 * concatenation of s1 and s2.
	 * Devuelve un puntero a una nueva cadena que es el resultado de la 
	 * concatenación de s1 y s2.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 * */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

	// 'if (!s1 || !s2)'
	// La función comprueba si s1 y s2 existen y no son NULL. 
	// 'return (NULL)'
	// Si una de las cadenas es NULL, la función devuelve NULL. 

	// 'result = (char *)malloc(sizeof(char) * (ft_strlen(s1) 
	// + ft_strlen(s2) + 1))'
	// 	Sea signa a la variable 'result' un bloque de memoria dinámica 
	// usando la función'malloc'. 
	// 	Se reserva suficiente memoria para contener la concatenación de 
	// dos cadenas de caracteres junto con el carácter nulo de terminación.

	// Para determinar el tamaño necesario para la memoria que 
	// se va a asignar, se utiliza la función 'ft_strlen' para obtener 
	// la longitud de cada cadena s1 y s2. 
	// Luego se suma la longitud de ambas cadenas más 1 para tener 
	// en cuenta el carácter nulo de terminación.

	// La expresión (char *) antes de la llamada a malloc es un tipo 
	// de conversión que convierte el puntero devuelto por malloc 
	// de tipo void * a un puntero de tipo char *. 
	// Esto se hace porque el tipo de dato devuelto por malloc 
	// es un puntero a void, lo que significa que puede apuntar 
	// a cualquier tipo de dato. 
	// Al convertirlo a un puntero de tipo char *, se indica que 
	// la memoria reservada se utilizará para almacenar caracteres.

	// 'if (!result) return (NULL)' Si la llamada a malloc falla, 
	// devuelve NULL.

	// 'while (s1[i]) result[i] = s1[i] i++'
	// La función copia cada carácter de la cadena 's1' en la nueva 
	// cadena 'result', 
	// hasta que se encuentre el carácter nulo (\0).
	// 	'i' se inicializa en 0 y se utiliza para copiar los caracteres 
	// de la cadena 's1' en el resultado. Luego se incrementa 'i' hasta 
	// que se alcanza el final de 's1'.

	// 'while (s2[j]) result[i + j] = s2[j] j++;'
	// La función copia cada carácter de la cadena 's2' en la nueva 
	// cadena 'result', a partir del índice 'i', que es el índice donde 
	// termina la cadena 's1'.
	// 	Se inicializa 'j' en 0 y se utiliza para copiar los 
	// caracteres de la cadena 's2' en el resultado, comenzando en la 
	// posición 'i' del resultado. 
	// 	Luego se incrementa 'j' hasta que se alcanza el final 
	// de 's2'.

	// 'result[i + j] = '\0''
	// La función agrega el carácter nulo (\0) al final de la 
	// nueva cadena result, para indicar el final de la cadena.

	// return (result);
	// La función devuelve la nueva cadena result.

// int main(void)
// {
//     char *s1;
//     char *s2;
//     char *result;

// 	*s1 = "Hello";
//     *s2 = " World!";
//     *result = ft_strjoin(s1, s2);
//     if (!result)
//     {
//         printf("Error: failed to allocate memory for result.\n");
//         return (1);
//     }
//     printf("s1 = %s\n", s1);
//     printf("s2 = %s\n", s2);
//     printf("result = %s\n", result);
//     free(result);
//     return (0);
// }

	// *s1 = "Hello";
	// *s2 = " World!";
	// Se definen dos cadenas de caracteres s1 y s2. 

	// *result = ft_strjoin(s1, s2);
	// Se llama a 'ft_strjoin' con s1 y s2 como argumentos. 

	// 	'if (!result) printf("Error: failed to allocate memory 
	// 	for result.\n") return (1)'
	// 	Si 'ft_strjoin' devuelve NULL, se imprime un mensaje 
	// 	de error. 

	// 	'printf("s1 = %s\n", s1)
	// 	printf("s2 = %s\n", s2)
	// 	printf("result = %s\n", result)'
	// 	Si la función no devuelve NULL, se imprime cada cadena 
	// 	y la cadena de resultado.

	// 'free(result)'' 
	// Se libera la memoria asignada a la cadena de resultado.