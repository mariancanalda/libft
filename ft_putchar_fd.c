/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:31:50 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 19:36:49 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <fcntl.h>
// #include "libft.h"

/**
 * Write the character c to the file descriptor fd
 * 
 * @param c the character to print
 * @param fd file descriptor
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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
