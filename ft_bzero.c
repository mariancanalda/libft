/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:17:54 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 12:05:50 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'bzero' = "zeroing a byte string".
	 * 
	 * It sets the first 'n' bytes of the memory area pointed 
	 * to by 'str' to zero.
	 * 
	 * @param str This is the pointer to the block of memory to fill.
	 * 
	 * @param n The number of bytes to be zeroed.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <string.h>
	 * #include <stdlib.h>
	 **/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}

	// As long as 'i' is less than 'n' (the number of bytes 
	// to be deleted), sets the current byte to zero by 
	// assigning ((char *)str)[i] = 0 and increment 'i' by 
	// one via i++. 

	// 	The conversion of the 'void *str' pointer to a pointer of type 
	// 	'char *' is a casting. It is done in order to be able to 
	// 	manipulate the memory contents "byte by byte" (individual bytes,
	// 	instead of words). 
	// 	'void' pointers do not have an associated data type and 
	// 	cannot be used to access or modify the data they point to.

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strdup("Hello, World!");
// 	ft_bzero(str, ft_strlen(str));
// 	printf("String with null values: %s\n", str);
// 	free(str);
// 	return (0);
// }

	// A pointer to a string is declared and is assigned the address 
	// of a duplicate string "Hello, World!" using ft_strdup. 
	// 'str = ft_strdup("Hello, World!")'
	// This is done in order to manipulate the string without 
	// altering the original string.

	// 'ft_bzero' is called with the arguments 'str' 
	// (the pointer to the string) and 'ft_strlen(str)' 
	// (the length of the string) to set all bytes of the 
	// string to zero. 

	// The modified string (empty string) is printed, and the 
	// memory allocated to the duplicated string 
	// with 'free' is freed. 
