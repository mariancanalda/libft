/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:44:34 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 13:29:33 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putstr_fd' = "put string to file descriptor"
	 * 
	 * Writes the string 's' to the file descriptor 'fd'.
	 * Escribe la cadena 's' en el descriptor de fichero 'fd'.
	 * 
	 * @param s The string to output. La cadena a imprimir.
	 * 
	 * @param fd file descriptor. Descriptor de archivo.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <unistd.h>
	 * #include <fcntl.h>
	 **/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

	// 'while (s[i])' Se utiliza un bucle while para recorrer la cadena 
	// de caracteres caracter por caracter. 

		// 'write(fd, &s[i], 1)'  
		// En cada iteración, se escribe el carácter actual en el 
		// descriptor de archivo fd usando la función 'write', 
		// y se incrementa el contador 'i'. Al final de la función, 
		// se habrá escrito la cadena completa en el archivo especificado.

// int	main(void)
// {
// int	fd;
// char	*str;

// 	str = "Hello, world";
// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putstr_fd(str, fd);
// 	close(fd);
// 	return (0);
// }

	// En la función main, se crea el archivo "test.txt" con 
	// permisos de escritura para el usuario y de lectura para 
	// todos los demás. 

	// Se llama a la función ft_putstr_fd para escribir la cadena 
	// "Hello, world" en el archivo recién creado, se cierra el archivo.

	// espués de ejecutar el programa, se creará el archivo "test.txt" 
	// y contendrá la cadena "Hello, world".