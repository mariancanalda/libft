/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 08:03:52 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * memmove = "memory move"
	 * 
	 * This code is an implementation of the 'memmove' function that 
	 * copies a block of memory from a source address to a destination 
	 * address, allowing the source and destination areas to overlap.
	 * Este código es una implementación de la función'memmove' que 
	 * copia un bloque de memoria desde una dirección de origen a una 
	 * dirección de destino de forma segura, incluso si los dos bloques 
	 * de memoria se superponen.
	 * 
	 * If the destination is less than the source, copy the source to 
	 * the destination, otherwise copy the source to the destination in 
	 * reverse. Si el destino es menor que el origen, copia el origen al 
	 * destino, en caso contrario, copia el origen al destino en sentido 
	 * inverso.
	 *
	 * @param dst This is the pointer to the destination array where 
	 * the content is to be copied,type-casted to a void*.
	 * Este es el puntero al destino donde se copiará el contenido, 
	 * casteado (typed-casted) a un void*.
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

	// unsigned char *p_src; y unsigned char *p_dst; son punteros
	// a caracteres sin signo que se utilizan para copiar el bloque 
	// de memoria de origen a destino.
		// Se declaran dos punteros porque la función 'ft_memmove' 	
		// permite que los bloques de memoria de origen y destino 
		// se superpongan sin afectar los datos. 
			// Si se movieran los datos de 'src' a 'dst' utilizando
			// un solo puntero, es posible que algunos datos se 
			// sobrescribiesen antes de ser leídos y movidos. 
			// Por lo tanto, son necesarios dos punteros, uno para 
			// 'src' y otro para 'dst', para asegurar que los 
			// datos se muevan correctamente y sin errores.

		// Al declararlos como 'unsigned char', se garantiza que 
		// se puedan copiar todos los bytes del origen al destino, 
		// incluso si algunos de ellos tienen un valor negativo 
		// o están en un rango fuera del conjunto de caracteres 
		// ASCII. Además, el uso de 'unsigned char' —en lugar de 
		// simplemente 'char'— asegura que los valores copiados 
		// se traten como 'enteros sin signo' en lugar de 
		// 'caracteres con signo', lo que puede evitar problemas 
		// de signo y desbordamiento durante la copia. El tamaño 
		// de un char es de 1 byte, lo que permite que la función 
		// mueva datos de un tamaño arbitrario.

	// if (!dst && !src) verifica si si se pasan punteros nulos como
	// argumentos. Si es así, no tiene sentido copiar datos de un
	// puntero nulo a otro, por lo que devuelve NULL para indicar 
	// un error.

	// p_src = (unsigned char *)src; y p_dst = (unsigned char *)dst
	// Se convierte los punteros 'src' y 'dst' a punteros sin 
	// signo de tipo char. (casteo explícito o "typecasting") y 
	// se asigna a 'p_dst' y 'p_src', respectivamente.
		// Al realizar una conversión de tipo a unsigned char *, 
		// se está indicando al compilador que se quiere tratar a 
		// los datos apuntados por 'src' y 'dst' como bytes 
		// individuales. 

	// if (len == 0 || p_dst == p_src) verifica si el tamaño del 
	// bloque es 0 (no hay datos que mover) o si los punteros de 
	// origen y destino son iguales (no es necesario mover datos). 
	// 	return (dst); Si es así, la función devuelve el puntero de 
	// 	destino sin hacer nada.

	// if (p_dst > p_src) verifica si el puntero de destino está
	// después del puntero de origen en la memoria, esto se hace 
	// para determinar si es necesario usar un enfoque de copia 
	// hacia adelante o hacia atrás. 
		// Lo que se compara son las direcciones de memoria 
		// apuntadas por 'p_dst' y 'p_src'. Si la dirección de 
		// memoria a la que apunta 'p_src' es mayor que la dirección 
		// de memoria a la que apunta p_dst, se deduce que p_dst 
		// está más cerca del principio de la memoria y p_src 
		// está más cerca del final de la memoria.

		// 	Por ejemplo, si 'p_dst' apunta a la dirección de memoria 
		// 	0x1000 y 'p_src' apunta a la dirección de memoria 0x2000,
		// 	entonces 'p_src' es mayor que 'p_dst'. Esto se debe a que
		// 	en la memoria, las direcciones más bajas corresponden 
		// 	a las primeras posiciones de memoria, mientras que las 
		// 	direcciones más altas corresponden a las últimas 
		// 	posiciones de memoria. 

		// 'p_src += len - 1 p_dst += len - 1' 
		// Si 'p_dst' es mayor o igual que 'p_src', la función copia 
		// los bytes de 'src' a 'dst' de atrás hacia adelante para 
		// evitar sobrescribir datos antes de copiarlos.
			// Los punteros 'p_dst' y 'p_src' se ajustan 
			// para que apunten al último byte en la región de 
			// memoria que se va a copiar (se inicializan con la 
			// posición del último byte en 'dst' y 'src', 
			// respectivamente). 

			// 'while (len--) *p_dst-- = *p_src--'
			// Se copian los bytes de 'src' en 'dst' de forma invertida 
			// usando un bucle while en el que los punteros 'p_dst' 
			// y 'p_src' se decrementan en cada iteración hasta que 
			// se hayan copiado 'len' bytes. 

			// 'else ft_memcpy(dst, src, len)' 
			// Si 'p_dst' es menor que 'p_src', se llama a la función 
			// 'ft_memcpy' para copiar los bytes en el orden normal.

	// return (dst); devuelve un puntero a la memoria de destino 
	// actualizada para indicar que la operación de copia de memoria 
	// ha sido realizada correctamente.

// int main(void)
// {
//     char s1[] = "abcdefg";
//     char s2[] = "1234567";
//     size_t n = 4;

//     printf("s1 before ft_memmove: %s\n", s1);
//     ft_memmove(s1+2, s1, n);
//     printf("s1 after ft_memmove: %s\n", s1);

//     printf("s2 before ft_memmove: %s\n", s2);
//     ft_memmove(s2, s2+3, n);
//     printf("s2 after ft_memmove: %s\n", s2);

//     return (0);
// }
	// En la función main, se declaran dos arreglos de caracteres 
	// 's1' y 's2' que contienen los valores "abcdefg" y "1234567". 
	// Además, se declara una variable 'n' con el valor 4.

	// Se imprimen las cadenas de caracteres 's1' y 's2' antes de 
	// realizar la operación 'ft_memmove'.

	// Se llama a la función 'ft_memmove' dos veces, una para cada 
	// cadena de caracteres. En la primera llamada, se mueven 4 bytes 
	// desde la posición 0 de la cadena 's1' a la posición 2 de la misma 
	// cadena. En la segunda llamada, se mueven 4 bytes desde la posición 
	// 3 de la cadena 's2' a la posición 0 de la misma cadena.

	// Se imprimen las cadenas de caracteres 's1' y 's2' 
	// después de la operación 'ft_memmove'.

	// El programa termina devolviendo 0.