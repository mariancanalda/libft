/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:49:46 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 15:02:53 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * strlcpy = "string length copy".
	 * 
	 * Copy the string pointed to by src, including the terminating 
	 * null byte ('\0'), to the buffer pointed to by dst.
	 * Copia la cadena apuntada por src, incluyendo el byte nulo 
	 * de terminación ('\0'), al buffer apuntado por dst.
	 * 
	 * @param dst The destination string.
	 * La cadena de destino.
	 * 
	 * @param src The string to be copied.
	 * La cadena a copiar.
	 * 
	 * @param dstsize The size of the destination buffer.
	 * El tamaño del búfer de destino.
	 * 
	 * @return The length of the string src.
	 * Devuelve la longitud de la cadena src.
		 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
	
	// Se inicializa el contador 'i' a cero. 

	// 'if (dstsize == 0) return (ft_strlen(src))' 
		// 	Si 'dstsize' es igual a cero, la función devuelve 
		// 	la longitud de 'src'. Esto significa que si el búfer 
		// 	de destino no tiene espacio para almacenar nada, 
		// 	la función simplemente devuelve la longitud de 
		// 	la cadena de origen.

		// 	Si 'dstsize' no es cero, la función itera sobre 
		// 	la cadena de origen 'src' hasta que llega al final 
		// 	de la cadena o hasta que 'i' llega a 'dstsize - 1', 
		// 	lo que significa que no hay suficiente espacio 
		// 	en el búfer de destino para copiar la cadena 
		// 	completa. 

		// 	En cada iteración, la función copia el carácter 
		// 	actual de src en la posición correspondiente en 
		// 	dst y aumenta el contador 'i'.

	// Después de la iteración, la función establece el 
	// carácter nulo final en la posición 'i' de 'dst' y 
	// devuelve la longitud de src. La función 'ft_strlcpy' 
	// garantiza que el búfer de destino esté siempre 
	// terminado con un carácter nulo, independientemente 
	// de si se copió la cadena completa o no. 

	// Esto es útil para evitar errores de acceso a memoria 
	// fuera de los límites del búfer de destino.

// int	main(void)
// {
// 	char	dst[20];
// 	char	*src;
// 	size_t	dstsize;
// 	size_t	copied_length;

// 	src = "Hello, World!";
// 	dstsize = sizeof(dst);
// 	copied_length = ft_strlcpy(dst, src, dstsize);
// 	ft_putendl_fd(dst, 1);
// 	ft_putendl_fd("Length of copied string:", 1);
// 	ft_putnbr_fd(copied_length, 1);
// 	ft_putendl_fd("", 1);
// 	return (0);
// }

	// Inicializa una cadena de destino 'dst' con un tamaño 
	// de 20 bytes y una cadena de origen 'src' con el valor 
	// "Hello, World!". 

	// Llama a la función 'ft_strlcpy' con estos valores y 
	// almacena la longitud de la cadena copiada en 'copied_length'. 

	// Finalmente, imprime la cadena copiada 'dst' y la longitud 
	// de la cadena copiada 'copied_length' en la salida estándar 
	// utilizando 'ft_putendl_fd' y 'ft_putnbr_fd'.
