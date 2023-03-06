/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:33:10 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:56:43 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * 'strdup' = "string duplicate".
 * 
 * It duplicates a string.
 * 
 * @param s1 The string to be copied.
 * 
 * @return A pointer to a new string that is a 
 * duplicate of the string s1.
 * 
 * Required libraries:
 * #include <stdio.h>
 * #include <stdlib.h>
 * #include <string.h>
 */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = ft_strlen(s1);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, len + 1);
	return (result);
}

	// Receives as argument a pointer to a string 's1'. 
	// character string 's1' as an argument.

	// 	len = ft_strlen(s1) calls 'ft_strlen' function to 
	// 	determine the length of the input string 's1', and 
	// 	assigns the return value to the variable 'len'.

	// 	'result = (char *)malloc((len + 1) * sizeof(char))'
	// 	Reserves a block of memory large enough to contain 
	// 	the string 's1' plus an additional byte for null 
	// 	character at the end of the string. 
	// 		The data type is converted to a pointer of 
	// 		type char, since malloc returns a pointer of
	// 		void type. 

	// 	'if (result == NULL) return (NULL)' If malloc returns a 
	// 	null pointer, which means that the requested memory could 
	// 	not be allocated, the function returns a null pointer.

	// 	ft_memcpy(result, s1, len + 1) copies the input string 's1' 
	// 	 into the memory allocated to 'result', including the final 
	// 	 null character.  

	// 	'return (result)' Returns the result pointer, which points 
	// 	to the copy of the input string s1 that has been created.

// int	main(void)
// {
// 	const char	*s1;
// 	char		*result;

// 	s1 = "Hello World";
// 	result = ft_strdup(s1);
// 	if (result == NULL)
// 	{
// 		printf("Error\n");
// 		return (1);
// 	}
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }

	// A string 's1' is defined. 

	// The function 'ft_strdup' is called to create a copy of
	// the string 's1'. 
	// 	If the memory allocation with 'malloc' fails, the function
	// 	'ft_strdup' returns NULL. An error message is printed 
	// 	and the program is terminated with a non-zero return value. 

	// 	If the memory allocation succeeds, the copy of the string 's1' 
	// 	is printed, the memory allocated by 'malloc' is freed using 
	// 	'free', and the program terminates with a return value of zero. 
