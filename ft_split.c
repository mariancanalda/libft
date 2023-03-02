/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 00:16:24 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * It takes a string and a character, and returns an array of strings, 
	 * each of which is a word from the original string, separated 
	 * by the character.
	 * Toma una cadena y un carácter, y devuelve una matriz de cadenas, 
	 * cada una de las cuales es una palabra de la cadena original, separada 
	 * por el carácter.
	 * 
	 * @param s The string to be split. 
	 * La cadena a dividir.
	 * 
	 * @param c the character to split the string by
	 * El carácter por el que dividir la cadena.
	 * 
	 *  @return A pointer to a pointer to a char.
	 * Devuelve un puntero a un puntero a un char.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdlib.h>
	 * #include <unistd.h>
	 * #include <stdio.h>
	 * 
	 **/

#include "libft.h"

static int	count_words(char const *s, char c);
static char	*get_word(char const *s, char c);
static char	**divide_string(char const *s, char c, \
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

	// La función count_words toma dos argumentos: una cadena de caracteres 
	// (char const *s) y un carácter 'c'. La función cuenta el número de 
	// palabras en la cadena 's' que están separadas por el carácter 'c' 
	// y devuelve el recuento. 

	// Se define como estática porque su alcance está limitado al archivo 
	// donde se encuentra definida, y no puede ser utilizada en otros 
	// archivos del programa.

	// count = 0 Se inicializa la variable 'count' a 0. 

	// while (*s) Se recorre la cadena 's' mientras no se llegue al final 
	// (mientras el carácter apuntado por el puntero 's' no sea '\0'). 
			// if (*s == c) En cada iteración del bucle 'while', verifica 
			// si el carácter apuntado por 's' es el delimitador 'c'. 
			// s++ Si es así, se incrementa 's' para apuntar al 
			// siguiente carácter. 
			// Si no es así, significa que se ha encontrado una palabra, 
			// por lo que se incrementa el contador 'count' (count++) y 
			// se recorre la palabra (s++;) hasta llegar al final de la 
			// misma o hasta encontrar el delimitador 'c'. 
			// (while (*s && *s != c))

	// Finalmente, se devuelve el valor de 'count', que corresponde al número 
	// de palabras encontradas en la cadena 's'.

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

	// La función 'get_word' devuelve una subcadena de 's' que comienza 
	// en el primer carácter que no es un delimitador y termina en el 
	// siguiente delimitador o en el final de la cadena. 

	// La función comienza utilizando un bucle 'while (s[len] && s[len] != c)' 
	// para contar el número de caracteres en la subcadena, deteniéndose
	// se llega al final de la cadena 's' o cuando se encuentra el carácter 'c'.
		// El bucle incrementa la variable 'len' en cada iteración 
		// mientras s[len] no sea igual a c.  

	// 'word = (char *)malloc(sizeof(char) * (len + 1))' se utiliza 
	// para asignar memoria dinámica en C para una cadena de caracteres 
	// que tiene una longitud de len más un carácter nulo, utilizando 
	// 'malloc'. Si la asignación falla devuelve nulo. El resultado de 
	// 'malloc' se almacena en 'word', que es un puntero que apunta al 
	// inicio del bloque de memoria asignado.

	// Utiliza 'ft_strlcpy' (que copia una cadena de un tamaño máximo dado) 
	// para copiar los caracteres correspondientes de 's' a la nueva 
	// subcadena. 

	// Por último, devuelve la subcadena recién creada.

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

	// La función free_split es útil cuando se trabaja con matrices 
	// de cadenas de caracteres asignadas dinámicamente en C y se desea 
	// liberar la memoria asignada a la matriz y a sus elementos una 
	// vez que ya no son necesarios.

	// Se inicializa una variable entera 'i' con valor cero. 

	// 'if (split)' verifica que el puntero de entrada no sea nulo
	// (si realmente apunta a una matriz de cadenas de caracteres asignada 
	// previamente). 
		// 	Si es nulo, no hay nada que liberar y se sale de la función. 
		// 	Si no es nulo, la función entra en un bucle "while" que recorre 
		// 	cada cadena de caracteres en la matriz de cadenas

	// 'while (split[i])' Dentro de while, se recorre la matriz 
	// de cadenas de caracteres verificando cada elemento de la matriz 
	// si es nulo o no.
		//  Si no es nulo, se libera la memoria asignada al elemento 
		// mediante free().  Luego, incrementa la variable "i" para 
		// pasar a la siguiente cadena de caracteres.

	//  Después de liberar la memoria de cada elemento de la matriz, se 
	// libera la memoria asignada a la matriz en sí mediante la función 
	// free().

	// El tipo de retorno es "void", lo que significa que la función 
	// no devuelve ningún valor.

static char	**divide_string(char const *s, char c, const int total_words, \
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

	// Recibe cuatro argumentos: 
		// un puntero a una cadena de caracteres (char const *s)
		// un carácter (char c)
		// un número entero (const int total_words)
		// un puntero a un arreglo de punteros a caracteres (char **result).

	// Tiene como objetivo dividir la cadena 's' en varias subcadenas 
	// utilizando el carácter 'c' como separador, y almacenar cada 
	// subcadena en una posición del array 'result'.

	// 'while (*s && i < total_words)' La función itera sobre la cadena 's' 
	// hasta que se hayan dividido todas las palabras especificadas 
	// en 'total_words'.

		// if (*s == c) En cada iteración, verifica si el carácter actual 
		// apuntado por 's' es igual a 'c'.
			// s++; Si es 'c'', avanza al siguiente carácter de la cadena 's'. 

			// result[i] = get_word(s, c); Si no es 'c', llama a la función 
			// 'get_word' para obtener la subcadena que va desde el carácter 
			// actual apuntado por 's' hasta el siguiente carácter igual a 
			// 'c', y la almacena en la posición 'i' del arreglo result. 

			// if (!result[i]) se utiliza para verificar si la asignación
			// de result[i] tuvo éxito. 
				// Si 'get_word' devuelve un puntero nulo, lo que indica un 
				// error, la función 'divide_string' libera la memoria 
				// asignada a 'result' llamando a la función 'free_split' 
				// y devuelve un puntero nulo.

			// while (*s && *s != c) La función avanza 's++' hasta el 
			// siguiente carácter igual a 'c' o hasta el final de la cadena 
			// 's', y aumenta 'i' en uno.

		// El ciclo termina cuando se han encontrado 'total_words' subcadenas o 
		//se ha llegado al final de la cadena 's'.

	// 'return (result)' La función devuelve un puntero al arreglo 'result', 
	// que contiene las subcadenas obtenidas a partir de 's'.

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
	// Toma una cadena de caracteres "s" y un carácter "c" como entrada, 
	// y devuelve una matriz de cadenas de caracteres que representa 
	// las palabras en la cadena original separadas por el carácter "c".

	// 'const int	total_words = count_words(s, c)' 
	// llama a 'count_words' (que cuenta el número total de 
	// palabras en la cadena de entrada "s") para poder asignar 
	// correctamente la memoria necesaria para la matriz de 
	// cadenas de caracteres que se devolverá. 
		// Esta variable se declara como 'const' porque su valor 
		// no se espera que cambie. De esta manera, se garantiza 
		// que el valor almacenado en "total_words" no se modificará 
		// accidentalmente en otras partes del código y se mantiene 
		// constante en todo momento.

	// Si "s" es nulo, la función devuelve "NULL" de inmediato.

	// 'result = (char **)malloc(sizeof(char *) * (total_words + 1))'
	// Se reserva memoria para la matriz de cadenas de caracteres 
	// llamando a la función 'malloc'. 
		// La cantidad de memoria necesaria se calcula
		//  multiplicando el tamaño de un puntero a un 
		//  carácter por el número total de palabras más uno 
		//  (para dejar espacio para un puntero nulo al 
		//  final de la matriz).

	// Si la asignación de memoria falla, devuelve "NULL". 

	// Si no falla, la última posición de la matriz se 
	// inicializa con un puntero nulo y se llama a 'divide_string' 
	// para dividir la cadena 's' en palabras utilizando 
	// el carácter 'c'. 
		// Esta función es responsable de asignar memoria 
		// para cada cadena de caracteres en la matriz 
		// y copiar los caracteres de la cadena original 
		// en cada cadena de caracteres.

	//  "ft_split" devuelve la matriz de cadenas de caracteres resultante.

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

	// La función 'ft_split' devuelve un puntero a una matriz 
	// de cadenas de caracteres, donde cada cadena de caracteres 
	// es una subcadena de la cadena original delimitada 
	// por el delimitador.

	//  words = ft_split("Hello,this,is,an,example", ',')
	// El programa comienza llamando a la función 'ft_split' 
	// con una cadena de caracteres y un delimitador como argumentos. 

	// 	while (words[i])
	// 			printf("%s\n", words[i]);
	// 			i++;
	// La función main recorre la matriz de cadenas de caracteres 
	// resultante e imprime cada cadena en la consola utilizando 
	// la función printf. 
			// Si la matriz de cadenas de caracteres es nula, 
			//  lo que significa que no se pudo separar la 
			//  cadena de entrada, se imprimirá un mensaje 
			//  de error y se devolverá un valor diferente 
			// de  0 para indicar que el programa ha fallado.

	// Llama a 'free_split para liberar la memoria asignada 
	// a la matriz de cadenas de caracteres y devuelve 0 para 
	// indicar que el programa ha terminado con éxito. 