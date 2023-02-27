/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/26 23:41:04 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

				/**
				 * 'memchr' = "memory character"
				 * 
				 * The function ft_memchr() locates the first occurrence
				 *  of 'c' (converted to an 'unsigned char') in string 's'.
				 * * La función ft_memchr() localiza la primera aparición 
				 * de 'c' (convertido a un 'char sin signo') en la 
				 * cadena 's'.
				 * 
				 * @param s The string to search. Cadena a buscar.
				 * @param c The character to search for. Carácter a buscar.
				 * @param n The number of bytes to be searched. Número de 
				 * bytes a buscar.
				 * 
				 * @return A pointer to the first occurrence of the 
				 * character 'c' in the first 'n' bytes of the string 
				 * pointed to, by the argument'str'.
				 * @return devuelve un puntero a la primera aparición 
				 * del carácter 'c' en los primeros 'n' bytes de la 
				 * cadena apuntada por el argumento 'str'.
				 * 
				 * Required libraries. Librerías necesarias:
				 * #include <stdio.h>
				 * #include <string.h>
				 **/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

			// Declaro dos variables:
			// 'const unsigned char *str': Un puntero a un carácter 
			// constante sin signo. Se utiliza para almacenar la 
			// dirección de memoria del primer byte del bloque de 
			// memoria al que apunta el puntero 's' de entrada. 
			// Dado que esta función busca caracteres en un 
			// bloque de memoria, es importante utilizar 
			// n puntero a caracteres sin signo para evitar 
			// problemas con caracteres de signo negativo. 
			// Además, se declara como 'const' porque no se 
			// modificará la memoria a la que apunta.
			// 'size_t i': Esta variable se utiliza como un
			// contador de bucle. Se inicializa en cero y se 
			// incrementa en cada iteración del bucle 'while'. 
			// La variable 'i' se utiliza para realizar un 
			// seguimiento de la posición actual dentro del 
			// bloque de memoria y para controlar la cantidad 
			// de bytes que se han recorrido.

			// Convierto el puntero 's' a un puntero constante de 
			// caracteres sin signo, 'str', para poder trabajar 
			// con los valores de los caracteres en su forma 
			// numérica sin signo. 

			// Se inicializa la variable 'i' en cero y se inicia 
			// un bucle while que itera desde 'i = 0' hasta 'i < n'.

			// En cada iteración, la función comprueba 
			// si el carácter en la posición 'i' de 'str' es 
			// igual al carácter sin signo 'c'. Si es así, 
			// la función devuelve un puntero al elemento 
			// correspondiente en 's'. Si no, la función incrementa 
			// 'i' y continúa el bucle.

			// Si el bucle se completa sin encontrar una coincidencia, 
			// la función devuelve NULL, lo que indica que el 
			// carácter 'c' no se encontró en la cadena 's'.

// int	main(void)
// {
// 	char	str[15];
// 	char	c;
// 	char	*result;

// 	ft_strlcpy(str, "Hello, World!", sizeof(str));
// 	c = 'o';
// 	result = ft_memchr(str, c, ft_strlcpy(NULL, str, 0));
// 	if (result == NULL)
// 		printf("Character '%c' not found\n", c);
// 	else
// 		printf("Character '%c' found at position %ld\n", c, result - str);
// 	return (0);
// }

			// 1) Defino tres variables:
			// 	'str': un array de caracteres (una cadena de caracteres) 
			// 	con capacidad para 15 caracteres.
			// 	'c': un carácter que se va a buscar en str.
			// 	'result': un puntero a un carácter que apuntará a la 
			// 	posición en la cadena str donde se encuentre c.
			// 	La función 'ft_memchr' se usará para buscar el 
			// 	carácter 'c' en la cadena 'str', y el resultado 
			// 	se almacenará en 'result'.

			// 2) Inicializo la cadena 'str' con "Hello, World!" utilizando 
			// la función 'ft_strlcpy'. para asegurarme de que hay 
			// caracteres en la cadena que pueden ser buscados con ft_memchr.

			// 3) Defino un carácter c (en este caso 'o') 
			// que se desea buscar en la cadena.

			// 4) Se llama a la función 'ft_memchr' pasando como argumentos 
			// la cadena 'str', el carácter 'c', y la longitud de la cadena 
			// (calculada con ft_strlcpy(NULL, str, 0)). 

			// 5) La función busca el carácter en la cadena 
			// y retorna un puntero al primer byte donde se encontró 
			// el carácter o NULL si no se encontró.

			// 6)El programa verifica si el resultado es NULL, 
			// en cuyo caso se imprime un mensaje indicando 
			// que el carácter no se encontró. 

			// 7) De lo contrario, se imprime un mensaje 
			// indicando la posición donde se encontró 
			// el carácter, que se calcula restando el puntero 
			// devuelto por la función de la dirección de 
			// inicio de la cadena 'str'.