/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:54:55 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:55:11 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strncmmp = "string compare n"
	 * 
	 * Compares the first 'n' characters of the strings 
	 * 's1' and 's2'.
	 * Compara los primeros 'n' caracteres de las 
	 * cadenas s1 y s2.
	 *
	 * @param s1 The first string to be compared.
	 * La primera cadena a comparar.
	 * 
	 * @param s2 The string to compare to.
	 * La cadena con la que comparar.
	 * 
	 * @param n The maximum number of characters to compare.
	 * El número máximo de caracteres a comparar.
	 * 
	 * @return The difference between the first two characters 
	 * that differ in the strings s1 and s2.
	 * La diferencia entre los dos primeros caracteres que 
	 * difieren en las cadenas s1 y s2.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

	// 'size_t	i i = 0'
	// Se inicializa un contador 'i' que se usará para iterar 
	// a través de las cadenas de caracteres y comparar sus 
	// caracteres.

	// "while (i < n && s1[i] != '\0' && s2[i] != '\0' 
	// && s1[i] == s2[i])"
	// Se usa un bucle while para comparar los caracteres de las
	// dos cadenas de caracteres. El bucle se ejecuta mientras
	// 'i' es menor que 'n' (el tamaño especificado),
	// 's1[i]' y 's2[i]' no son nulos (es decir, hay más 
	// caracteres que comparar), y los caracteres en ambas 
	// cadenas de caracteres son iguales. 

	// 	En cada iteración del bucle, el contador 'i' se 
	// 	incrementa para avanzar a los siguientes 
	// 	caracteres de las cadenas.

	// 'if (i == n) return (0)'
	// Si 'i' es igual a 'n', esto significa que las cadenas 
	// son iguales. En ese caso, se devuelve el valor 0.

	// 'else 
	// return ((unsigned char)s1[i] - (unsigned char)s2[i]);'
	// De lo contrario, se devuelve la diferencia entre el 
	// valor numérico del carácter en 's1[i]' y el valor
	// numérico del carácter en 's2[i]'. 
	// 	Se convierte cada carácter en un unsigned char 
	// 	para evitar problemas con el signo.

// int	main(void)
// {
// 	const char	s1[];
// 	const char	s2[];
// 	size_t		n;
// 	int			result;

// 	s1[6] = "Hello";
// 	s2[6] = "Hello";
// 	n = 5;
// 	result = ft_strncmp(s1, s2, n);
// 	printf("ft_strncmp = %d\n", result);
// 	return (0);
// }

	// Se declaran dos arrays de caracteres 's1' y 's2' 
	// sin inicializarlos. 

	// Se asigna la cadena "Hello" a los elementos 
	// s1[6] y s2[6]. 
		// Es importante notar que el tamaño de los 
		// arreglos debe ser lo suficientemente 
		// grande para contener la cadena y el carácter 
		// nulo que indica el final de la cadena. 

	// Se inicializa la variable 'n' con el valor 5. 

	// Se llama a la función 'ft_strncmp' pasándole los 
	// parámetros 's1', 's2' y 'n', y se almacena su 
	// resultado en la variable 'result'. 

	// Finalmente, se imprime el valor de 'result' 
	// usando la función 'printf' 

	// Se devuelve '0' para indicar que el 
	// programa se ha ejecutado correctamente. 
