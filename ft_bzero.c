/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:17:54 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:27:17 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'bzero' = "zeroing a byte string".
	 * 
	 * It sets the first 'n' bytes of the memory area pointed 
	 * to by 'str' to zero.
	 * Pone a cero los 'n' primeros bytes de la zona de memoria 
	 * apuntada por 'str'.
	 * 
	 * @param str This is the pointer to the block of memory to fill.
	 * Este es el puntero al bloque de memoria a rellenar.
	 * 
	 * @param n The number of bytes to be zeroed.
	 * El número de bytes que se pondrán a cero.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <string.h>
	 * #include <stdlib.h>
	 **/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

	// Mientras 'i' sea menor que 'n' (el número de bytes que se 
	// van a borrar), se establece el byte actual en cero mediante 
	// la asignación ((char *)str)[i] = 0 y se incrementa 'i' 
	// en uno mediante i++.

		// La conversión el puntero 'void *str' a un puntero de tipo 
		// 'char *' es un casteo. Se hace para poder manipular el 
		// contenido de la memoria "byte a byte" (bytes individuales,
		// en lugar de palabras), ya que los punteros de tipo 'void' 
		// no tienen un tipo de dato asociado y no se pueden usar 
		// para acceder o modificar los datos a los que apuntan. 

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strdup("Hello, World!");
// 	ft_bzero(str, ft_strlen(str));
// 	printf("String with null values: %s\n", str);
// 	free(str);
// 	return (0);
// }

	// Se declara un puntero a una cadena de caracteres y se le
	// asigna la dirección de una cadena duplicada "Hello, World!" 
	// utilizando ft_strdup. 'str = ft_strdup("Hello, World!")'
	// Se hace para poder manipular la cadena sin alterar la cadena 
	// original.

	// ft_bzero(str, ft_strlen(str)) Se llama 'ft_bzero' con 
	// los argumentos 'str' (el puntero a la cadena) y 
	// 'ft_strlen(str)' (la longitud de la cadena) para establecer 
	// todos los bytes de la cadena en cero. 

	// Se imprime la cadena modificada (cadena vacía), y se libera 
	// la memoria asignada a la cadena duplicada con 'free'.
