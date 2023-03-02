/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:46:34 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:55:42 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * It takes a string and a function, and returns a new 
	 * string where each character is the result of the function 
	 * applied to the corresponding character of the original 
	 * string.
	 * Toma una cadena y una función, y devuelve una nueva 
	 * cadena en la que cada carácter es el resultado de 
	 * la función aplicada al carácter correspondiente 
	 * de la cadena original original.
	 * 
	 * @param s The string to be mapped.
	 * La cadena a mapear.
	 * 
	 * @param f The function to be applied to each character 
	 * of the string.
	 * La función que se aplicará a cada carácter de la cadena.
	 * 
	 * @return A pointer to a new string.
	 * Un puntero a una nueva cadena.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

	// La función 'ft_strmapi' toma dos argumentos: una cadena 
	// de caracteres 's' y un puntero a una función 'f' que toma 
	// dos argumentos unsigned int y char y devuelve un 'char'. 

	// Declara dos variables:'i' para almacenar el índice y 
	// 'str' que será la cadena de caracteres resultante.

	// 'i = 0 while (s[i]) i++'
	// Se inicializa la variable 'i' en 0 y se utiliza 
	// un bucle while para iterar a través de cada 
	// carácter de la cadena 's' y contar su longitud.
	// 	La primera vez que se inicializa 'i' en 0 es
	// 	 antes de calcular la longitud de la cadena s. 
	// 	 Se utiliza en un bucle while para iterar a 
	// 	 través de cada carácter de la cadena y 
	// 	 contar su longitud.

	// 'str = (char *)malloc((i + 1) * sizeof(*str))'
	// Se reserva memoria dinámica para la cadena de caracteres 
	// resultante con 'malloc'. El tamaño de memoria reservado 
	// es igual a '(i + 1) * sizeof(*str)', que es el tamaño 
	// de un char multiplicado por la longitud de la cadena 's' más 1 
	// (para el carácter nulo de terminación de cadena).

	// 'if (!str) return (NULL)' Se verifica si la asignación de 
	// memoria fue exitosa, en caso contrario, se devuelve NULL.

	// 'i = 0 while (s[i]) str[i] = f(i, s[i]) i++;'
	// Un bucle while se utiliza para iterar a través de cada 
	// carácter de la cadena 's'. En cada iteración, se llama
	// a la función 'f' y se le pasa el índice actual 'i' 
	// y el carácter correspondiente de la cadena 's'. 
	// El resultado de la función 'f' se asigna al carácter 
	// correspondiente en la cadena 'str'.
		// La segunda vez que se inicializa 'i' en 0 es antes 
		// de utilizarla en otro bucle while para iterar 
		// a través de cada carácter de la cadena 's' y 
		// aplicar la función 'f' a cada uno de ellos.

	// Se agrega el carácter nulo de terminación de cadena 
	// a la cadena str y se devuelve la cadena resultante.

// char	to_upper(unsigned int i, char c)
// {
// 	(void) i;
// 	if (c >= 'a' && c <= 'z')
// 	c -= 32;
// 	return (c);
// }

	// Recibe el índice del carácter actual y el carácter actual, 

	// Si el carácter es una letra minúscula, lo convierte a 
	// mayúscula. 

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("hello, world", to_upper);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

	// 'str = ft_strmapi("hello, world", to_upper)'
	// Se llama a la función 'ft_strmapi' con dos argumentos: 
	// la cadena "hello, world" y la función 'to_upper'.
		// La función 'to_upper' toma un carácter y 
		// devuelve el carácter en mayúscula. 
	// La función 'ft_strmapi' devuelve una nueva cadena 
	// que es el resultado de aplicar la función 'to_upper' 
	// a cada carácter de la cadena "hello, world".
	// Esta cadena se almacena en la variable 'str'.

	// printf("%s\n", str);
	// Se imprime en la pantalla con un formato de cadena %s, 
	// que indica que la cadena a imprimir se encuentra en 
	// el argumento siguiente.

	// Es importante liberar la memoria asignada 
	// dinámicamente a la cadena str utilizando 
	// la función free para evitar fugas de memoria.

	// Devuelve 0 para indicar que el programa 
	// se ejecutó correctamente.
