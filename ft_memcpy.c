/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 01:35:14 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * memcpy = "memory copy"
			 * Copy 'n' bytes from memory area 'src' to memory 
			 * area 'dst'.
			 * Copiar 'n' bytes del área de memoria 'src' al área 
			 * de memoria 'dst'.
			 * 
			 * @param dst This is the pointer to the 
			 * destination array where the content 
			 * is to be copied, type-casted to a pointer 
			 * of type void*.
			 * Este es el puntero a la matriz de destino 
			 * donde se va a copiar el contenido, casteado 
			 * (type-casted) a un puntero de tipo void*.
			 * 
			 * @param src The source string.
			 * La cadena origen.
			 * @param n The number of bytes to copy.
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

			// La función 'ft_memcpy' devuelve un puntero genérico 
			// (tipo void *) y toma tres argumentos: un puntero 
			// al área de memoria de destino, un puntero al área 
			// de memoria de origen, y un tamaño en bytes.

			// 1) Declaro dos punteros de tipo unsigned char 
			// llamados 'd' y 's'. Asigno los valores de 
			// los argumentos dst y src a los punteros d y s,
			//  respectivamente. Casteo los punteros genéricos 
			//  (void *) a punteros de tipo unsigned char, 
			//  ya que los punteros de tipo unsigned char 
			//  se utilizan para acceder a la memoria byte 
			//  por byte.

			// 2) Compruebo si los punteros de origen y destino 
			// son iguales o si el tamaño es cero. Si se cumple 
			// alguna de estas condiciones, se devuelve 'dst' sin 
			// realizar ninguna operación de copia. Esta comprobación 
			// se realiza para evitar problemas de solapamiento de 
			// memoria cuando la memoria de origen y destino 
			// son la misma.

			// 3) Realizo la copia de memoria byte por byte. 
			// Utilizo un bucle while que se ejecuta mientras 
			// 'n' es mayor que cero. En cada iteración, 
			// se copia el byte apuntado por 's' al byte 
			// apuntado por 'd', y se incrementan los
			//  punteros 's' y 'd' para apuntar al 
			//  siguiente byte. Además, se decrementa 
			//  'n' en 1 para indicar que se ha copiado un byte.

			//  Por ejemplo, supongamos que n es igual a 5 
			//  y que se deben copiar 5 bytes de la memoria 
			//  de origen a la memoria de destino. En la 
			//  primera iteración del bucle, se copia el 
			//  primer byte y se decrementa n en 1, por 
			//  lo que n ahora es 4. En la segunda iteración, 
			//  se copia el segundo byte y se decrementa n en 1, 
			//  por lo que n ahora es 3. Este proceso continúa 
			//  hasta que se han copiado los 5 bytes, y n se 
			//  convierte en 0.

			// De esta manera, decrementar n en 1 en cada 
			// iteración del bucle while garantizo que se 
			// copien exactamente n bytes desde la memoria 
			// de origen a la memoria de destino, y que los 
			// punteros de origen y destino apuntan al 
			// siguiente byte en cada iteración.

			// 4) Finalmente, se devuelve un puntero al área 
			// de memoria de destino dst. Esto indica que 
			// la copia de memoria ha sido completada.

// void	print_elements(char *array, int size)
// {
// 	printf ("Elements : ");
// 	while (size-- > 0)
// 	{
// 		printf ("%c, ", *array++);
// 	}
// 	printf ("\n");
// }

			// La función 'print_elements' es útil para visualizar 
			// el contenido de un array en la consola. En este caso, 
			// después de copiar la cadena de caracteres en el array 
			// de destino 'dst', se llama a 'print_elements' para 
			// imprimir los elementos del array 'dst' en la consola. 
			// Esto puede ser útil para comprobar que la copia de 
			// la cadena se ha realizado correctamente y que 
			// el contenido del array 'dst' es el que se espera.

			// La función 'print_elements' recorre la cadena 
			// de caracteres 'array' y los imprime en la consola. 
			// El parámetro 'size' es la longitud de la cadena.

			// En el bucle while, se va decrementando la variable 
			// 'size' en cada iteración. Mientras 'size' sea mayor 
			// que 0, se imprime el valor del caracter al que 
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

			// 1) Declaro dos arrays de caracteres 'dst' y 
			// 'src', cada uno con una longitud de 7 
			// elementos.

			// 2) Llamo a la función 'ft_memcpy' para copiar 
			// los bytes de la cadena de origen 'src' en 
			// la cadena de destino 'dst', utilizando 
			// 'ft_strlcpy' para calcular el tamaño de 
			// la cadena que se va a copiar.

			// 3) Después, llamo a la función 'printf' para 
			// imprimir el contenido del array 'dst' 
			// utilizando el especificador de formato %s. 
			// Esto imprime el contenido del array 'dst' como una 
			// cadena de caracteres en la consola.

			// 4) En resumen, este programa utiliza la función 'ft_memcpy'
			// para copiar una cadena de caracteres de un array a otro, 
			// y luego imprime el contenido del array de destino'dst' 
			// utilizando 'printf'. 