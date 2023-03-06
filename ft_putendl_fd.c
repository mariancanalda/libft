/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:22:53 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 21:54:30 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putendl' = "put endline to file descriptor".
	 * 
	 * Write the string 's' to the file descriptor 'fd', followed 
	 * by a newline.
	 * 
	 * @param s The string to output.
	 * 
	 * @param fd file descriptor.
	 * 
	 * Required libraries:
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

	// The function starts by initializing a variable 'i' to 0, 
	// which will be used as an index to traverse the string 's' 
	// to be printed. 

	// while (s[i]) A 'while' loop is used which is executed 
	// as long as the current character of 's' is not the character 
	// null character '(\0)'. 
	// 	At each iteration of the loop, the character corresponding
	// 	 to the index 'i' is written to the file described by 'fd' 
	// 	 using the 'write()' function, and the index 'i' is 
	// 	 incremented. 

	// After the entire string of characters has been written 
	// to the file described by 'fd', a linefeed character 
	// '(\n)' is written to the same file using the 'write()' 
	// function. 

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

	// A variable 'fd' of type 'int' is declared, which will be 
	// used to store the file descriptor of the file to be created 
	// and a pointer to a string called 'str' and is initialized 
	// with the string "Hello, world".

	// 'fd = open("test.txt", O_WRONLY | O_CREAT, 0644)'
	// The function 'open()' is called with three arguments: 
	// 		The file to be created ("test.txt").
	// 		A combination of flags to specify that the 
	// 		file is to be opened in write mode 
	// 		("O_WRONLY") and that the file is to be created 
	// 		if does not exist ("O_CREAT").
	// 	A permission for the file (0644).

	// 'ft_putendl_fd(str, fd)' 'ft_putendl_fd()' is called 
	// with two arguments: 
	// 	The string 'str'.
	// 	The file descriptor 'fd'. 

	// 	The function 'ft_putendl_fd()' writes the string in 
	// 	the file specified by the file descriptor and appends
	// 	a newline character ('str') to the end of the string. 
	// 	to the end of the string.

	// The file descriptor is closed by calling the function 
	// close() function.

	// The main() function returns 0 to indicate that the program h
	// as been successfully executed. 
