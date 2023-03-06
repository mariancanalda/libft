/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:51:54 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 08:17:09 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * 'substr' = "substring".
 * 
 * If the string is NULL, return NULL. If the start index is 
 * greater than the length of the string,return an empty 
 * string. If the length is greater than the length of the 
 * string minus the start index, set the length to the 
 * length of the string minus the start index. 
 * Allocate memory for the substring, copy the substring 
 * into the allocated memory, and return the substring.
 * 
 * @param s The string to be split.
 * 
 * @param start the index of the first character to include 
 * in the substring. 
 * 
 * @param len the length of the substring to be returned.
 * 
 * @return A pointer to a new string.
 * 
 * Required libraries:
 * // #include <stdio.h>
 * // #include <stdlib.h>
 * // #include <string.h>
 * */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = (char *)malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// Declare a substr string, which will be used to store the 
// substring. If the input string s is null, then 
// the function returns a null pointer. Next, the function 
// function checks if the 'start' index start is 
// beyond the length of the string 's'. If it is, then 
// the function returns an empty string using 'malloc' 
// to reserve memory for a single null character.

// If start is less than the length of s, then the function 
// continues to check if len is greater than the length of 
// the substring starting at position start. If so, then the 
// length len is adjusted so that it is not greater than 
// the length of the substring starting at the start position.

// Then, the function reserves the memory needed to store 
// the substring using store the substring using malloc. If the 
// memory allocation fails, then the function returns a null pointer. 

// The function copies the corresponding substring of 's' into the 
// new substr string using ft_strlcpy. The new string 
// is returned as a result of the function.

// void	ft_print_result(char *str)
// {
// 	if (!str)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", str);
// }

// The ft_print_result function prints the string passed as 
// an argument. If the string is null, it prints the string 
// "NULL".

// int	main(void)
// {
// 	char	*str;
// 	char	*strsub;
// 	char	*bullshit;

// 	str = "Hello, World!";
// 	strsub = ft_substr(str, 4, 7);
// 	if (!strsub)
// 		ft_print_result("NULL");
// 	else
// 	{
// 		bullshit = &strsub[3];
// 		ft_strlcpy(bullshit, "bullshit", ft_strlen("bullshit")+1);
// 		ft_print_result(strsub);
// 	}
// 	free(strsub);
// 	return (0);
// }

// A string 'str' is declared, which is set to "Hello, World!".

// Next, 'ft_substr' is called to obtain a substring of 'str' 
// starting at position 4 and having a maximum length of up to 7 
// characters. The new substring is stored in the variable 'strsub'.

// If the substring is null, "NULL" is printed using 'ft_print_result'. 
// If not, a bullshit pointer is a bullshit pointer is declared which 
// is set to the address of the fourth character of 'strsub'. 

// Then, use 'ft_strlcpy' to copy the string 'bullshit' into bullshit, 
// replacing the into bullshit, replacing the characters that were 
// there before. 

// Finally, the resulting substring is printed using 'ft_strlcpy' 
// the resulting substring using 'ft_print_result', 
// and the memory reserved for 'strsub' is freed.
