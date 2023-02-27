/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:34:11 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 02:23:21 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * putnbr_fd = "put number file descriptor"
			 * 
			 * Write the integer 'n' to the file 
			 * descriptor fd.
			 * Escribe el entero 'n' en el descriptor 
			 * de fichero fd.
			 * 
			 * @param n the number to print.
			 * El número a imprimir.
			 * 
			 * @param fd file descriptor
			 * Descriptor de archivo.
			 * 
			 * @return the number of characters printed.
			 * Devuelve el número de caracteres impresos.
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <unistd.h>
			 * #include <fcntl.h>
			 */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

			// La función 'ft_putnbr_fd' se encarga de imprimir 
			// cualquier número entero de 32 bits con signo 
			// en un archivo especificado (file descriptor).

			// 1) Verifica si el número es igual a -2147483648, 
			// (que es el valor mínimo que puede tener un entero 
			// de 32 bits con signo en complemento a dos). 
			// En caso de ser así, se imprime directamente 
			// "-2147483648" en el archivo 
			// y se retorna de la función.

			// 2) Si el número es negativo, se escribe 
			// el carácter "-" en el archivo y se cambia el 
			// signo del número a positivo. 

			// 3) Realizo una llamada recursiva 
			// a la función 'ft_putnbr_fd' dividiendo el número 
			// original por 10 (n/10), de manera que se imprimen 
			// los dígitos del número empezando desde el más 
			// significativo (se empieza a imprimir el número 
			// desde la cifra de mayor valor). 

			// 4) Luego se calcula el dígito menos significativo 
			// del número actual (n % 10), se le suma el valor 
			// ASCII del carácter '0' y se escribe en el archivo.

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putnbr_fd(42, fd);
// 	close(fd);
// 	return (0);
// }

			// La función 'ft_putnbr_fd' se utiliza para escribir el 
			// número entero 42 en un archivo llamado "test.txt". 
			// La función open se utiliza para abrir el archivo 
			// en modo escritura y crearlo si no existe. 
			// A continuación, se llama a la función ft_putnbr_fd 
			// con el número 42 y el descriptor de archivo fd. 
			// Por último, se llama a la función close para 
			// cerrar el archivo.