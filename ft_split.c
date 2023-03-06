/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:00:15 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 22:42:16 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * It takes a string and a character, and returns an array of strings, 
	 * each of which is a word from the original string, separated 
	 * by the character.
	 * 
	 * @param s The string to be split. 
	 * 
	 * @param c the character to split the string by
	 * 
	 *  @return A pointer to a pointer to a char.
	 * 
	 * Required libraries:
	 * #include <stdlib.h>
	 * #include <unistd.h>
	 * #include <stdio.h>
	 * 
	 **/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

	// The count_words function takes two arguments: a character 
	// string (char const *s) and a character 'c'. The function 
	// counts the number of words in the string 's' that are 
	// separated by the 'c' character and returns the count.  

	// It is defined as static because its scope is limited to 
	// the file where it is defined, and cannot be used in other 
	// program files. 

	// count = 0 The variable 'count' is initialized to 0. 

	// while (*s) The string 's' is traversed as long as the end 
	// is not reached (as long as the character pointed by the 
	// pointer 's' is not 's'). 
	// 		if (*s == c) At each iteration of the 'while' loop, 
	// 		it checks if the character pointed to by 's' is the 
	// 		delimiter 'c'. 
	// 		's++' If so, 's' is incremented to point to the 
	// 		next character. 
	// 		If not, it means that a word has been found, 
	// 		so the counter 'count' is incremented (count++) and 
	// 		the word is traversed (s++;) until the end of the word 
	// 		is reached or the delimiter is or until the delimiter 
	// 		'c' is found. 
	// 		(while (*s && *s != c))

	// Finally, the value of 'count' is returned, which corresponds to 
	// the number of words found in the string 'c'. 

static char	*get_word(char const *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

	// The 'get_word' function returns a substring of 's' starting 
	// at the first character that is not a delimiter and ends at 
	// the next delimiter or at the end of the string. 

	// The function starts using a 'while (s[len] && s[len] != c)' 
	// loop to count the number of characters in the substring, 
	// stopping when the end of the string 's' is reached or when 
	// the character 'c' is encountered.
	// 	The loop increments the variable 'len' on each iteration 
	// 	as long as s[len] is not equal to c.  

	// 'word = (char *)malloc(sizeof(char) * (len + 1))' is used 
	// to allocate dynamic memory in C for a character string that 
	// has a length of len plus a null character, using 
	// 'malloc'. If the allocation fails it returns null. The result of 
	// 'malloc' is stored in 'word', which is a pointer pointing to the 
	// start of the allocated block of memory. 

	// Uses 'ft_strlcpy' (which copies a string of a given maximum size) 
	// to copy the corresponding characters from 's' to the new 
	// substring. 

	// Finally, it returns the newly created substring.

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (split)
	{
		while (split[i])
		{	
			free(split[i]);
				i++;
		}	
		free(split);
	}
}

	// The free_split function is useful when you are working with 
	// dynamically allocated arrays of strings in C and you want to 
	// free the memory allocated to the array and its elements once 
	// they are no longer needed. 

	// An integer variable 'i' is initialized to zero. 

	// 'if (split)' checks that the input pointer is not null
	// (if it actually points to a previously allocated array of strings). 

	// 		If it is null, there is nothing to free and the function exits. 
	// 		If it is not null, the function enters a while loop that loops 
	// 		through each character string in the string array.

	// 'while (split[i])' Inside while, it loops through the array of strings, 
	// checking each element of the array to see whether it is null or not.
	// 	'free(split[i])' If it is not null, the memory allocated to 
	// 	the eelement is freed by free().  
	// 	Then, it increments the variable 'i' to move to the next string.

	//  After freeing the memory of each element in the array, the memory 
	//  allocated to the array itself is freed by the free() function. 

	// The return type is "void", which means that the function 
	// does not return any value.

