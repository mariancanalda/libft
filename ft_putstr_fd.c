/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:44:34 by macanald          #+#    #+#             */
/*   Updated: 2023/02/08 19:45:16 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main(void)
{
    int fd;
    char *str;

    str = "Hello, world";
    fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
    ft_putstr_fd(str, fd);
    close(fd);
    return (0);
}

