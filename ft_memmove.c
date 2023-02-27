/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 01:03:20 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * memmove = "memory move"
			 * 
			 * This code is an implementation of the 'memmove' 
			 * function that copies a block of memory from a 
			 * source address to a destination address, 
			 * allowing the source and destination areas 
			 * to overlap.
			 * Este código es una implementación de la función
			 * 'memmove' que copia un bloque de memoria desde 
			 * una dirección de origen a una dirección de 
			 * destino, permitiendo que las áreas de origen 
			 * y destino se superpongan.
			 * 
			 * If the destination is less than the source,
			 * copy the source to the destination, otherwise
			 * copy the source to the destination in reverse.
			 * Si el destino es menor que el origen,
			 * copia el origen al destino, en caso contrario, 
			 * copia el origen al destino en sentido inverso.
			 *
			 * @param dst This is the pointer to the destination 
			 * array where the content is to be copied,
			 * type-casted to a void*.
			 * Este es el puntero al destino donde se copiará 
			 * el contenido, casteado (typed-casted) a un void*.
			 * 
			 * @param src The source string. Cadena de origen.
			 * @param len The number of bytes to be moved.
			 * El número de bytes a mover.
			 *
			 * @return A pointer to the destination string.
			 * Devuelve un puntero a la cadena de destino.
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <stdlib.h>
			 * #include <stdio.h>
			 **/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_src;
	unsigned char	*p_dst;

	if (!dst && !src)
		return (NULL);
	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	if (len == 0 || p_dst == p_src)
		return (dst);
	if (p_dst > p_src)
	{
		p_src += len - 1;
		p_dst += len - 1;
		while (len--)
			*p_dst-- = *p_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

			// 1) Declaro un puntero a un carácter sin signo 
			// llamado 'p_dst', que se usaré para mover bytes de 
			// 'src' a 'dst' y un puntero constante a un carácter 
			// sin signo llamado 'p_src', que usaré para mover bytes 
			// de 'src' a 'dst'. 

			// 'p_src' se declara como constante porque 
			// 'ft_memmove' no debería modificar los datos a los 
			// que apunta 'src'. Sin embargo, los datos a los que 
			// apunta 'dst' sí pueden ser modificados, por lo que no 
			// se declara como un puntero constante.

			// Declaro dos punteros porque la función 'ft_memmove' 
			// permite que los bloques dememoria de origen y destino 
			// se superpongan sin afectar los datos. Si moviese los 
			// datos de 'src' a 'dst' utilizando un solo puntero, es 
			// posible que algunos datos se sobrescribiesen antes de 
			// ser leídos y movidos. Por lo tanto, es necesario tener 
			// dos punteros, uno para 'src' y otro para 'dst', para 
			// asegurarme de que los datos se muevan correctamente 
			// y sin errores.

			// Al declararlos como 'unsigned char', garantizo que 
			// se puedan copiar todos los bytes del origen al destino, 
			// incluso si algunos de ellos tienen un valor negativo 
			// o están en un rango fuera del conjunto de caracteres 
			// ASCII. Además, el uso de 'unsigned char' —en lugar de 
			// simplemente 'char'— aseguro que los valores copiados 
			// se traten como 'enteros sin signo' en lugar de 
			// 'caracteres con signo', lo que puede evitar problemas 
			// de signo y desbordamiento durante la copia. El tamaño 
			// de un char es de 1 byte, lo que permite que la función 
			// mueva datos de un tamaño arbitrario.

			// 2) Después compruebo si se pasan punteros nulos como 
			// argumentos. Si se pasan punteros nulos, no tiene
			// sentido copiar datos de un puntero nulo a otro 
			// puntero nulo, por lo que se retorna inmediatamente 
			// un puntero nulo.

			// 3) Convierto los punteros 'src' y 'dst' en punteros 
			// sin signo de tipo char. (casteo explícito o 
			// "typecasting") y los asigno a 'p_dst' y 'p_src', 
			// respectivamente.

			// 4) Compruebo si 'len' es igual a cero o si 'p_dst' 
			// es igual a' p_src'. Si len == 0 no hay datos para 
			// mover, y si p_dst == p_src no es necesario mover 
			// datos, ya que los datos ya se encuentran en la 
			// posición de destino. Si cualquiera de estas 
			// condiciones es verdadera, la función no tiene 
			// que hacer nada y simplemente retorna 'dst'.

			// 5) Si 'p_dst' es mayor o igual que 'p_src', la 
			// función copia los bytes de 'src' a 'dst' de atrás 
			// hacia adelante para evitar sobrescribir datos antes 
			// de copiarlos. 

			// Los punteros 'p_dst' y 'p_src' se ajustan 
			// para que apunten al último byte en la región de 
			// memoria que se va a copiar (se inicializan con la 
			// posición del último byte en 'dst' y 'src', 
			// respectivamente). 

			// La función copia los bytes de 'src' a 
			// 'dst' usando un bucle while en el que los punteros 
			// 'p_dst' y 'p_src' se decrementan en cada iteración 
			// hasta que se hayan copiado 'len' bytes.

			// 6) Si 'p_dst' es menor que 'p_src', utilizo
			// la función 'ft_memcpy' para copiar los bytes
			// en el orden normal.

			// 7) La función retorna un puntero a la memoria de 
			// destino actualizada.

// int main(void)
// {
// 	int size;
// 	char *dst;
// 	char *data;

// 	size = 10;
// 	dst = malloc(size);
// 	data = malloc(size);

// 	if (!dst || !data)
// 	{
// 		printf("Error: memory allocation failed\n");
// 		return (1);
// 	}
// 	ft_memset(dst, 'B', size);
// 	ft_memset(data, 'A', size);
// 	printf("Before memmove: dst=%s, data=%s\n", dst, data);
// 	ft_memmove(dst, data, size);
// 	printf("After memmove: dst=%s, data=%s\n", dst, data);
// 	free(dst);
// 	free(data);
// 	return (0);
// }

		// 1) Declaro las variables size, dst y data. 

		// 2) Asigno un tamaño de 10 bytes a la variable 'size' 
		// y se reserva la memoria necesaria para las variables
		// 'dst' y 'data' utilizando la función malloc.

		// 3) Verifico si se han producido errores en la asignación 
		// de memoria: utilizo el operador de negación (!) para 
		// verificar si los punteros 'dst' y 'data' son nulos. 

		// Si alguno de los dos es nulo, se imprime un mensaje 
		// de error y se devuelve un valor diferente de cero 
		// (1 en este caso) para indicar que el programa 
		// terminó con errores.

		// 4) Inicializo la memoria asignada para las variables 
		// 'dst' y 'data' utilizando la función 'ft_memset', 
		// que llena un bloque de memoria con un valor dado. 
		// En este caso, se utilizan los valores 'B' y 'A',
		// respectivamente.

		// 5) Imprimo el contenido de las variables 'dst' y 
		// 'data' utilizando la función 'printf'. 

		// 6) Llamo a la función 'ft_memmove', que mueve una 
		// cantidad determinada de bytes de memoria de 
		// 'data' a 'dst'.

		// 7) Imprimo de nuevo el contenido de las variables 'dst' y 
		// 'data' utilizando la función 'printf' para verificar que 
		// el movimiento de memoria se haya realizado correctamente. 

		// 8) Se libera la memoria asignada utilizando la función 
		// 'free' y se devuelve un valor cero para indicar que 
		// el programa terminó correctamente.