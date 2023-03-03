/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:15:58 by macanald         ###   ########.fr       */
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

	// 'if (c > 256) c %= 256' Si el valor del carácter 'c' 
	// es mayor que 256, se reduce su valor módulo 256. 
	// Esto se hace porque en ASCII, los caracteres se 
	// representan con valores enteros entre 0 y 127, 
	// por lo que se ajusta el valor del carácter a 
	// este rango.
		// Por ejemplo, si 'c' tiene un valor de 300, 
		// al aplicar esta expresión ("asignar a 'c' el 
		// resultado de dividir 'c' entre 256 y tomar 
		// el resto como valor") obtendríamos un valor 
		// de 44, ya que 300 módulo 256 es igual a 44.
		// De esta manera, el valor de 'c' quedaría dentro 
		// del rango válido de 0 a 255.

	// 'while (s[i] != '\0') i++'' Se recorre la cadena de 
	// caracteres 's' hasta encontrar el final de la cadena, 
	// que se representa con el carácter nulo '\0'. Se va 
	// incrementando el valor de i en cada iteración.

	// ''while (i >= 0) if (s[i] == c)'
	// Se recorre la cadena de caracteres 's' de derecha 
	// a izquierda, desde el final de la cadena hasta el 
	// inicio, buscando el carácter 'c'. 
		// Si se encuentra el carácter, la expresión 
		// "return ((char *)s + i);" devuelve un puntero 
		// a esa posición de la cadena (convertida 
		// a un puntero de caracteres mediante un casting 
		// explícito).
		// La expresión "(char *)s" convierte el puntero 
		// 's' a un puntero a char, lo que significa que 
		// se está tratando el arreglo al que apunta como 
		// un conjunto de caracteres. Luego, se le suma 
		// el valor de 'i', lo que desplaza el puntero 
		// a la posición 'i' del arreglo.
		// Si no se encuentra el carácter, se devuelve
		//  NULL.

		// i--; En cada iteración, se va decrementando el 
		// valor de i y se evalúa si este ha llegado a 
		// ser menor que 0, en cuyo caso se interrumpe 
		// el bucle.

		// Se comprueba si la variable 'i' ha disminuido
		// hasta un valor menor que cero. Si la condición 
		// es verdadera, el bucle se interrumpe y la 
		// ejecución del código salta a la siguiente 
		// línea después del bucle: 'return (NULL)'.
			// La razón por la que esta línea de código 
			// se incluye en la función es para evitar 
			// que el bucle se ejecute indefinidamente, 
			// si no se encuentra "c" en la cadena 
			// de caracteres. Si el índice "i" llega 
			// a ser menor que cero, significa que el 
			// bucle ha terminado de recorrer la cadena 
			// de caracteres sin encontrar una coincidencia 
			// para el carácter "c". Por lo tanto, se rompe 
			// el bucle y la función devuelve NULL para indicar 
			// que no se ha encontrado el carácter buscado.

		//  Si si no se ha encontrado el carácter "c" en la 
		// cadena 's', la función devuelve NULL.

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

	// Se declaran dos variables, 'str' y 'ptr', ambas de tipo 
	// puntero a char.

	// Se inicializa la variable 'str' con la cadena de caracteres 
	// "Hello, world!" utilizando la función 'ft_strlcpy'.

	// Se llama la función'ft_strrchr' pasando como argumentos 
	// la cadena 'str' y el carácter 'o'. Esta función devuelve 
	// un puntero a la última ocurrencia del carácter 'o' en 
	// la cadena, o NULL si el carácter no se encuentra.

	// Utilizo 'printf' para imprimir el resultado devuelto 
	// por 'ft_strrchr'.

	// Devuelve el valor 0.
