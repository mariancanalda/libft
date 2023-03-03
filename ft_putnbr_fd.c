/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:34:11 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:29:26 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putnbr_fd' = "put number file descriptor"
	 * 
	 * Write the integer 'n' to the file descriptor fd.
	 * Se encarga de imprimir cualquier número entero de 32 bits 
	 * con signo en un archivo especificado (file descriptor).
	 * 
	 * @param n the number to print. El número a imprimir.
	 * 
	 * @param fd file descriptor. Descriptor de archivo.
	 * 
	 * @return the number of characters printed.
	 * Devuelve el número de caracteres impresos.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <unistd.h>
	 * #include <fcntl.h>
	 **/

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
	// 'if (n == -2147483648)'
	// Verifica si el número es igual a -2147483648, 
	// (que es el valor mínimo que puede tener un entero de 32 
	// bits con signo en complemento a dos). 
		// En caso de ser así, se imprime directamente 
		// "-2147483648" en el archivo.

	// 'if (n < 0) write(fd, "-", 1) n = -n'
	// Si el número es negativo, se escribe el carácter 
	// "-" en el archivo y se cambia el signo del número 
	// a positivo. 

	// 'if (n >= 10)'
	// Se verifica si 'n' es mayor o igual a 10. 
		// 'ft_putnbr_fd(n / 10, fd)'
		// Si es así, se llama a 'ft_putnbr_fd' recursivamente para 
		// imprimir los dígitos más significativos de 'n' dividiendo 
		// entre 10. 

	// c = n % 10 + '0';
	// Se calcula el dígito menos significativo de 'n' tomando 
	// el módulo de 'n' con 10 y sumándole el carácter '0' 
	// para obtener su representación en carácter. 

	// Se escribe este carácter en el archivo usando la función 
	// 'write' con un tamaño de 1 byte. De esta manera, 
	// los dígitos se escriben uno por uno de derecha a izquierda 
	// en el archivo.

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putnbr_fd(42, fd);
// 	close(fd);
// 	return (0);
// }

	// La función 'ft_putnbr_fd' se utiliza para escribir 42 
	// en un archivo llamado "test.txt". 

	// La función 'open' se utiliza para abrir el archivo 
	// en modo escritura y crearlo si no existe. 

	// Se llama a la función ft_putnbr_fd con el número 42 
	// y el descriptor de archivo fd. 

	// Se llama a la función close para cerrar el archivo.