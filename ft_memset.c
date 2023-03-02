/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:52:47 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * memset = "memory set"
	 * 
	 * Takes a pointer to a memory area, a byte value, and a size, 
	 * and fills the memory area with the given byte value.
	 * Toma un puntero a un área de memoria, un valor de byte y un 
	 * tamaño, y rellena el área de memoria con el valor de byte dado.
	 * 
	 * @param b This is the pointer to the memory area to be filled.
	 * Este es el puntero que apunta a la dirección del bloque de 
	 * memoria.
	 * 
	 * @param c the character to fill the memory with.
	 * El carácter con el que rellenar la memoria.
	 * 
	 * @param len The number of bytes to be set to the value 'c'.
	 * El número de bytes que se fijarán al valor 'c'
	 * (la longitud del bloque de memoria).
	 * 
	 * @return The address of the first byte of the memory area 'b'.
	 * Devuelve la dirección del primer byte de la zona de memoria 'b'.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 **/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

	// Se declara un puntero 'p' que apunta a un carácter sin 
	// signo (unsigned char). Este puntero se usará para recorrer el 
	// bloque de memoria.
	// 	En C se recomienda que las funciones que trabajan con bytes 
	// 	individuales (como memset) utilicen punteros a unsigned char 
	// 	para garantizar un comportamiento predecible y evitar problemas 
	// 	de signo en las comparaciones.

	// p = b; Se asigna al puntero 'p' el valor de la dirección de 
	// memoria apuntada por 'b'para poder escribir en esa dirección de 
	// memoria.Se garantiza que se está escribiendo en la memoria 
	// 	correcta. 
	// 	Si no se hace esto, entonces el puntero 'p' apuntaría a una 
	// 	dirección de memoria aleatoria y la escritura en esa dirección 
	// 	podría causar errores. 

	// 'while (len--) 
	// Usamos un bucle while que se ejecutará hasta que len sea 
	// igual a cero. 
	// 	*p++ = (unsigned char)c'
	// 	En cada iteración, se establece el valor de 'c' en el byte 
	// actual apuntado por 'p'. 
	// 		El casting a (unsigned char) se realiza para asegurarse de 
	// 		que el valor de 'c' que se va a copiar en el puntero 'p' sea 
	// 		un número positivo entre 0 y 255.
	// 		Si c es una variable de tipo char, el rango de valores que 
	// 		puede tomar depende de si es signed o unsigned. Si es 
	// 		signed, el rango es de -128 a 127, mientras que si es 
	// 		unsigned, el rango es de 0 a 255. Por lo tanto, al realizar 
	// 		el casting a (unsigned char), se asegura de que el valor de
	// 		'c' sea un número positivo entre 0 y 255, lo que es necesario 
	// 		para que la función ft_memset funcione correctamente y no
	// 		produzca resultados inesperados.

	// Se devuelve el puntero a la zona de memoria.

// int	main(void)
// {
// 	char	str[42];

// 	ft_memset(str, '*', sizeof(str));
// 	printf("Cadena rellenada con asteriscos: %s\n", str);
// 	return (0);
// }

	// El 'main' llama a la función 'ft_memset', que se encarga de 
	// rellenar el arreglo 'str' con asteriscos. 

	// 'char str[42]' Se declara un arreglo de caracteres llamado 
	// 'str' con una longitud de 42 elementos.

	// 'ft_memset(str, '*', sizeof(str));'
	// 'str' es el arreglo que se quiere llenar con asteriscos, 
	// el valor de asterisco se pasa como argumento 'c' y se 
	// utiliza 'sizeof' para obtener el tamaño del arreglo 
	// en bytes, que se pasa como argumento 'len'.

	// Después, 'printf' se utiliza para imprimir el contenido 
	// de 'str' en la consola, que ahora debería estar lleno 
	// de asteriscos. 

	// 5) Finalmente, devuelve 0 para indicar que el programa 
	// terminó sin errores.
