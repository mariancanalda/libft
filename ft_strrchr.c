/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 03:22:45 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * strrchr = "string reverse search for character"
			 * 
			 * It returns a pointer to the last occurrence 
			 * of the character c in the string s.
			 * 
			 * @param s The string to search.
			 * @param c The character to be located.
			 * 
			 * @return A pointer to the last occurrence 
			 * of the character c in the string s.
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <stdio.h>
			 * #include <string.h>
			 * #include <stdlib.h>
			 * #include <stddef.h>
			 */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
		if (i < 0)
			break ;
	}
	return (NULL);
}

			// La función char *ft_strrchr(const char *s, int c) 
			// busca la última aparición del carácter c en la 
			// cadena de caracteres s. 

			// Declaramos e inicializamos una variable i 
			// con valor 0.

			// Si el valor del carácter c es mayor que 256, 
			// se reduce su valor módulo 256. Esto se 
			// hace porque en el estándar ASCII, 
			// los caracteres se representan con 
			// valores enteros entre 0 y 127, por 
			// lo que se ajusta el valor del carácter 
			// a este rango.

			// Se recorre la cadena de caracteres s 
			// hasta encontrar el final de la cadena, 
			// que se representa con el carácter nulo 
			// \0'. Se va incrementando el valor de i
			//  en cada iteración.

			// Se recorre la cadena de caracteres s de 
			// derecha a izquierda, desde el final de 
			// la cadena hasta el inicio, buscando el 
			// carácter c. Si se encuentra el carácter, 
			// se devuelve un puntero a la posición de 
			// memoria donde se encuentra. Como s es un 
			// puntero constante, se utiliza una conversión 
			// explícita a char * para evitar el warning de 
			// tipo de retorno. Si no se encuentra el carácter, 
			// se devuelve NULL.

			// En cada iteración, se va decrementando el 
			// valor de i y se evalúa si este ha llegado a 
			// ser menor que 0, en cuyo caso se interrumpe 
			// el bucle.

			// En resumen, la función ft_strrchr devuelve 
			// un puntero a la última aparición del carácter 
			// c en la cadena de caracteres s.

// int	main(void)
// {
// 	char	str[14];
// 	char	*ptr; 

// 	ft_strcpy(str, "Hello, world!");
// 	ptr = ft_strrchr(str, 'o');
// 	printf("ft_strrchr result: %s\n", ptr);
// 	return (0);
// }

			// La cadena de entrada es "Hello, world!" y 
			// se busca la última aparición de la letra 'o' 
			// en la cadena. 
