/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:35:04 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:38:07 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * This function takes a string and returns the length 
	 * of the string.
	 * Calcula la longitud de una cadena de caracteres,sin incluir 
	 * el carácter nulo ('\0') que indica el final de la cadena.
	 * 
	 * @param str This is the string that we are going to find the length of.
	 * Esta es la cadena cuya longitud vamos a averiguar.
	 * 
	 * @return The length of the string.
	 * La longitud de la cadena.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <unistd.h>
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

	// La función recibe como argumento un puntero a const char, 
	// que apunta a la cadena de caracteres a medir. 

	// 'while (str[i] != '\0')'
	// Se inicializa una variable i a cero, y se recorre la 
	// cadena de caracteres mediante un bucle while, 
	// incrementando i en cada iteración hasta que se 
	// llega al carácter nulo '\0'. 

	// 'return (i)'
	// Finalmente, se devuelve el valor de i.

// int	main(void)
// {
// 	char	str[100];

// 	printf("Introduce una cadena: ");
// 	scanf("%s", str);
// 	printf("La longitud de la cadena es: %lu \n", ft_strlen(str));
// 	return (0);
// }

	// Se pide al usuario que introduzca una cadena de caracteres, 
	// se llama a la función 'ft_strlen' para calcular su longitud 
	// y mostrarla en pantalla usando printf.

	// 	%lu es un especificador de formato utilizado en C 
	// 	para imprimir valores de tipo unsigned long. 

	// 	El modificador l indica que se espera un argumento 
	// 	de tipo long, mientras que la letra u indica que 
	// 	se debe imprimir como un número sin signo. 

	// 	Por lo tanto, %lu se utiliza para imprimir valores 
	// 	de tipo unsigned long.	
