/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:20:16 by macanald          #+#    #+#             */
/*   Updated: 2023/02/01 17:09:26 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*#include "libft.h"*/

/**
 * If the destination is less than the source, copy the source to the destination, otherwise copy the
 * source to the destination in reverse
 * 
 * @param dst This is the pointer to the destination array where the content is to be copied,
 * type-casted to a void*.
 * @param src This is the pointer to the source of data to be copied, type-casted to a pointer of type
 * void*.
 * @param len the number of bytes to copy
 * 
 * @return The address of the first byte of the destination string.
 */
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d;
    char    *s;

    d = (char *)dst;
    s = (char *)src;
    if (dst == NULL && src == NULL)
        return (NULL);
    if (d < s)
        while (len--)
            *d++ = *s++;
    else
    {
        d = d + len - 1;
        s = s + len - 1;
        while (len--)
            *d-- = *s--;
    }
    return (dest);
}


void print_elements(char *array, int size)
{
    int i;
    printf ("Elements : ");
    for (i = 0; i < size; i++) {
        printf ("%c, ", array[i]);
    }
    printf ("\n");
} 

int    main(void)
{
    char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    print_elements(c_array, sizeof(c_array));
    printf("After ft_memmove()\n");
    ft_memmove((void *)&c_array[1], (void *)&c_array[3], 5);
    print_elements(c_array, sizeof(c_array));
} 

// void print_elements(int *array, int size)
// {
//     int i;
//     printf ("Elements : ");
//     for (i = 0; i < size; i++) {
//         printf ("%d, ", array[i]);
//     }
//     printf ("\n");
// } 

// int    main(void)
// {
//     int c_array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     print_elements(c_array, 10);
//     printf("After ft_memmove()\n");
//     ft_memmove((void *)&c_array[3], (void *)&c_array[1], 5);
//     print_elements(c_array, 10);
// } 
