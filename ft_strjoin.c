/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 20:20:36 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 23:29:25 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strjoin' = 'string join'.
	 * It takes two strings and returns a new string that is 
	 * the concatenation of the two strings
	 * 
	 * @param s1 The first string to be joined.
	 * 
	 *  @param s2 the string to be appended to s1.
	 * 
	 * @return A pointer to a new string that is the result of the 
	 * concatenation of s1 and s2.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 * */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

	// 'if (!s1 || !s2)'
	// The function checks if s1 and s2 exist and are not NULL. 
	// 'return (NULL)'
	// If one of the strings is NULL, the function returns NULL. 

	// 'result = (char *)malloc(sizeof(char) * (ft_strlen(s1) 
	// + ft_strlen(s2) + 1))'
	// 	Let the variable 'result' be signed to a block of 
	// 	dynamic memory using the 'malloc' function. 
	// 	Enough memory is reserved to contain the concatenation of 
	// 	two character strings together with the terminating 
	// 	null character.

	// To determine the size required for the memory to be 
	// allocated, the 'ft_strlen' function is used to obtain 
	// the length of each string s1 and s2. 
	// Then the length of both strings plus 1 is added together
	// to account for the null terminating character. 

	// The expression (char *) before the call to malloc is 
	// a conversion type that converts the pointer returned by 
	// malloc of type void * to a pointer of type char *. 
	// This is done because the data type returned by malloc 
	// is a pointer to void, which means that it can point to 
	// any data type. 
	// By converting it to a pointer of type char *, it is 
	// indicated that reserved memory will be used to store 
	// characters.

	// 'if (!result) return (NULL)' If the call to malloc fails, 
	// return NULL.

	// 'while (s1[i]) result[i] = s1[i] i++'
	// The function copies each character of the string 's1' 
	// into the new string 'result', until the null character 
	// (\0) is found.
	// 	'i' is initialized to 0 and is used to copy the 
	// 	characters from string 's1' into the result. 
	// 	Then 'i' is incremented until the end of 's1' 
	// 	is reached.

	// 'while (s2[j]) result[i + j] = s2[j] j++;'
	// The function copies each character of the string 's2' into 
	// the new string 'result', starting at index 'i', which is
	//  the index where the string 's1' ends. 
	// 	'j' is initialized to 0 and is used to copy the characters 
	// 	from string 's2' into the result, starting at position 
	// 	'i' of the result. 
	// 	Then 'j' is incremented until the end 
	// 	of 's2' is reached. 

	// 'result[i + j] = '\0'.
	// The function appends the null character (\0) to the end 
	// of the new string result, to indicate the end of the string.

	// return (result);
	// The function returns the new string result.

// int main(void)
// {
//     char *s1;
//     char *s2;
//     char *result;

// 	*s1 = "Hello";
//     *s2 = " World!";
//     *result = ft_strjoin(s1, s2);
//     if (!result)
//     {
//         printf("Error: failed to allocate memory for result.\n");
//         return (1);
//     }
//     printf("s1 = %s\n", s1);
//     printf("s2 = %s\n", s2);
//     printf("result = %s\n", result);
//     free(result);
//     return (0);
// }

	// *s1 = "Hello."
	// *s2 = " World!";
	// Two strings s1 and s2 are defined. 

	// *result = ft_strjoin(s1, s2);
	// 'ft_strjoin' is called with s1 and s2 as arguments. 

	// 	'if (!result) printf("Error: failed to allocate memory 
	// 	for result.\n") return (1)'
	// 	If 'ft_strjoin' returns NULL, an error message is printed. 
	// 	error message is printed. 

	// 	'printf("s1 = %s\n", s1)
	// 	printf("s2 = %s\n", s2)
	// 	printf("result = %s\n", result)'
	// 	If the function does not return NULL, it prints each string 
	// 	and the result string.

	// 'free(result)' 
	// The memory allocated to the result string is freed.
