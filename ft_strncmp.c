/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:54:55 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 00:05:47 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'strncmmp' = "string compare n".
	 * 
	 * Compares the first 'n' characters of the strings 
	 * 's1' and 's2'.
	 * 
	 * @param s1 The first string to be compared.
	 * 
	 * @param s2 The string to compare to.
	 * 
	 * @param n The maximum number of characters to compare.
	 * 
	 * @return The difference between the first two characters 
	 * that differ in the strings s1 and s2.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <string.h>
	 */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

	// 'size_t i i = 0'
	// A counter 'i' is initialized which will be used to iterate 
	// through the character strings and compare their characters. 
	// characters.

	// "while (i < n && s1[i] != '\0' && s2[i] != '\0' 
	// && s1[i] == s2[i])"
	// A while loop is used to compare the characters in the two character 
	// strings. The loop is executed as long as 'i' is less than 'n' 
	// (the specified size),
	// 's1[i]' and 's2[i]' are not null (i.e., there are more 
	// characters to compare), and the character strings are equal. 

	// 	At each iteration of the loop, the counter 'i' is incremented 
	// 	to advance to the next characters in the strings.

	// 'if (i == n) return (0)'
	// If 'i' is equal to 'n', this means that the strings are equal. 
	// In that case, the value 0 is returned.

	// 'else 
	// return ((unsigned char)s1[i] - (unsigned char)s2[i]);'
	// Otherwise, the difference between the numeric value of the 
	// character in 's1[i]' and the numeric value of the character 
	// in 's2[i]'. 
	// 	Each character is converted to an unsigned char 
	// 	to avoid problems with the sign.

// int	main(void)
// {
// 	const char	s1[];
// 	const char	s2[];
// 	size_t		n;
// 	int			result;

// 	s1[6] = "Hello";
// 	s2[6] = "Hello";
// 	n = 5;
// 	result = ft_strncmp(s1, s2, n);
// 	printf("ft_strncmp = %d\n", result);
// 	return (0);
// }

	// Two arrays of characters 's1' and 's2' are declared 
	// without initializing them. 

	// The string "Hello" is assigned to the elements s1[6] and s2[6]. 
	// 	It is important to note that the size of the arrays 
	// 	must be large enough to contain the string and the null 
	// 	character indicating the end of the string. 

	// The variable 'n' is initialized with the value 5. 

	// The function 'ft_strncmp' is called with the parameters 
	// 's1', 's2' and 'n', and its result is stored in the 
	// variable 'result'. 

	// Finally, the value of 'result' is printed using 
	// the 'printf' function 

	// 0 is returned to indicate that the program has been 
	// executed correctly.
