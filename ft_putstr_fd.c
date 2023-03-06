/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:44:34 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:39 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putstr_fd' = "put string to file descriptor".
	 * 
	 * Writes the string 's' to the file descriptor 'fd'.
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

	// 'while (s[i])' A while loop is used to loop through 
	// the string character by character. 

	// 	'write(fd, &s[i], 1)'  
	// 	At each iteration, the current character is written 
	// 	to the file descriptor fd using the 'write' function, 
	// 	and the counter 'i' is incremented. At the end of the 
	// 	function, the entire string will have been written 
	// 	to the specified file.

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

	// In the main function, the "test.txt" file is created with 
	// permissions write for the user and read for all others. 
	// all others. 

	// The function ft_putstr_fd is called to write the string 
	// "Hello, world" in the newly created file, close the file.

	// After running the program, the file "test.txt" will be 
	// created and contain the string "Hello, world".
