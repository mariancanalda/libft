/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:34:11 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:37 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'putnbr_fd' = "put number file descriptor".
	 * 
	 * Write the integer 'n' to the file descriptor fd.
	 * 
	 * @param n the number to print.
	 * 
	 * @param fd file descriptor.
	 * 
	 * @return the number of characters printed.
	 * 
	 * Required libraries:
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
	// Checks if the number is equal to -2147483648, 
	// (which is the minimum value of a 32-bit signed 
	// integer can have).  
	// 	If so, the following is printed directly 
	// 	"-2147483648" in the file.

	// 'if (n < 0) write(fd, "-", 1) n = -n'
	// If the number is negative, write the character 
	// "-" in the file and change the sign of the number
	// to positive. 

	// 'if (n >= 10)'
	// Checked if 'n' is greater than or equal to 10. 
	// 	'ft_putnbr_fd(n / 10, fd)'
	// 	If so, 'ft_putnbr_fd' is called recursively 
	// 	to print the most significant digits of 'n' 
	// 	by dividing by 10. 

	// c = n % 10 + '0';
	// The least significant digit of 'n' is calculated 
	// by taking the modulus of 'n' with 10 and adding 
	// the character '0' to obtain its character 
	// representation. 

	// This character is written to the file using the 
	// function with a size of 1 byte. In this way, 
	// the digits are written one by one from right 
	// to left in the file. 

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
// 	ft_putnbr_fd(42, fd);
// 	close(fd);
// 	return (0);
// }

	// The 'ft_putnbr_fd' function is used to write 42 
	// to a file named "test.txt". 

	// The 'open' function is used to open the file 
	// in write mode and create it if it does not exist. 

	// The ft_putnbr_fd function is called with the number 
	// 42 and the file descriptor 'fd'. 

	// The 'close' function is called to close the file.