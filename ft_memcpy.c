/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/02/01 17:04:24 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dst[20];

// 	src = "Hello World!";
// 	ft_memcpy(dst, src, strlen(src) + 1);
// 	printf("%s\n", dst);
// 	return (0);
// }

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
    printf("After ft_memcpy()\n");
    ft_memcpy((void *)&c_array[1], (void *)&c_array[3], 5);
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
//     printf("After ft_memcpy()\n");
//     ft_memcpy((void *)&c_array[3], (void *)&c_array[1], 5);
//     print_elements(c_array, 10);
// } 