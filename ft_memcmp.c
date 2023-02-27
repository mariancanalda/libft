/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:32 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 00:34:20 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * memcmp = "memory compare" 
			 * 
			 * The function ft_memcmp() compares the first n bytes 
			 * of memory area str1 and memory area str2
			 * La función ft_memcmp() compara los primeros n bytes 
			 * del área de memoria str1 y el área de memoria str2
			 * 
			 * @param dst This is the destination string.
			 * Es la cadena de destino.
			 * 
			 * @param str This is the pointer to the block 
			 * of memory to fill.
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

			// Esta función compara los primeros "n" bytes de 
			// las áreas de memoria apuntadas por "dst" y "str". 
			// Los argumentos "dst" y "str" son punteros genéricos 
			// a las áreas de memoria que se van a comparar. 
			// La función devuelve un número entero que indica 
			// la relación entre los primeros "n" bytes de las 
			// áreas de memoria. La función devuelve un valor 
			// negativo si el primer byte que difiere en "dst" 
			// es menor que el byte correspondiente en "str", 
			// devuelve un valor positivo si el primer byte 
			// que difiere en "dst" es mayor que el byte 
			// correspondiente en "str" y devuelve cero 
			// si las áreas de memoria son iguales.

			// Convierto los punteros "dst" y "str" en 
			// punteros a "unsigned char" utilizando el operador 
			// de casting para poder comparar los bytes 
			// individuales de las áreas de memoria. 

			// Realizo un bucle "while" que se ejecuta 
			// mientras "n" sea mayor que cero. 
			// En cada iteración, se comprueba si 
			// los bytes apuntados por "dst2" y "str2" 
			// son iguales. Si no lo son, se calcula 
			// la diferencia entre los dos bytes y 
			// se devuelve ese valor.

			// Si los bytes son iguales, 
			// los punteros "dst2" y "str2" 
			// se incrementan para apuntar al 
			// siguiente byte y "n" se decrementa 
			// para indicar que se han comparado 
			// "n" bytes. 

			// Si después de recorrer los primeros "n"
			// bytes de las áreas de memoria los bytes 
			// son iguales, la función devuelve cero 
			// para indicar que las áreas de memoria 
			// son iguales.

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

			// 1) Declaro dos arreglos de caracteres, 'dst' y 
			// 'str', cada uno con espacio para 6 caracteres. 
			// Estos arreglos se utilizarán para almacenar dos 
			// cadenas de caracteres idénticas. Y una variable 
			// entera 'n' que se utilizará como el número de 
			// bytes que se compararán en la función
			// 'ft_memcmp'.

			// 2) Utilizo la función 'ft_strlcpy' para copiar la 
			// cadena "Hello" en el arreglo 'dst' con un tamaño
			// máximo de 6 bytes.

			// 3) Utilizo la función 'ft_strlcpy' para copiar la 
			// cadena "Hello" en el arreglo 'str' con un tamaño 
			// máximo de 6 bytes.

			// 4) Asigno un valor de 5 a la variable n. 
			// Esto significa que solo se compararán los primeros 
			// 5 bytes de los arreglos 'dst' y 'str'.

			// 5) Se llama a la función 'ft_memcmp' con los argumentos 
			// 'dst', 'str' y 'n'. Se imprime el resultado de la 
			// función en la salida estándar utilizando 'printf'. 

			// 6) El resultado se muestra como un número entero, 
			// que indica la diferencia entre los bytes que se 
			// compararon. En este caso, como los arreglos son 
			// iguales, la función 'ft_memcmp' devuelve 0.
