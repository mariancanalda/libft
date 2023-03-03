/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:28:32 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'memcpy' = "memory copy"
	 * 
	 * Copy 'n' bytes from memory area 'src' to memory area 'dst'.
	 * Copia 'n' bytes del área de memoria 'src' al área 
	 * de memoria 'dst'.
	 * 
	 * @param dst This is the pointer to the destination array 
	 * where the content is to be copied, type-casted to a pointer 
	 * of type void*.
	 * Este es el puntero a la matriz de destino donde se va a 
	 * copiar el contenido, casteado (type-casted) a un puntero 
	 * de tipo void*.
	 * 
	 * @param src The source string. La cadena origen.
	 *
	 *  @param n The number of bytes to copy.
	 * El número de bytes a copiar.
	 * 
	 * @return a pointer to the destination.
	 * Número de bytes a copiar.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 **/

#include "libft.h"

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}

	// La función 'ft_memcpy' devuelve un puntero genérico (tipo void *) 
	// y toma tres argumentos: un puntero al área de memoria de destino, 
	// un puntero al área de memoria de origen, y un tamaño en bytes.

	// Se declaran dos punteros de tipo unsigned char 'd' y 's'. 

	// 'd = (unsigned char *)dst s = (unsigned char *)src'.
	// Se asigna los valores de los argumentos 'dst' y 'src' a los 
	// punteros 'd' y 's'. 
		// 	Se castean los punteros genéricos (void *) a punteros de tipo 
		// 	unsigned char, ya que los punteros de tipo unsigned char se 
		// 	utilizan para acceder a la memoria 'byte por byte'.

	// while (dst == src || !n) Se comprueba si los punteros de origen 
	// y destino son iguales o si el tamaño es cero ( no hay bytes que 
	// copiar). Esta comprobación se realiza para evitar problemas de 
	// solapamiento de memoria cuando la memoria de origen y destino 
	// son la misma.
		// 	Si se cumple alguna de estas condiciones, devuelve 
		// 	'dst' (la dirección de memoria original) sin hacer ninguna 
		// copia. 

	// 'while (n > 0)' Mientras 'n' sea mayor que cero, se realiza la 
	// copia de memoria byte por byte con un bucle while que se ejecuta.
		// '*d++ = *s++' En cada iteración, se copia el byte apuntado 
		// por 's' al byte apuntado por 'd', y se incrementan los 
		// punteros 's' y 'd' para apuntar al siguiente byte.

		// 'n--' Además, se decrementa 'n' en 1 para indicar que se ha 
		// copiado un byte.
			//  Por ejemplo, supongamos que 'n' es igual a 5 
			//  y que se deben copiar 5 bytes de la memoria 
			//  de origen a la memoria de destino. En la 
			//  primera iteración del bucle, se copia el 
			//  primer byte y se decrementa n en 1, por 
			//  lo que 'n' ahora es 4. En la segunda iteración, 
			//  se copia el segundo byte y se decrementa 'n' en 1, 
			//  por lo que 'n' ahora es 3. Este proceso continúa 
			//  hasta que se han copiado los 5 bytes, y 'n' se 
			//  convierte en 0.

			// Decrementar 'n' en 1 en cada iteración del bucle while 
			// garantizo que se copien exactamente 'n' bytes desde 
			// la memoria de origen a la memoria de destino, y que los 
			// punteros de origen y destino apuntan al siguiente byte 
			// en cada iteración.

	// Se devuelve un puntero al área de memoria de destino 'dst'. 
	// Esto indica que la copia de memoria ha sido completada.

// void	print_elements(char *array, int size)
// {
// 	printf ("Elements: ");
// 	while (size-- > 0)
// 	{
// 		printf ("%c, ", *array++);
// 	}
// 	printf ("\n");
// }

	// La función 'print_elements' es útil para visualizar 
	// el contenido de un array en la consola.  
	// Después de copiar la cadena de caracteres en el array 
	// de destino 'dst', se llama a 'print_elements' para 
	// comprobar que la copia de la cadena se ha realizado 
	// correctamente 

	// La función 'print_elements' recorre la cadena de 
	// caracteres 'array' y los imprime en la consola. 
	// El parámetro 'size' es la longitud de la cadena.

	// while (size-- > 0) En el bucle while, se va decrementando 
	// la variable 'size' en cada iteración. 

	// 'printf ("%c, ", *array++)' Mientras 'size' sea 
	// mayor que 0, se imprime el valor del caracter al que 
	// apunta el puntero 'array' y se avanza al siguiente 
	// caracter del array con el operador de incremento (++). 
		// Además, después de imprimir cada caracter se añade 
		// una coma y un espacio para separar los elementos.

// int	main(void)
// {
// 	char	dst[7];
// 	char	src[7];

// 	ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)));
// 	printf("ft_memcpy dst: %s\n", dst);

// 	return (0);
// }

	// Se declaran dos arrays de caracteres 'dst' y 'src', 
	// cada uno con una longitud de 7 elementos.

	// 'ft_memcpy(dst, src, ft_strlcpy(src, "abcdef", sizeof(src)))'
	// Se llama a la función 'ft_memcpy' para copiar los bytes 
	// de 'src' en 'dst', utilizando 'ft_strlcpy' para calcular el tamaño 
	// de la cadena que se va a copiar.

	// 'printf("ft_memcpy dst: %s\n", dst)'
	// Se llama a la función 'printf' para imprimir el contenido de 'dst' 
	// utilizando el especificador de formato %s. 
