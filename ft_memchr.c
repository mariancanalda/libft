/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:40:40 by macanald          #+#    #+#             */
/*   Updated: 2023/02/01 15:40:51 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p = s;
    while (n--)
    {
        if (*p == (unsigned char)c)
            return (void *)p;
        p++;
    }
    return NULL;
}

int main()
{
    char str[] = "Hello, World!";
    char c = 'W';
    char *result;
    
    result = ft_memchr(str, c, strlen(str));
    if (result == NULL)
        printf("Character '%c' not found in the string.\n", c);
    else
        printf("Character '%c' found at position %ld\n", c, result - str);
    return 0;
}
