/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:44:42 by macanald          #+#    #+#             */
/*   Updated: 2023/02/26 20:57:41 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * isalnum = "is alphanumeric"
			 * 
			 * If the character is a letter or a number, return 1, 
			 * otherwise return 0.
			 * Si el carácter es una letra o un número, devuelve 1, 
			 * en caso contrario 
			 * devuelve 0.
			 * 
			 * @param c The character to be checked. 
			 * El carácter a comprobar.
			 * 
			 * @return 1 if the character is alphanumeric, 0 if not.
			 * Devuelve 1 si el carácter es alfanumérico, 
			 * 0 en caso contrario.
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <stdio.h>
			 **/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

			// Esta función recibe como parámetro un valor entero c, 
			// que se espera que contenga un carácter en formato ASCII.

			// La función verifica si el carácter pasado es una 
			// letra alfabética o un dígito numérico. Si es así, 
			// devuelve 1 (que representa "verdadero" o "true" 
			// en la programación), lo que indica que el carácter 
			// es alfanumérico. Si no es así, devuelve 0 (que representa 
			// "falso" o "false" en la programación), lo que indica que 
			// el carácter no es alfanumérico.

			// La función se implementa con una estructura de control
			//  if-else que verifica si el valor entero c está dentro 
			//  del rango de caracteres alfabéticos o numéricos. 
			//  En caso afirmativo, devuelve 1, de lo contrario, 
			//  devuelve 0.

// int	main(void)
// {
// 	char	input;

// 	printf("Enter a character: ");
// 	scanf("%c", &input);
// 	if (ft_isalnum(input))
// 		printf("Character entered is alphanumeric.\n");
// 	else
// 		printf("Character entered is not alphanumeric.\n");
// 	return (0);
// }

			// El programa pide al usuario que introduzca un carácter 
			// mediante la función 'scanf()', y almacena este valor 
			// en la variable input. Luego, la función 'ft_isalnum()' 
			// se utiliza para verificar si el carácter introducido 
			// es alfanumérico o no.

			// La función ft_isalnum() toma un valor 'int' 
			// como argumento y devuelve un valor 'int'. 
			// Dentro de la función, se comprueba si el valor 
			// entero está dentro del rango de caracteres 
			// alfanuméricos (letras mayúsculas, letras 
			// minúsculas y números). Si el valor está 
			// dentro de este rango, la función devuelve 1, 
			// lo que indica que el carácter es alfanumérico. 
			// Si el valor no está dentro del rango, la función 
			// devuelve 0, lo que indica que el carácter no 
			// es alfanumérico.

			// Por último, se utiliza una declaración condicional 
			// para imprimir un mensaje que indica si el carácter 
			// introducido es alfanumérico o no.