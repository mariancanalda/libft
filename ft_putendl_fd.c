/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:22:53 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 07:52:09 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * putendl = "put endline to file descriptor".
	 * 
	 * Write the string 's' to the file descriptor 'fd', followed 
	 * by a newline.
	 * Escribe la cadena 's' en el descriptor de fichero 'fd', 
	 * seguida de una nueva línea.
	 * 
	 * @param s The string to output. La cadena a imprimir.
	 * 
	 * @param fd file descriptor. Descriptor de fichero.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <unistd.h>
	 * #include <fcntl.h>
	 **/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
			i++;
	}
	write(fd, "\n", 1);
}

	// La función comienza inicializando una variable 'i' a 0, 
	// que se usará como índice para recorrer la cadena de 
	// caracteres 's' que se desea imprimir. 

	// while (s[i]) Se utiliza un bucle 'while' que se ejecuta 
	// mientras el carácter actual de 's' no sea el carácter 
	// nulo '(\0)'. 
		// En cada iteración del bucle, se escribe el carácter 
		// correspondiente al índice 'i' en el archivo descripto 
		// por 'fd' usando la función 'write()', y se incrementa 
		// el índice 'i'.

	// Después de que se haya escrito toda la cadena de 
	// caracteres en el archivo descripto por 'fd', se escribe 
	// un carácter de salto de línea '(\n)' en el mismo archivo 
	// usando la función 'write()'. 
		// Esto agrega una nueva línea al final de la cadena 
		// de caracteres que se ha impreso, lo que hace que 
		// la siguiente línea que se imprima en el archivo 
		// se escriba en una línea nueva.

// int	main(void)
// {
// 	int		fd;
// 	char	*str;

// 	str = "Hello, world";
// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// 	return (0);
// }

	// Se declara una variable 'fd' de tipo 'int', que se 
	// utilizará para almacenar el descriptor de archivo del 
	// archivo que se creará y un puntero a una cadena de 
	// caracteres llamado 'str' y se inicializa 
	// con la cadena de caracteres "Hello, world".

	// 'fd = open("test.txt", O_WRONLY | O_CREAT, 0644)'
	// Se llama a la función 'open()' con tres argumentos: 
		// 	El archivo que se va a crear ("test.txt").
		// 	Una combinación de banderas para especificar 
		// 	que se abrirá el archivo en modo de escritura 
		// 	("O_WRONLY") y que se creará el archivo si 
		// 	no existe ("O_CREAT").
		// Un permiso para el archivo (0644).

	// 'ft_putendl_fd(str, fd)' Se llama a 'ft_putendl_fd()' 
	// con dos argumentos: 
		// La cadena de caracteres 'str'.
		// El descriptor de archivo 'fd'. 

		// La función 'ft_putendl_fd()' escribe la cadena de 
		// caracteres en el archivo especificado por el descriptor 
		// de archivo y agrega un carácter de nueva línea ('\n') 
		// al final de la cadena.

	// Se cierra el descriptor de archivo llamando a la función 
	// close().

	// La función main() devuelve 0 para indicar que el programa se 
	// ha ejecutado correctamente.