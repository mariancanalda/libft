/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:08:00 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 18:08:47 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * It returns 1 if the character 'c' is in the string set, 
 * and 0 otherwise.
 * Devuelve 1 si el carácter 'c' está en en el conjunto 
 * de cadenas y 0 si no.
 * 
 * @param c The character to check.
 * El carácter que comprobar.
 * 
 * @param set The set of characters to be searched.
 * El conjunto de caracteres a buscar. 
 * 
 * @return The number of words in the string.
 * Devuelve el número de palabras en la cadena.
 * 
 * Required libraries. Librerías necesarias:
 * // #include <stdio.h>
 * // #include <string.h>
 * // #include <stdlib.h>
 **/

#include "libft.h"

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

// La función 'is_set es' una función auxiliar que devuelve 1 
// si un carácter 'c' se encuentra en un conjunto de caracteres
// 'set' y 0 en caso contrario.

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

	// La función 'ft_strtrim' recibe como parámetros una cadena de 
	// caracteres 's1' y un conjunto de caracteres 'set'. 

	// La variable 'start' se utiliza para realizar un seguimiento 
	// del índice del primer carácter no perteneciente a set en 's1'.
	// La variable 'end' se utiliza para realizar un seguimiento de 
	// la longitud de la subcadena no perteneciente a 'set' en 's1' 
	// que se copiará a la nueva cadena resultante.

	// El objetivo de esta función es eliminar los caracteres que 
	// se encuentran en 'set' al principio y al final de la cadena 
	// 's1'.

	// La función comienza verificando '!s1' es verdadero o no: 
		// Si lo es (es decir, si 's1' es NULL o una cadena vacía), 
		// el código devuelve un puntero nulo (NULL). 
		
		// De lo contrario, si 's1' no es nulo ni una cadena 
		// vacía:'while (s1[start] && is_set(s1[start], set))
		// Este bucle se utiliza para recorrer una cadena 
		// 's1' a partir de la posición 'start' y continuar 
		// mientras se cumplan dos condiciones: (1) que el 
		// carácter actual en la cadena no sea NULL,
		// y (2) que el carácter actual esté presente en el 
		// conjunto de caracteres set. 
		
		// 'start++' El índice start se incrementa en cada 
		// iteración del bucle, lo que permite recorrer toda 
		// la cadena hasta el final o hasta que se encuentre un 
		// carácter que no esté presente en el conjunto set.

		// La función recorre los caracteres de 's1' comenzando 
		// por el índice 'start' hasta el final de la cadena o 
		// hasta que encuentre un carácter que no pertenezca 
		// a set. Cuando encuentra un carácter que no pertenece 
		// a set, establece el valor de start a ese índice.
		
		// end = ft_strlen(s1 + start); 
		// Luego, se calcula el valor de end como la longitud 
		// de la subcadena que comienza en s1 + start. 
			// La función recorre los caracteres de 's1' 
			// comenzando por el índice 'start' hasta el final 
			// de la cadena o hasta que encuentre un carácter que 
			// no pertenezca a 'set'. 
			// Cuando encuentra un carácter que no pertenece 
			// a 'set', establece el valor de 'start' a ese
			// índice. 
			// Luego, se calcula el valor de 'end' como la 
			// longitud de la subcadena que comienza en s1 + start.
			// Luego, se utiliza un bucle para decrementar la 
			// variable 'end' mientras el último carácter 
// de la subcadena se encuentre en set. Finalmente, se devuelve 
// la subcadena que comienza en start y tiene longitud end 
// utilizando la función ft_substr.



 

Este cálculo se realiza utilizando la función ft_strlen, que devuelve la longitud de la cadena a partir del índice start. Si end es diferente de cero, es decir, si hay caracteres que se copiarán a la nueva cadena, la función recorre los caracteres en orden inverso, comenzando por el último carácter en la subcadena de s1 hasta que encuentra un carácter que no pertenezca a set. Cuando encuentra un carácter que no pertenece a set, establece el valor de end a esa posición.

Finalmente, la función devuelve una nueva cadena utilizando la función ft_substr, que toma tres argumentos: la cadena original s1, el índice start y la longitud end. La función ft_substr devuelve una copia de la subcadena de s1 que comienza en el índice start y tiene longitud end. Esta subcadena es la cadena resultante sin los caracteres iniciales y finales que pertenecen a set.





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
