/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 07:49:18 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * It takes a string and a character, and returns 
	 * an array of strings, each of which is a word from the
	 * original string, separated by the character.
	 * Toma una cadena y un carácter, y devuelve 
	 * una matriz de cadenas, cada una de las cuales es 
	 * una palabra de la cadena original, separada por 
	 * el carácter.
	 * 
	 * @param s The string to be split.
	 * La cadena a dividir.
	 * 
	 * @param c the character to split the string by
	 * el carácter por el que dividir la cadena.
	 * 
	 *  @return A pointer to a pointer to a char.
	 * Devuelve un puntero a un puntero a un char.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdlib.h>
	 * #include <unistd.h>
	 * #include "libft.h"
	 * #include <stdio.h>
	 * 
	 **/

#include "libft.h"

static int	count_words(char const *s, char c);
static char	*get_word(char const *s, char c);
static char	**divide_string(char const *s, char c,
				const int total_words, char **result);
void		free_split(char **split);

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

	// La función count_words toma dos argumentos: una cadena de 
	// caracteres (char const *s) y un carácter 'c'. La función 
	// cuenta el número de palabras en la cadena 's' que están separadas 
	// por el carácter 'c' y devuelve el recuento. 
		// Se define como estática porque su alcance está limitado al 
		// archivo donde se encuentra definida, y no puede ser utilizada 
		// en otros archivos del programa.

	// Se inicializa la variable 'count' a 0. 
	// Se recorre la cadena 's' mientras no se llegue al final de la misma 
	// (mientras el carácter apuntado por el puntero 's' no sea '\0'). 
		// En cada iteración del bucle 'while', se verifica si el 
		// carácter apuntado por 's' es el delimitador 'c'. 
			// Si es así, se incrementa 's' para apuntar al 
			// siguiente carácter. 
			// Si no es así, significa 
		// que se ha encontrado una palabra, por lo que 
		// se incrementa el contador 'count' y se recorre 
		// la palabra hasta llegar al final de la misma 
		// o hasta encontrar el delimitador 'c'.

		// Finalmente, se devuelve el valor de 'count', 
		// que corresponde al número de palabras encontradas 
		// en la cadena 's'.

static char	*get_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

			// La función get_word se encarga de tomar 
			// una cadena de caracteres 's' y un caracter 
			// delimitador 'c' y devuelve una subcadena 
			// de 's' que comienza en el primer carácter 
			// que no es un delimitador y termina en 
			// el siguiente delimitador o en el final 
			// de la cadena. 

			// La función comienza contando la cantidad de 
			// caracteres que hay desde el inicio de 's' 
			// hasta el primer delimitador o el final 
			// de la cadena. Luego, reserva memoria para 
			// la subcadena y utiliza la función 
			// 'ft_strlcpy' (que copia una cadena de un 
			// tamaño máximo dado) para copiar los caracteres 
			// correspondientes de 's' a la nueva subcadena. 
			// Por último, devuelve la subcadena recién creada.

			// Se utiliza memoria dinámica (a través de malloc) 
			// para reservar memoria para la subcadena. Es 
			// responsabilidad del llamador liberar 
			// esta memoria una vez que ya no la 
			// necesite (por ejemplo, a través de 
			// la función free).

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i])
		{	
			free(split[i]);
				i++;
		}	
		free(split);
	}
}

			// Se inicializa una variable entera i con valor cero. 
			// Luego, se verifica que el puntero de entrada 
			// no sea nulo, ya que si lo es, no hay nada que 
			// liberar y se sale de la función. Dentro del 
			// ciclo while, se recorre la matriz de cadenas de 
			// caracteres verificando cada elemento de la matriz 
			// si es nulo o no. Si no es nulo, se libera la memoria 
			// asignada al elemento mediante la función free(). 
			// Después de liberar la memoria de cada elemento 
			// de la matriz, se libera la memoria asignada 
			// a la matriz en sí mediante la función free().

static char	**divide_string(char const *s, char c, const int total_words,
							char **result)
{
	int	i;

	i = 0;
	while (*s && i < total_words)
	{
		if (*s == c)
			s++;
		else
		{
			result[i] = get_word(s, c);
			if (!result[i])
			{
				free_split(result);
				return (NULL);
			}	
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	const int	total_words = count_words(s, c);

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (!result)
		return (NULL);
	result[total_words] = NULL;
	result = divide_string(s, c, total_words, result);
	return (result);
}

			// La función ft_split toma una cadena de caracteres 
			// 's' y un delimitador 'c' y devuelve un array de 
			// punteros a cadenas de caracteres. La cadena 's' 
			// se divide en subcadenas separadas por el 
			// delimitador 'c'. La función cuenta primero 
			// el número de subcadenas que se pueden 
			// extraer de la cadena 's' utilizando la 
			// función 'count_words', luego reserva memoria 
			// para un array de punteros de cadenas de
			// caracteres con 'malloc'. Luego, la función 
			// itera a través de la cadena 's', ignorando 
			// cualquier delimitador 'c', utilizando 
			// la función 'get_word' para extraer cada 
			// subcadena y almacenarla en el array de 
			// punteros. Por último, la función establece 
			// el último elemento del array de punteros 'c'
			// omo NULL y devuelve el array resultante. 
			// Si no se puede asignar memoria para el 
			// array de punteros o para alguna de las 
			// subcadenas, la función devuelve NULL.

// int	main(void)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split("Hello,this,is,an,example", ',');
// 	i = 0;
// 	if (!words)
// 	{
// 		printf("Error separating the string.\n");
// 		return (1);
// 	}
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		i++;
// 	}
// 	free_split(words);
// 	return (0);
// }

			//  El programa comienza llamando a la función 
			// 'ft_split' con una cadena de caracteres y un 
			// delimitador como argumentos. La función 
			// 'ft_split' devuelve un puntero a una matriz 
			// de cadenas de caracteres, donde cada cadena 
			// de caracteres es una subcadena de la cadena 
			// original delimitada por el delimitador.
			// La función main recorre la matriz de cadenas de 
			//  caracteres resultante e imprime cada cadena en 
			//  la consola utilizando la función printf. 
			//  Finalmente, llama a la función free_split 
			//  para liberar la memoria asignada a la matriz 
			//  de cadenas de caracteres y devuelve 0 para 
			//  indicar que el programa ha terminado con éxito. 
			//  Si la matriz de cadenas de caracteres es nula, 
			//  lo que significa que no se pudo separar la 
			//  cadena de entrada, se imprimirá un mensaje 
			//  de error y se devolverá un valor diferente de 
			//  0 para indicar que el programa ha fallado.