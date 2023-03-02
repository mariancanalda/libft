/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:32 by macanald          #+#    #+#             */
/*   Updated: 2023/03/01 15:24:10 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * memcmp = "memory compare" 
	 * 
	 * The function ft_memcmp() compares the first 'n' bytes of memory 
	 * area 'str1' and memory area 'str2'
	 * La función ft_memcmp() compara los primeros 'n' bytes del área de 
	 * memoria 'str1' y el área de memoria 'str2'
	 * 
	 * @param dst This is the destination string.
	 * Es la cadena de destino.
	 * 
	 * @param str This is the pointer to the block of memory to fill.
	 * Este es el puntero al bloque de memoria a rellenar.
	 * 
	 * @param n The number of bytes to compare.
	 * Número de bytes a comparar.
	 * 
	 * @return The difference between the two strings.
	 * Devuelve la diferencia entre ambas cadenas.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 **/

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}

	// Esta función compara los primeros "n" bytes de las áreas de 
	// memoria apuntadas por "dst" y "str". Y devuelve un número 
	// entero que indica la relación entre esos primeros "n" bytes 
	// de las áreas de memoria. 
		// La función devuelve un valor negativo si el primer byte 
		// que difiere en "dst" es menor que el byte correspondiente 
		// en "str".

		// Devuelve un valor positivo si el primer byte que difiere 
		// en "dst" es mayor que el byte correspondiente en "str".

		// Y devuelve cero si las áreas de memoria son iguales.

	// Se declaran dos punteros a caracteres sin signo (unsigned char) 
	// que se utilizarán para recorrer las regiones de memoria 
	// de dst y str.

	// 'dst2 = (unsigned char *)dst' 'str2 = (unsigned char *)str'
	// Se asignan los punteros de los parámetros de entrada a los 
	// punteros de los caracteres sin signo (dst2 y str2). 
	// Este casteo garantiza que los valores en las posiciones 
	// de memoria se traten como bytes sin signo (necesario para 
	// poder comparar los valores de los bytes de memoria de manera 
	// segura).

	// 'if (n)' Si 'n' es igual a cero, la función no realizará ninguna 
	// comparación y devolverá cero inmediatamente. Si 'n' es mayor 
	// que cero, la función continuará con la comparación de bytes 
	// de memoria.
		// 'while (n--)' n se decrementa en cada iteración del bucle. 
		// Es decir, Si el valor de n es igual a 5, la primera 
		// iteración del bucle while compararía los bytes en las 
		// posiciones 0 de ambas regiones de memoria, y luego 
		// decrementaría el valor de 'n' a 4. La segunda iteración 
		// compararía los bytes en las posiciones 1, y decrementaría 
		// 'n' a 3, y así hasta que 'n' alcanza el valor de 0 y el 
		// bucle se detiene.

		// 'if (*dst2++ != *str2++)'.
		// En cada iteración, se comprueba si los bytes apuntados 
		// por "dst2" y "str2" son iguales. 
		// 	'return (*(--dst2) - *(--str2))'.
		// 	Si no lo son, se calcula la diferencia entre los 
		// 	dos bytes y se devuelve ese valor.

		// 	Si los bytes son iguales, los punteros 'dst2' y 'str2' 
		// 	se incrementan para apuntar al siguiente byte y 'n' se 
		// 	decrementa para indicar que se han comparado 'n' bytes. 

		// 'return (0)' Si después de recorrer los primeros 'n' bytes 
		// de las áreas de memoria los bytes son iguales, la función 
		// devuelve cero para indicar que las áreas de memoria son 
		// iguales.

// int	main(void)
// {
// 	char	dst[6];
// 	char	str[6];
// 	int		n;	

// 	ft_strlcpy(dst, "Hello", 6);
// 	ft_strlcpy(str, "Hello", 6);
// 	n = 5;
// 	printf("ft_memcmp result: %d\n", ft_memcmp(dst, str, n));
// 	return (0);
// }

	// Se declaran dos arrays de caracteres, 'dst' y 'str', cada uno 
	// con espacio para 6 caracteres. Se utilizarán para almacenar dos 
	// cadenas de caracteres. Y una variable entera 'n' que se utilizará 
	// como el número de bytes que se compararán en 'ft_memcmp'.

	// Con 'ft_strlcpy' se copiar la cadena "Hello" en el arreglo 'dst' 
	// con un tamaño máximo de 6 bytes. Y para copiar la cadena "Hello" 
	// en el arreglo 'str' con un tamaño máximo de 6 bytes.

	// Se asigna un valor de 5 a la variable n: solo se compararán los 
	// primeros 5 bytes de los arreglos 'dst' y 'str'.

	// Se llama a 'ft_memcmp' con los argumentos 'dst', 'str' y 'n' y
	// se imprime el resultado de la función utilizando 'printf'. 

	// El resultado se muestra como un número entero, que indica 
	// la diferencia entre los bytes que se compararon. En este caso, 
	// como los arreglos son iguales, la función devuelve 0.
