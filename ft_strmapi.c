/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:46:34 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 07:44:52 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strmapi' = "string map".
	 * 
	 * It takes a string and a function, and returns a new 
	 * string where each character is the result of the function 
	 * applied to the corresponding character of the original 
	 * string.
	 * 
	 * @param s The string to be mapped.
	 * 
	 * @param f The function to be applied to each character 
	 * of the string.
	 * 
	 * @return A pointer to a new string.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

	// The function 'ft_strmapi' takes two arguments: a string 's' 
	// and a pointer to a function 'f' which takes a string 's' 
	// and a pointer to a function 'f' which takes  char arguments 
	// and returns a 'char'. 

	// It declares two variables: 'i' to store the index and 
	// 'str' which will be the resulting string.

	// 'i = 0 while (s[i]) i++'.
	// The variable 'i' is initialized to 0 and a while loop is used 
	// to iterate through each character in the string 's' 
	// and count its length.
	// 	The first time 'i' is initialized to 0 is
	// 	 before the length of the string s is calculated. 
	// 	 It is used in a while loop to iterate through each 
	// 	 character of the string and count its length.

	// 'str = (char *)malloc((i + 1) * sizeof(*str))'
	// Dynamic memory is reserved for the resulting with 'malloc'. 
	// The reserved memory size is equal to '(i + 1) * sizeof(*str)', 
	// which is the size of a char multiplied by the length of 
	// the string 's' plus 1 (for the string terminating null character).

	// 'if (!str) return (NULL)' Checks if the memory allocation was 
	// successful, otherwise NULL is returned.

	// 'i = 0 while (s[i]) str[i] = f(i, s[i]) i++;'
	// A while loop is used to iterate through each character in 
	// the string 's'. At each iteration, the function 'f' is called 
	// and passed the current index 'i' and the corresponding character 
	// of the string 's'. 
	// The result of function 'f' is mapped to the corresponding 
	// character in the string 'str'.
	// 	The second time that 'i' is initialized to 0 is before 
	// 	it is used in another while loop to iterate 
	// 	through each character in the string 's' and 
	// 	apply the function 'f' to each of them.

	// The null string termination character 
	// to the string str and the resulting string is returned.

// char	to_upper(unsigned int i, char c)
// {
// 	(void) i;
// 	if (c >= 'a' && c <= 'z')
// 	c -= 32;
// 	return (c);
// }

	// Receives the index of the current character and the 
	// current character, 

	// If the character is a lowercase letter, it converts 
	// it to uppercase. 

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("hello, world", to_upper);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

	// 'str = ft_strmapi("hello, world", to_upper)'
	// The function 'ft_strmapi' is called with two arguments: 
	// 'hello, world' string and the 'to_upper' function.
	// 	The 'to_upper' function takes a character and 
	// 	returns the uppercase character. 
	// The 'ft_strmapi' function returns a new string 
	// which is the result of applying the 'to_upper' function 
	// to each character of the string "hello, world".
	// This string is stored in the variable 'str'.

	// printf("%sname", str);
	// It is printed to the screen with a string format %s, 
	// indicating that the string to print is in 
	// the next argument.

	// It is important to free the memory allocated 
	// dynamically to the string 'str' using 
	// the 'free' function to avoid memory leaks.

	// Returns 0 to indicate that the program 
	// was executed correctly.
