/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 00:38:57 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:42:29 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'itoa' = "integer to ASCII".
	 * 
	 * The itoa() function coverts the integer 'n' into a 
	 * character string.
	 * 
	 * @param n the number to be converted.
	 * 
	 * @return A pointer to the string.
	 * 
	 * Required libraries:
	 * #include <stdio.h> for 'malloc()' and 'free()'.
	 * #include <tdlib.h> for 'printf()'.
	 * #include <stddef.h> for 'NULL'.
	 * */

#include "libft.h"

static int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

	// 'ft_get_len' function determinites the length of 
	// the string to represent an integer in string format.

	// 'if (n < 0) len++' checks if 'n' is equal to zero. 
	// 	If so, the length of the string is 1 and the 
	// 	function returns 1 (The number would have a 
	// 	single digit which is the zero). 

	// while (n)' As long as 'n' is not zero, it enters 
	// into a 'while' loop. 
	// 	'n /= 10; len++' At each iteration, divide 
	// 	'n' by 10 to remove the last digit from the 
	// 	number and 'len' is incremented to count 
	// 	that digit. 

	// 	The loop continues until 'n' becomes 
	// 	zero (all digits of the original number have 
	// 	been processed). 

	// 'return (len);' Returns the amount of digits 
	// of the original integer, taking into account the 
	// sign if it was negative.

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	sign = (n < 0);
	len = ft_get_len(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--len] = '0' + n % 10;
		else
			str[--len] = '0' - n % 10;
		n /= 10;
	}
	return (str);
}

	// Three variables are declared: str, len and sign.
		// 	'char *str' will store the string resulting from 
		// 	the conversion of the integer to a string.

		// 	'int len' will store the length of the string 
		// 	needed to store the integer. 

		// 	'int sign' will store the sign of the integer 'n'. 

	// 'sign = (n < 0)' If the value of 'n' is less than zero, 
	// value 1 (true) is assigned to 'sign', which means that 
	// the number is negative.  

	// 'len = ft_get_len(n)' 'ft_get_len' is called to obtain 
	// the characters needed to represent the number.

	// 'str = ft_calloc(len + 1, sizeof(char))' 
	// 'ft_calloc' is used to reserve a memory block of the 
	// appropriate size to contain the string to be generated.  
	// 	This ensures that the block of memory is initialized 
	// 	to zero, which guarantees that the string will end with 
	// 	a null character. 
	// 		'len + 1' is the size of the memory block. 
	// 		1 is added to 'len' to include the null character 
	// 		'\0'.
	// 		sizeof(char)' is the size of each element in bytes 
	// 		(equal to 1 in C). 

	// 		ft_calloc(len + 1, sizeof(char)) is reserving in 
	// 		memory a block of 'len + 1' elements of size 
	// 		'sizeof(char)' bytes each.

	// 'if (str == NULL) return (NULL)' 
	// The first 'if' checks whether if the call to 
	// 'calloc' failed (could not allocate enough memory for 
	// the string). 
		// 	If this happens, the 'ft_itoa' function returns 
		// 	a null pointer indicating that there has been 
		// 	an error.

	// 'if (sign) str[0] = '-'' The second 'if' checks if 
	// the number is negative (sign is true). 
	// 	If it is, a minus sign (-) is placed in the 
	// 	first position of the string 'str'.

	// if (n == 0) str[0] = '0''' The third 'if' checks if 
	// the number is zero. 
	// 	If so, a zero (0) is placed in the first position 
	// 	of the string str.

	// These three conditionals set the initial value of 
	// string 'str' before starting to convert the number 
	// 'n' into a string. 

	// while (n)' The while loop is executed as long as 'n' 
	// is different from zero. 
	// 	If 'n' is greater than zero, 
	// 	'if (n > 0) str[--len] = '0' + n % 10'. 
	// 	In each iteration, the last digit of the number 'n' 
	// 	is taken (remainder of the division of 'n' by 10 
	// 	(n % 10)), converts it to a character (add the
	// 	into a character (the value of the character '0' 
	// 	in ASCII is added to it) and assigns it to the 
	// 	last position in the string 'str'.
	// 		The --len index is used to write the digits 
	// 		in reverse order, since it starts typing 
	// 		from the end of the string. 

	// 	 If 'n' is negative, 'str[--len] = '0' - n % 10', 
	// 	 the absolute value of 'n' is taken to obtain 
	// 	 the corresponding digit. 
	// 		In that case, instead of adding '0', 
	// 		subtract '0' to obtain the digit in
	// 		 10's complement.

	// 	n /= 10' Divide 'n' by 10 to go to the next 
	// 	digit.

	// return (str) The function returns the string representing 
	// the integer. 

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 1234;
// 	str = ft_itoa(n);
// 	printf("El entero n es %d y su representación en cadena es %s\n", n, str);
// 	free(str);
// 	return (0);
// }

	// Two variables are declared: 
	// 	'n' n is the number to be converted.
	// 	'str' where the string resulting from the conversion 
	// 	will be stored.

	// Initialize 'n' to 1234. 

	// 'str = ft_itoa(n)' The function 'ft_itoa' is called to convert 
	// 'n' to a string. The result is stored in 'str'.

	// A message is printed showing the original value of 'n' 
	// and its string representation obtained with 'ft_itoa'. 

	// The memory allocated to the string 'str' is freed using 'free'

	// The 'main' returns 0 to indicate that the execution of 
	// the program has been finished successfully.
