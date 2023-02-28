/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:42:54 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 20:33:40 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * isdigit = "is digit"
	 * 
	 * If the character is a digit, return 1, otherwise return 0.
	 * Si el carácter es un dígito, devuelve 1, en caso contrario devuelve 0.
	 * 
	 * @param c The character to be checked. El carácter a comprobar.
	 * 
	 * @return 1 if the character is a digit, 0 if not.
	 * Devuelve 1 si el carácter es un dígito, 0 en caso contrario.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h> 
	 **/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

	// Con una estructura de control if-else, se verifica 
	// si el valor del carácter está en el rango decimal del  
	// '0' al '9', la función devuelve 1, lo que indica 
	// que es un dígito decimal. Si no está en ese rango, 
	// devuelve 0, lo que significa que no es un dígito decimal.

// int	main(void)
// {
// 	char	c;

// 	c = '5';
// 	if (ft_isdigit(c))
// 	{
// 		printf("'%c' is a digit.\n", c);
// 	}
// 	else
// 	{
// 		printf("'%c' is not a digit.\n", c);
// 	}
// 	return (0);
// }

	// Se declara una variable c de tipo char y se inicializa en '5'. 
	// Se llama a la función ft_isdigit() pasando como argumento 
	// el valor de c. La función ft_isdigit() verifica si el valor 
	// pasado como argumento es un dígito decimal, devolviendo 1 
	// si lo es y 0 si no lo es. El programa imprime el mensaje '5' 
	// is a digit y devuelve 0 indicando que finalizó sin errores.