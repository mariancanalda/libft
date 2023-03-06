/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:08:00 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 08:02:38 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * 'strtrim' = "strim string".
 * 
 * It returns 1 if the character 'c' is in the string set, 
 * and 0 otherwise.
 * 
 * @param c The character to check.
 * 
 * @param set The set of characters to be searched.
 * 
 * @return The number of words in the string.
 * 
 * Required libraries:
 * // #include <stdio.h>
 * // #include <string.h>
 * // #include <stdlib.h>
 **/

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// The 'is_set is' function is an auxiliary function 
// that returns 1 if a character 'c' is found in a 
// character 'set' and 0 otherwise.

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1 + start);
	if (end)
	{
		while (is_set(s1[start + end - 1], set))
			end--;
	}
	return (ft_substr(s1, start, end));
}

	// The function 'ft_strtrim' receives as parameters a string 
	// 's1' and a character set 'set' as parameters. 

	// The variable 'start' is used to keep track of 
	// the index of the first non-set character in 's1'.
	// The variable 'end' is used to keep track of 
	// the length of the non-set substring in 's1' that 
	// which will be copied to the resulting new string.

	// The purpose of this function is to remove the characters 
	// found in 'set' at the beginning and at the end of the string 
	// 's1'.

	// The function starts by checking '!s1' is true or not: 
	// 	If it is (i.e., if 's1' is NULL or an empty string), 
	// 	the code returns a null pointer (NULL). 

	// 	Otherwise, if 's1' is neither null nor an empty 
	// 	string empty:'
	// 	while (s1[start] && is_set(s1[start], set))'.
	// 	This loop is used to loop through a string 
	// 	string 's1' starting from position 'start' and continuing 
	// 	as long as two conditions are satisfied: (1) that the 
	// 	current character in the string is not NULL,
	// 	and (2) the current character is present in the set 
	// 	character set.  

	// 	'start++' The start index is incremented at each 
	// 	iteration of the loop, which allows it to traverse 
	// 	the string to the end or until a character not present 
	// 	in the set character set is encountered.

	// 	The function traverses the characters of 's1' starting
	// 	at index 'start' until the end of the string or until it 
	// 	finds a character that does not belong to 
	// 	to set. When it finds a character that does not belong to 
	// 	to set, it sets the value of start to that index.

	// 	'end = ft_strlen(s1 + start)' 
	// 	Then, 'ft_strlen' is used to calculate the value of 
	// 	end as the length of the substring starting at 's1 '+ start'. 
	// 	at 's1 '+ start'. 

	// Finally, the function returns a new string using the 
	// the ft_substr function, which takes three arguments: 
	// the original string 's1', the index start and the length end.
	// The 'ft_substr' function returns a copy of the substring of 
	// 's1' that starts at index 'start' and has length 'end'. 
	// This substring is the resulting string without the start 
	// and end characters belonging to set. 

// int	main(void)
// {
// 	char const	*s1;
// 	char		*set;
// 	char		*trimmed_str;

// 	s1 = "  Hello, World!  ";
// 	set = " !";
// 	trimmed_str = ft_strtrim(s1, set);
// 	printf("The trimmed string is: %s\n", trimmed_str);
// 	free(trimmed_str);
// 	return (0);
// }

	// ft_strtrim is used to remove spaces and exclamation marks 
	// at the beginning and end of exclamation marks at the
	// beginning and end of the string " Hello, World! "

	// The result is a new string "Hello, World! " 
	// which is stored in the variable 'trimmed_str' and 
	// is printed to standard output.

	//  The memory allocated to 'trimmed_str' is freed using 
	//  the 'free' function. 
