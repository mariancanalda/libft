/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:38:57 by macanald          #+#    #+#             */
/*   Updated: 2023/02/26 23:07:55 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * itoa = "integer to ASCII"
			 * 
			 * It returns the number of digits in the number passed to it.
			 * Devuelve el número de dígitos del número que se le ha pasado.
			 * 
			 * @param n the number to be converted. El número a convertir.
			 * 
			 * @return The length of the number.
			 * Devuelve la longitud del número.
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

			// La función ft_get_len se encarga de determinar la 
			// longitud necesaria de la cadena para representar 
			// un número entero en formato de cadena de caracteres.
			// La función toma un argumento entero 'n' y devuelve un entero.

			// 1) Inicializo la variable 'len' a cero.

			// 2) Compruebo si 'n' es igual a cero. Si es así, la longitud 
			// de la cadena es 1 y la función devuelve 1.

			// 3) Compruebo si 'n' es menor que cero. 
			// Si es así, se debe tener en cuenta el signo del número 
			// al calcular la longitud de la cadena, se incrementa 
			// el valor de len en 1 para contar ese carácter adicional 
			// en la cadena resultante. Si 'n' es mayor o igual a cero, 
			// no se necesita agregar el carácter 
			// y 'len' se mantiene sin cambios.

			// 4) Mientras 'n' no sea cero, entra en un bucle while . 
			// En cada iteración, se divide 'n' por 10 para eliminar 
			// el último dígito del número y se incrementa 'le'n' para 
			// contar ese dígito. El bucle continúa hasta que 'n' 
			// se convierte en cero.

			// Cada vez que el bucle se ejecuta, n se divide por 10, 
			// es decir, se elimina el último dígito del número. 
			// Por ejemplo, si n es inicialmente 123, en la primera 
			// iteración se convierte en 12, en la segunda en 1, 
			// y en la tercera en 0. Cuando n se convierte en cero, 
			// el bucle deja de ejecutarse, lo que significa que 
			// todos los dígitos del número original han sido 
			// procesados.

			// 5) Devuelve la longitud final de la cadena.

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

			// 1) Se declaran tres variables: str, len y sign.
					// 'str' es un puntero a char que se usará para 
					// almacenar la cadena de caracteres que representa 
					// el número entero 'n'.
					// 'len' es un entero que representa la longitud 
					// de la cadena que se necesitará para almacenar 
					// 'n' como caracteres.
					// 'sign' es un entero que se utiliza para almacenar 
					// el signo del número entero 'n'. Si 'n' es negativo, 
					// 'sign' tendrá el valor de 1, en caso contrario 
					// tendrá el valor de 0.

			// 2) Se asigna un valor booleano a la variable 'sign' 
			// que indicará si el número es positivo o negativo. 
					// La expresión (n < 0) evalúa si el valor de 'n' es 
					// menor que cero, si es así, se le asigna el valor 1 
					// (verdadero) a la variable sign, lo que significa 
					// que el número es negativo. Si 'n' es mayor o 
					// igual a cero, se le asigna el valor 0 (falso) a 'sign', 
					// lo que significa que el número es positivo. 
					// Esta variable se utiliza más tarde para agregar
					// el signo "-" al inicio de la cadena de caracteres 
					// 'str' si el número es negativo.

			// 3) Se llama a 'ft_get_len' para obtener la longitud 
			// necesaria de la cadena.

			// 4) Se asigna memoria para la cadena utilizando 
			// 'ft_calloc'. En este caso, la función 'ft_itoa' 
			// necesita asignar un bloque de memoria para almacenar 
			// la cadena de caracteres resultante. Al usar 'calloc', 
			// se asegura de que el bloque de memoria se inicialice 
			// a cero, lo que garantiza que la cadena terminará 
			// con un carácter nulo. Si se usara 'malloc' en su lugar, 
			// no se podría garantizar que la cadena terminaría con 
			// un carácter nulo, lo que podría causar problemas si 
			// la cadena se usara en otros lugares del programa.
					// 'len + 1' es el número de elementos que se van a 
					// reservar y 'sizeof(char)' es el tamaño de cada 
					// elemento en bytes. La razón por la cual se agrega 
					// 1 a 'len' es para incluir el carácter nulo '\0', 
					// que es necesario para indicar el final de la 
					// cadena de caracteres. El carácter nulo debe 
					// agregarse al final de la cadena de caracteres 
					// para que las funciones que manejan cadenas 
					// de caracteres puedan saber cuándo 
					// se ha alcanzado el final de la cadena. 

			// 5) El primer 'if' comprueba si la llamada a 'calloc' 
			// ha fallado, lo que significa que no se ha podido 
			// asignar suficiente memoria para la cadena.
			// Si esto ocurre, la función 'ft_itoa' devuelve un 
			// puntero nulo indicando que ha habido un error.

			// El segundo 'if' comprueba si el número es negativo 
			// (sign es true). Si es así, se coloca un signo 
			// menos (-) en la primera posición 
			// de la cadena 'str'.

			// El tercer 'if' comprueba si el número es cero. 
			// Si es así, se coloca un cero (0) 
			// en la primera posición de la cadena str.

			// Estos tres condicionales establecen 
			// el valor inicial de la cadena 'str' antes 
			// de comenzar a convertir el número 'n' 
			// en una cadena de caracteres.

			// 6) El bucle 'while' se ejecuta mientras 'n' 
			// sea diferente de cero. En cada iteración, 
			// el residuo de la división de 'n' por 10 se 
			// suma a '0' para obtener el dígito correspondiente 
			// en la representación en caracteres del número.

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

			// 7) La función devuelve la cadena de caracteres 
			// representando el número entero.

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 123;
// 	str = ft_itoa(n);
// 	printf("El entero n es %d y su representación en cadena es %s\n", n, str);
// 	free(str);
// 	return (0);
// }

			// 1) Se declaran dos variables, una de tipo entero 'n' 
			// y otra de tipo puntero a char 'str'.
			// 	La variable 'n' n es el número que se desea convertir.
			// 	La variable 'str' donde se almacenará la cadena resultante 
			// 	de la conversión.

			// 2) Inicializo 'n' a 123. 

			// 3) Llamo a la función 'ft_itoa' para convertir el número entero 
			// 'n' en una cadena de caracteres. El resultado se almacena 
			// en la variable 'str'.

			// 4) Se imprime por pantalla un mensaje que muestra el 
			// valor original de 'n' y su representación en cadena obtenida 
			// a través de la función 'ft_itoa'. 

			// 5) Se libera la memoria asignada a la cadena 'str' usando 
			// la función 'free', y el 'main' devuelve el valor 0 
			// para indicar que la ejecución del programa ha 
			// finalizado correctamente.