static char	**divide_string(char const *s, char c, int total_words, \
						char **result)
{
	int	i;

	i = 0;
	while (*s && i < total_words)
	{
		if (*s == c)
			s++;
		else
		{
			result[i] = get_word(s, c);
			if (!result[i])
			{
				free_split(result);
				return (NULL);
			}	
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (result);
}

	// It receives four arguments: 
	// 	a pointer to a string (const char *s)
	// 	a character (char c)
	// 	an integer (const int total_words)
	// 	a pointer to an array of character pointers (char **result).

	// Its purpose is to split the string 's' into several substrings 
	// using the character 'c' as a separator, and store each substring 
	// in an substring in a position of the array 'result'.

	// 'while (*s && i < total_words)' The function iterates over 
	// string 's' until all the words specified in 'total_words' 
	// have been split.

	// 	if (*s == c) At each iteration, checks if the current 
	// 	character pointed to by 's' is equal to 'c'. 
	// 		s++; If it is 'c', it advances to the next 
	// 		character in the string 's'.

	// 		result[i] = get_word(s, c); If it is not 'c', call the 
	// 		function 'get_word' to get the substring from the
	// 		current character pointed to by 's' up to the next 
	// 		character equal to 'c', and stores it at position 'i' 
	// 		of the result array. 

	// 		if (!result[i]) is used to check if the assignment of 
	// 		result[i] was successful.
	// 			If 'get_word' returns a null pointer, which indicates 
	// 			an error, the function 'divide_string' frees the memory 
	// 			allocated to 'result' by calling the function 'free_split' 
	// 			and returns a null pointer. 

	// 		while (*s && *s != c) The function advances 's++' to the next 
	// 		character equal to 'c' or to the end of the string 's', and 
	// 		increments 'i' by one.

	// 	The loop ends when 'total_words' substrings have been encountered, 
	// 	or the end of the string 's' has been reached.

	// 'return (result)' The function returns a pointer to the array 'result', 
	// which contains the substrings obtained from 's'.

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			total_words;

	if (!s)
		return (NULL);
	total_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (!result)
		return (NULL);
	result[total_words] = NULL;
	result = divide_string(s, c, total_words, result);
	return (result);
}
	// Takes a string of characters "s" and a character "c" as input, 
	// and returns an array of strings representing the words in the 
	// original string separated by the "c" character.

	// 'const int total_words = count_words(s, c)' 
	// calls 'count_words' (which counts the total number of 
	// words in the input string 's') in order to correctly allocate 
	// the memory needed for the string array to be returned. 
	// 	This variable is declared as 'const' because its value
	// 	is not expected to change. In this way, it is guaranteed 
	// 	that the value stored in "total_words" will not be 
	// 	accidentally in other parts of the code and remains 
	// 	constant at all times. 

	// If "s" is null, the function returns "NULL" immediately.

	// 'result = (char **)malloc(sizeof(char *) * (total_words + 1))'
	// Memory is allocated for the array of character strings 
	// by calling the 'malloc' function. 
	// 	The amount of memory required is calculated by 
	// 	multiplying the size of a pointer to a character 
	// 	by the total number of words plus one (to leave room 
	// 	for a null pointer at the end of the array). 

	// If the memory allocation fails, it returns "NULL". 

	// If it does not fail, the last position of the array is 
	// initialized with a null pointer and 'divide_string' is 
	// called to divide the string 's' into words using the 
	// the character 'c'. 
	// 	This function is responsible for allocating memory 
	// 	for each character string in the array 
	// 	and copying the characters of the original string 
	// 	into each character string.

	// "ft_split" returns the resulting string array.

// int	main(void)
// {
// 	char	**words;
// 	int		i;

// 	words = ft_split("Hello,this,is,an,example", ',');
// 	i = 0;
// 	if (!words)
// 	{
// 		printf("Error separating the string.\n");
// 		return (1);
// 	}
// 	while (words[i])
// 	{
// 		printf("%s\n", words[i]);
// 		i++;
// 	}
// 	free_split(words);
// 	return (0);
// }

	// The 'ft_split' function returns a pointer to an array 
	// of character strings, where each string of characters 
	// is a substring of the original string delimited by 
	// the delimiter.

	//  words = ft_split("Hello,this,is,an,example", ',')
	// The program starts by calling the function 'ft_split' 
	// with a string and a delimiter as arguments. 

	// 	while (words[i])
	// 			printf("%s\n", words[i]);
	// 			i++;
	// The main function goes through the resulting array of 
	// character strings and prints each string to the console 
	// using the printf function.  
	// 		If the string array is null, which means that the 
	// 		input string could not be separated, an error message 
	// 		will be printed and a value other than 0 will be 
	// 		returned to indicate that the program has failed.

	// Call 'free_split' to free the memory allocated to the array 
	// of strings and returns 0 to indicate that the program has 
	// terminated successfully. 
