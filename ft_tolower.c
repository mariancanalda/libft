/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:40:56 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 08:07:17 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/**
 * If the character is uppercase, add 32 to it
 * Convierte una letra mayúscula a su correspondiente letra minúscula. 
 * 
 * @param c The character to be converted.
 * 
 * @return The lowercase version of the character.
 */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

	// La función toma un carácter como argumento y devuelve 
	// un entero. Si el carácter está entre 'A' y 'Z' 
	// (es decir, es una letra mayúscula), se agrega 32 al 
	// valor de su código ASCII, lo que lo convierte en su 
	// correspondiente letra minúscula.
	// Se devuelve el valor del carácter convertido o sin
	// cambios.

// int	main(void)
// {
// 	char	input;
// 	int		output;

// 	input = 'A';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'Z';
// 	output = ft_tolower(input);
// 	if (output == 'z')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = 'a';
// 	output = ft_tolower(input);
// 	if (output == 'a')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	input = '1';
// 	output = ft_tolower(input);
// 	if (output == '1')
// 	{
// 		printf("La función es correcta para el carácter '%c'\n", input);
// 	}
// 	else
// 	{
// 		printf("La función no es correcta para el carácter '%c'\n", input);
// 	}
// 	return (0);
// }

	// La función principal prueba la función ft_tolower con 
	// diferentes caracteres para asegurarse de que funciona 
	// correctamente.
	// Se inicializa un carácter de prueba 'input' y se llama a la 
	// función ft_tolower para convertirlo a su correspondiente 
	// letra minúscula.
	// Se comprueba si la salida es la letra minúscula 
	// esperada ('a' para 'A', 'z' para 'Z', etc.). 
	// Si es así, se imprime un mensaje de éxito. 
	// Si no, se imprime un mensaje de error.
	// Se realizan pruebas similares para 'Z', 'a' y '1'.
