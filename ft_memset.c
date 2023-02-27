/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 01:33:35 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * memset = "memory set"
			 * 
			 * Takes a pointer to a memory area, a byte value, 
			 * and a size,and fills the memory area with the 
			 * given byte value.
			 * Toma un puntero a un área de memoria, un valor de
			 * byte y un tamaño,y rellena el área de memoria 
			 * con el valor de byte dado.
			 * 
			 * @param b This is the pointer to the memory area 
			 * to be filled.
			 * Este es el puntero al área de memoria a rellenar.
			 * 
			 * @param c the character to fill the memory with.
			 * El carácter con el que rellenar la memoria.
			 * 
			 * @param len The number of bytes to be set to 
			 * the value 'c'.
			 * El número de bytes que se fijarán al valor 'c'.
			 * 
			 * @return The address of the first byte of 
			 * the memory area 'b'.
			 * Devuelve la dirección del primer byte de 
			 * la zona de memoria 'b'.
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

			// 1) Se declara un puntero a char sin signo.
			// 2) Se asigna a 'p' el valor de la dirección 
			// de memoria apuntada por 'b'
			// 3) Se establece el valor de *p 
			// (que apunta a la zona de memoria) 
			// al valor de 'c' (casteado a char sin signo).
			// 4) Se devuelve el puntero a la zona de memoria.

// int	main(void)
// {
// 	char	str[42];

// 	ft_memset(str, '*', sizeof(str));
// 	printf("Cadena rellenada con asteriscos: %s\n", str);
// 	return (0);
// }

			// El 'main' llama a la función 'ft_memset', que 
			// se encarga de rellenar el arreglo 'str' con 
			// asteriscos. 

			// 1) Se declara un arreglo de caracteres 
			// llamado 'str' con una longitud de 42 
			// elementos.

			// 2) 'ft_memset' recibe tres argumentos: 
			// 	un puntero al comienzo del arreglo
			// 	que se quiere llenar (b)
			// 	el valor que se quiere escribir en 
			// 	cada byte (c) 
			// 	y la cantidad de bytes que se quieren 
			// 	escribir (len). 

			// 3) 'str' es el arreglo que se quiere llenar 
			// con asteriscos, el valor de asterisco se 
			// pasa como argumento 'c' y se utiliza 
			// 'sizeof' para obtener el tamaño del arreglo 
			// en bytes, que se pasa como argumento 'len'.

			// 4) Después de llamar a 'ft_memset', la función 
			// 'printf' se utiliza para imprimir el 
			// contenido de 'str' en la consola, 
			// que ahora debería estar lleno 
			// de asteriscos. 

			// 5) Finalmente, devuelve 0 para indicar que 
			// el programa terminó sin errores.
