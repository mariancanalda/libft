/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:31:50 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 01:33:45 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

			/**
			 * putchar = "put character"
			 * 
			 * Write the character 'c' to the file 
			 * descriptor 'fd'.
			 * Escribe el carácter 'c' en un archivo 
			 * de destino especificado por el descriptor 
			 * de archivo 'fd'.
			 * 
			 * @param c the character to print.
			 * Carácter a imprimir.
			 * @param fd file descriptor.
			 * Descriptor de fichero
			 * 
			 * Required libraries. Librerías necesarias:
			 * #include <unistd.h>
			 * #include <fcntl.h>
			 */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

			// La función recibe dos argumentos:
				// char c: es el carácter que se va a 
				// escribir en el archivo.
				// int fd: es el descriptor de archivo 
				// del archivo de destino donde se va 
				// a escribir el carácter.

			// La función utiliza la función write() 
			// para escribir el carácter en el archivo 
			// de destino. La función write() se utiliza 
			// para escribir un solo byte (&c) en el archivo 
			// de destino especificado por fd. 
			// La función write() devuelve el número de 
			// bytes escritos, pero ese valor no se 
			// utiliza en la función 'ft_putchar_fd'.

// int	main(void)
// {
// 	int		fd;
// 	char	c;

// 	c = 'A';
// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putchar_fd(c, fd);
// 	close(fd);
// 	return (0);
// }

			// La función 'main' abre un archivo llamado 
			// "test.txt" en modo de escritura (O_WRONLY) 
			// y crea el archivo si no existe (O_CREAT). 
			// El tercer parámetro (0644) es un modo que 
			// indica los permisos que se deben establecer 
			// para el archivo. En este caso, 0644 establece 
			// permisos de lectura y escritura para el 
			// propietario del archivo y solo permisos de 
			// lectura para otros usuarios.

			// La función ft_putchar_fd escribe el carácter 'A' 
			// en el archivo utilizando la función write(). 
			// Después de escribir el carácter, la función main cierra 
			// el archivo utilizando la función close().
