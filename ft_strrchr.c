/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 06:53:11 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strrchr = "string reverse search for character"
	 * 
	 * It returns a pointer to the last occurrence of the 
	 * character 'c' in the string 's'.
	 * Devuelve un puntero a la última aparición del carácter 
	 * 'c' en la cadena 's'.
	 * 
	 * @param s The string to search.
	 * La cadena a buscar.
	 * 
	 * @param c The character to be located.
	 * El caracter a localizar.
	 * 
	 * @return A pointer to the last occurrence 
	 * of the character 'c' in the string 's'.
	 * Devuelve un puntero a la última aparición 
	 * del carácter 'c' en la cadena ''s'.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <string.h>
	 * #include <stdlib.h>
	 * #include <stddef.h>
	 *  */

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

	// 1) Declaro e inicializo una variable 'len' con valor 0.

	// 2) Si el valor del carácter 'c' es mayor que 256, 
	// se reduce su valor módulo 256. Esto se hace porque 
	// en el estándar ASCII, los caracteres se representan con 
	// valores enteros entre 0 y 127, por lo que se ajusta 
	// el valor del carácter a este rango.
		// Por ejemplo, si 'c' tiene un valor de 300, 
		// al aplicar esta expresión ("asignar a 'c' el 
		// resultado de dividir 'c' entre 256 y tomar 
		// el resto como valor") obtendríamos un valor 
		// de 44, ya que 300 módulo 256 es igual a 44.
		// De esta manera, el valor de 'c' quedaría dentro 
		// del rango válido de 0 a 255.

	// 3) Se recorre la cadena de caracteres 's' hasta 
	// encontrar el final de la cadena, que se representa 
	// con el carácter nulo '\0'. Se va incrementando el
	// valor de i en cada iteración.

		// Se recorre la cadena de caracteres s de derecha 
		// a izquierda, desde el final de la cadena hasta el 
		// inicio, buscando el carácter 'c'. 
			// Si se encuentra el carácter, la expresión 
			// "return ((char *)s + i);" devuelve un puntero 
			// a char que apunta a la posición 'i' del arreglo 
			// al que apunta el puntero 's'. La expresión 
			// "(char *)s" convierte el puntero 's' a un 
			// puntero a char, lo que significa que se está 
			// tratando el arreglo al que apunta como un 
			// conjunto de caracteres. Luego, se le suma 
			// el valor de 'i', lo que desplaza el puntero 
			// a la posición 'i' del arreglo.
			// Si no se encuentra el carácter, se devuelve
			//  NULL.

		// En cada iteración, se va decrementando el 
		// valor de i y se evalúa si este ha llegado a 
		// ser menor que 0, en cuyo caso se interrumpe 
		// el bucle.

// int	main(void)
// {
// 	char *src;
// 	char *ptr;

// 	src = "Hello";
// 	ptr = ft_strrchr(src, 'l');
// 	if (ptr != NULL)
// 		printf("Result: %s\n", ptr);
// 	else
// 		printf("No se encontró el carácter.\n");

// 	ptr = ft_strrchr(src, 'a');
// 	if (ptr != NULL)
// 		printf("Result: %s\n", ptr);
// 	else
// 		printf("No se encontró el carácter.\n");

// 	return (0);
// }

	// 1) Declaro dos variables, 'str' y 'ptr', ambas de tipo 
	// puntero a char.
	// 2) Inicializo la variable str con la cadena de 
	// caracteres "Hello, world!" utilizando la función 
	// 'ft_strlcpy'.
	// 3) Llamo a la función'ft_strrchr' pasando como argumentos 
	// la cadena 'str' y el carácter 'o'. Esta función devuelve 
	// un puntero a la última ocurrencia del carácter 'o' en 
	// la cadena, o NULL si el carácter no se encuentra.
	// 4) Utilizo printf para imprimir el resultado devuelto 
	// por 'ft_strrchr'.
	// 5) Devuelve el valor 0.
