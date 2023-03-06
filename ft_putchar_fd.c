/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:31:50 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:31 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putchar' = "put character".
	 * 
	 * Write the character 'c' to the file descriptor 'fd'.
	 * 
	 * @param c the character to print.
	 * 
	 * @param fd file descriptor.
	 * 
	 * Required libraries:
	 * #include <unistd.h>
	 * #include <fcntl.h>
	 **/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

	// The function receives two arguments:
	// 	char c: is the character to be written to the file.
	// 	int fd: is the file descriptor of the target file where 
	// 	the character is to be written.

	// The function uses the write() function to write the character
	// to the destination file. The write() function is used to write 
	// a single byte (&c) to the destination file specified by fd. 

	// The write() function returns the number of bytes written but 
	// this value is not used in the 'ft_putchar_fd' function.

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

	// The 'main' function opens a file named "test.txt" in write mode 
	// (O_WRONLY) and creates the file if it does not exist (O_CREAT). 
	// The third parameter (0644) is a mode indicating the permissions 
	// to be set for the file. In this case, 0644 sets read and write 
	// permissions for the file owner and read-only permissions for 
	// other users.

	// The 'ft_putchar_fd' function writes the character 'A' to the 
	// file using the write() function. 

	// After writing the character, the main function closes the 
	// file using the close() function. 
