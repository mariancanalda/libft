/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:42:07 by macanald          #+#    #+#             */
/*   Updated: 2023/02/25 22:55:03 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
		c %= 256;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
		if (i < 0)
			break ;
	}
	return (NULL);
}

// #define TEST_SUCCESS 0
// #define TEST_FAILED 1

// void *electric_alloc(size_t size)
// {
//     return malloc(size);
// }

// void *electric_alloc_rev(size_t size)
// {
//     return malloc(size);
// }

// int test_ft_strrchr(void)
// {
//     int res = TEST_SUCCESS;
//     char *str = electric_alloc(10);
//     __builtin___strcpy_chk(str, "123456789", 
// 		__builtin_object_size(str, 2 > 1 ? 1 : 0));

//     char *ret = ft_strrchr(str, 'a');

//     if (ret != NULL)
//     {
//         printf("Error: ft_strrchr() returned non-NULL pointer 
//			when character was not found\n");
//         res = TEST_FAILED;
//     }

//     free(str);

//     str = electric_alloc_rev(10);
//     __builtin___strcpy_chk(str, "123456789", 
//		__builtin_object_size(str, 2 > 1 ? 1 : 0));

//     ret = ft_strrchr(str, 'a');

//     if (ret != NULL)
//     {
//         printf("Error: ft_strrchr() returned non-NULL pointer 
//			when character was not found\n");
//         res = TEST_FAILED;
//     }

//     free(str);

//     return res;
// }

// int main(void)
// {
//     int res;

//     res = test_ft_strrchr();

//     if (res == TEST_SUCCESS)
//         printf("All tests passed successfully\n");
//     else
//         printf("Some tests failed\n");

//     return (res);
// }
