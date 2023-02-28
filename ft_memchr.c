/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 17:59:58 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memchr' = "memory character"
	 * 
	 * The function ft_memchr() locates the first occurrence of 'c' (converted
	 *  to an 'unsigned char') in string 's'.
	 * * La función ft_memchr() localiza la primera aparición de 'c' 
	 * (convertido a un 'char sin signo') en la cadena 's'.
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

	//Se declaran dos variables:

		// 'const unsigned char *str' que se utiliza para almacenar la 
		// dirección de memoria del primer byte del bloque de memoria al 
		// que apunta el puntero 's' de entrada. 
			// Es importante utilizar un puntero a caracteres sin signo 
			// para evitar problemas con caracteres de signo negativo. 
			// Además, se declara como 'const' porque no se modificará 
			// la memoria a la que apunta.

		// 'size_t i': Se utiliza como contador. Se inicializa en 
		// cero y se incrementa en cada iteración del bucle. 

	// La función convierte el puntero 's' a un puntero const 
	// unsigned char (que garantiza que se manejarán valores de 
	// 0 a 255, sin problemas de signo) y lo asigna a 'str'. 

	// Se inicializa la variable 'i' en cero y se inicia 
	// un bucle while que itera desde 'i = 0' hasta 'i < n'.

		// En cada iteración, la función comprueba si el carácter 
		// en la posición 'i' de 'str' es igual al carácter sin 
		// signo 'c'. 
			// Si es así, la función devuelve un puntero de 
			// tipo void * que apunta a la dirección de 
			// memoria &str[i] (lugar donde se encontró la 
			// primera ocurrencia del carácter 'c' en la 
			// memoria apuntada por 's'). Al convertir el 
			// puntero a void *, se puede asignar este 
			// puntero a cualquier tipo de puntero en C. 

			// Si no, la función incrementa 'i' y continúa 
			// el bucle.Si el bucle se completa sin encontrar 
			// una coincidencia, la función devuelve NULL, 
			// lo que indica que el carácter 'c' no se encontró 
			// en la cadena 's'.

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

	// Se definen tres variables:
	// 	'str': un array de caracteres con capacidad para 15 caracteres.
	// 	'c': un carácter que se va a buscar en str.
	// 	'result': un puntero a un carácter que apuntará a la 
	// 	posición en la cadena str donde se encuentre c.

	// Se copia la cadena "Hello, World!" en el array 'str' utilizando 
	// 'ft_strlcpy' que copia una cadena de origen en una cadena 
	// de destino sin que se produzca un desbordamiento de búfer. 
	// 'sizeof(str)' especifica el tamaño máximo del arreglo de 
	// destino, asegurando que no se escriba más allá del espacio 
	// asignado para él. 
		// El resultado de 'ft_strlcpy' es el tamaño de la cadena 
		// de origen que se copió. Será 13, que es la longitud de 
		// "Hello, World!" (incluyendo el carácter nulo final).

	// Se define 'c' como 'o'. Lo que se desea buscar en la cadena.

	// Se llama a la función 'ft_memchr' pasando como argumentos 
	// la cadena 'str', el carácter 'c', y la longitud de la cadena 
	// (calculada con ft_strlcpy(NULL, str, 0)).
				// Al pasar NULL como argumento 'dst' y 0 como argumento 
				// 'size', 'ft_strlcpy' realiza ninguna operación de copia 
				// y devuelve la longitud de la cadena fuente 
				// ("Hello, World!")

	// El programa verifica si el resultado es NULL, en cuyo caso se 
	// imprime un mensaje indicando que el carácter no se encontró. 
	// De lo contrario, se imprime un mensaje indicando la 
	// posición donde se encontró el carácter, que se calcula 
	// restando el puntero devuelto por la función de la dirección 
	// de inicio de la cadena 'str'.