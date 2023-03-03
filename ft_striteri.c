/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:45:57 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:33:19 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'striteri' = "String iterator"
	* 
	 * Iterate through the string s, passing the index and the address 
	 * of each character to the function f
	 * Itera a través de la cadena 's', pasando el índice y la dirección 
	 * de cada carácter a la función 'f'
	 * 
	 * @param s The string to iterate through
	 * @param f The function to be applied to each character.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

	// Se utiliza para iterar a través de una cadena 's' y aplicar 
	// una función 'f' a cada carácter en la cadena.

	// 'while (s[i])'
	// La función recorre cada carácter en la cadena s hasta llegar 
	// al carácter nulo '\0'
		// 	'f(i, &s[i])''
		// Llama a la función 'f' con el índice del carácter y 
		// la dirección de memoria del mismo. 
		// 	Esta función se utiliza comúnmente para aplicar una 
		// 	operación a cada carácter de una cadena de caracteres, 

// void	print_and_upper(unsigned int index, char *c)
// {
// 	printf("index: %d, character: %c\n", index, *c);
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

	// La función 'print_and_upper' se utiliza como la función 
	// de iteración 'f'. Esta función imprime el índice y el carácter 
	// del elemento actual, y si el carácter es una letra minúscula, 
	// lo convierte en mayúscula. 

// int	main(void)
// {
// 	char	*s;
// 	char	*copy;

// 	s = "hello, world";
// 	copy = ft_strdup(s);
// 	ft_striteri(copy, &print_and_upper);
// 	printf("Result: %s\n", copy);
// 	free(copy);
// 	return (0);
// }
	// Se declara un puntero de tipo char llamado 's'.
	// Se declara un puntero de tipo char llamado 'copy'.

	// s = "hello, world"
	// Asigna la dirección de memoria de la cadena literal 
	// "hello, world" al puntero s.

	// copy = ft_strdup(s)
	// Utiliza la función 'ft_strdup' para crear una copia de la 
	// cadena 's' y asigna la dirección de memoria de la nueva 
	// cadena al puntero copy.

	// ft_striteri(copy, &print_and_upper)
	// Llama a la función 'ft_striteri' con los argumentos 'copy'
	// (cadena copiada) y &print_and_upper (puntero a una función 
	// que se aplicará a cada carácter de la cadena).

	// printf("Result: %s\n", copy)
	// Imprime el resultado de la función en la salida estándar,
	// que debería ser la cadena copiada con cada carácter convertido 
	// a mayúscula.

	// free(copy);
	// Libera la memoria asignada a la cadena copiada utilizando 
	// la función 'free'.

	// return (0);
	// Devuelve 0 para indicar que el programa se ejecutó correctamente.
