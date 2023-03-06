/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:07:22 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 17:18:22 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'atoi' = "ascii to integer".
	 * 
	 * It takes a string, and returns the integer value of that string.
	 * 
	 * @param str This is the string that we are converting to 
	 * an integer.
	 * 
	 * @return the integer value of the string.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 * */		

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			++i;
	if (str[i] == '-')
	{
		sign = -1;
			++i;
	}
	else if (str[i] == '+')
			++i;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		++i;
	}
	return (result * sign);
}

	// - 'result' stores the result of converting the string 
	// to an integer. 

	// - 'sign' stores the sign (+ ó -) of the integer being 
	// converted. It is initialized to 1 (if negative -1).

	// - 'i' will be used as an index to iterate over the characters
	//of the string. Initializes to 0 (first character of the string).

	// 'While' to detect blanks. 
		// 	If the current character is one of these, the value 
		// 	of "i" is incremented to advance to the next character 
		// 	in the string and continue evaluating. 

		// 	The iteration stops when a non-whitespace character is 
		// 	encountered, and the final value of "i" is used to determine 
		// 	the the length of the resulting non-whitespace string. 

	// 'If' to determine whether the first character is `-` or `+` 
	// and set `sign` accordingly. 

	// 'While' to convert 'str' to an integer numeric value. 
		// The loop repeats for as long as the current character 
		// in the string 'str[i]' is a numeric digit 
		// (integer from 0 to 9).
			// The numeric value of each character is calculated by 
			// by subtracting the ASCII value of the character '0' 
			// from the ASCII value of the current character 
			// in 'str[i]' 
			// The total numeric value is built up by multiplying 
			// the value of 'result' by 10 and adding the numeric 
			// value of the current character to it. 

	// After all numeric digits have been processed, 'result' is 
	// returned multiplied by the corresponding sign.

// int	main(void)
// {
// 	const char	*str;
// 	int			value;

// 	str = "42";
// 	value = ft_atoi(str);
// 	printf("%d\n", value);
// 	return (0);
// }

	// Constant pointer 'str' pointing to the string "42". 

	// The function 'ft_atoi' is called with the the pointer 'str' 
	// as argument.

	// The return value of the function is stored in 'value'. 

	// 'value' is printed using 'printf'.

	// '0' is returned to indicate that the program has finished 
	// successfully.
