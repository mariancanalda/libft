/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:38:57 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 23:47:20 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * itoa = "integer to ASCII"
	 * 
	 * The itoa() function coverts the integer 'n' into a character string.
	 * La función itoa() convierte el número entero 'n' en una cadena 
	 * de caracteres.
	 * 
	 * @param n the number to be converted. El número a convertir.
	 * 
	 * @return A pointer to the string.
	 * Devuelve un puntero a esa cadena.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h> para poder usar malloc() y free().
	 * #include <tdlib.h> para poder usar printf().
	 * #include <stddef.h> para poder usar NULL.
	 * */

#include "libft.h"

static int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

	// La función 'ft_get_len' se encarga de determinar la 
	// longitud necesaria de la cadena para representar 
	// un número entero en formato de cadena de caracteres.

	// Se inicializa la variable 'len' a cero. 

	// Se comprueba si 'n' es igual a cero. Si es así, 
	// la longitud de la cadena es 1 y la función devuelve 1. 
	// El número tendría un solo dígito que es el cero. 

	// Se comprueba si 'n' es menor que cero. Si es así,se
	// incrementa el valor de 'len' en 1 para tener en cuenta ese 
	// carácter adicional en la longitud de la cadena. 

	// Mientras 'n' no sea cero, entra en un bucle while . 
	// En cada iteración, se divide 'n' por 10 para eliminar 
	// el último dígito del número y se incrementa 'len' para 
	// contar ese dígito. El bucle continúa hasta que 'n' 
	// se convierte en cero (todos los dígitos del número 
	// original han sido procesados).

	// Devuelve len (la cantidad de dígitos del número 
	// entero original, teniendo en cuenta el signo 
	// si es que era negativo.)

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = (n < 0);
	len = ft_get_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--len] = '0' + n % 10;
		else
			str[--len] = '0' - n % 10;
		n /= 10;
	}
	return (str);
}

	// Se declaran tres variables: str, len y sign.
		// 'str' almacenará la cadena resultante de la conversión 
		// del número entero a una cadena.
		// 'len' almacenará la longitud de la cadena necesaria 
		// para almacenar el número entero. 
		// 'sign' almacenará el signo del número entero 'n'. 
		// Si 'n' es negativo, 'sign' tendrá el valor de 1, 
		// en caso contrario tendrá el valor de 0.

	// (n < 0) evalúa si el valor de 'n' es menor que cero, 
	// si es así, se le asigna el valor 1 (verdadero) a 'sign', 
	// lo que significa que el número es negativo. 

	// Se llama a 'ft_get_len' para obtener el número de 
	// carácteres necesarios para representar el número.

	// Se usa 'ft_calloc' para reservar un bloque de memoria del 
	// tamaño adecuado para contener la cadena que se va a generar.  
		// Así se asegura de que el bloque de memoria se inicialice 
		// a cero, lo que garantiza que la cadena terminará con un 
		// carácter nulo. 
		// Si se usara 'malloc' no se podría garantizar, lo que podría 
		// causar problemas si la cadena se usara en otros lugares del 
		// programa.
			// 'len + 1' es el tamaño del bloque de memoria. 
			// Se agrega 1 a 'len' para incluir el carácter nulo '\0'.
			// 'sizeof(char)' es el tamaño de cada elemento en bytes 
			// (igual a 1 en C).

	// ft_calloc(len + 1, sizeof(char)) está reservando en memoria 
	// un bloque de len + 1 elementos de tamaño sizeof(char) 
	// bytes cada uno.

	// El primer 'if' comprueba si la llamada a 'calloc' 
	// ha fallado (no se ha podido asignar suficiente memoria 
	// para la cadena).
		// Si esto ocurre, la función 'ft_itoa' devuelve un 
		// puntero nulo indicando que ha habido un error.
	// El segundo 'if' comprueba si el número es negativo 
	// (sign es true). 
		// Si es así, se coloca un signo menos (-) en la primera 
		// posición de la cadena 'str'.
	// El tercer 'if' comprueba si el número es cero. 
		// Si es así, se coloca un cero (0) en la primera posición
		// de la cadena str.
	// Estos tres condicionales establecen el valor inicial de 
	// la cadena 'str' antes de comenzar a convertir el número 'n' 
	// en una cadena de caracteres.

	// 6) El bucle 'while' se ejecuta mientras 'n' sea diferente de cero. 

		// En cada iteración, se obtiene el último dígito del número y 
		// se le suma el valor del caracter '0' en ASCII

		// Si 'n' es negativo, se toma el valor absoluto 
		// de 'n' para obtener el dígito correspondiente. 
		// En ese caso, en lugar de sumar '0' se resta '0' 
		// para obtener el dígito en complemento a 10.

		// Luego se divide 'n' por 10 para pasar al siguiente
		// dígito.
			// El índice --len se utiliza para escribir los dígitos
			// en orden inverso, ya que se comienza a escribir 
			// desde el final de la cadena. Por ejemplo, 
			// si el número es 123, los dígitos se escribirán 
			// en la cadena en el orden 3, 2, 1.

	// 7) La función devuelve la cadena de caracteres representando 
	// el número entero.

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 1234;
// 	str = ft_itoa(n);
// 	printf("El entero n es %d y su representación en cadena es %s\n", n, str);
// 	free(str);
// 	return (0);
// }

	// Se declaran dos variables: 'n' n es el número que se desea convertir 
	// y 'str' donde se almacenará la cadena resultante de la conversión.
	// Se inicializa 'n' a 1234. 
	// Se llama a la función 'ft_itoa' para convertir 'n' en una cadena 
	// de caracteres. El resultado se almacena en la variable 'str'.
	// Se imprime por pantalla un mensaje que muestra el valor original 
	// de 'n' y su representación en cadena obtenida con 'ft_itoa'. 
	// Se libera la memoria asignada a la cadena 'str' usando la función 
	// 'free', y el 'main' devuelve el valor 0 para indicar que la 
	// ejecución del programa ha finalizado correctamente.