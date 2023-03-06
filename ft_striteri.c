/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:45:57 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 23:13:06 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'striteri' = "String iterator".
	 * 
	 * Iterate through the string s, passing the index and the address 
	 * of each character to the function f.
	 * 
	 * @param s The string to iterate through.
	 * @param f The function to be applied to each character.
	 * 
	 * Required libraries. Librerías necesarias:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * #include <string.h>
	 */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

	// It is used to iterate through a string 's' and apply 
	// a function 'f' to each character in the string.

	// 'while (s[i])'
	// The function loops through each character in the string 's' 
	// until it reaches the the null character '\0'.
	// 		'f(i, &s[i])'
	// 	Calls the function 'f' with the index of the character and 
	// 	the memory address of the character. 
	// 	This function is commonly used to apply a 
	// 	peration to each character in a character string.

// void	print_and_upper(unsigned int index, char *c)
// {
// 	printf("index: %d, character: %c\n", index, *c);
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

	// The function 'print_and_upper' is used as the iteration 
	// function 'f'. This function prints the index and character 
	// of the current element, and if the character is a lowercase 
	// letter, it converts it to uppercase. 

// int	main(void)
// {
// 	char	*s;
// 	char	*copy;

// 	s = "hello, world";
// 	copy = ft_strdup(s);
// 	ft_striteri(copy, &print_and_upper);
// 	printf("Result: %s\n", copy);
// 	free(copy);
// 	return (0);
// }

	// A pointer of type char named 's' is declared.
	// A char pointer named 'copy' is declared.

	// s = "hello, world"
	// Allocates the memory address of the string literal 
	// "hello, world" to the pointer s.

	// copy = ft_strdup(s)
	// Uses the function 'ft_strdup' to create a copy of the 
	// string 's' and assigns the memory address of the new string
	// to the string to the copy pointer.

	// ft_striteri(copy, &print_and_upper)
	// Call the function 'ft_striteri' with the arguments 
	// 'copy' (copied string) and &print_and_upper (a pointer to 
	// a function to be applied to each character in the string).

	// printf("Result: %sname", copy)
	// Prints the result of the function to standard output,
	// which should be the copied string with each character 
	// converted to uppercase. 

	// free(copy);
	// frees the memory allocated to the copied string using
	// the 'free' function.

	// return (0);
	// Returns 0 to indicate that the program was executed 
	// successfully.
