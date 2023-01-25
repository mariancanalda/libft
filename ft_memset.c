/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:18:43 by macanald          #+#    #+#             */
/*   Updated: 2023/01/19 13:11:29 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Ft_memset() takes a pointer to a memory area, a value, and a size, and fills the memory area with
 * the value
 * 
 * @param b This is the pointer to the memory area to be filled.
 * @param c the character to fill the memory with
 * @param len the number of bytes to fill
 * 
 * @return The address of the first byte of the memory area b.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	/* Declaring a variable of type size_t. */
	size_t	i;

	/* Initializing the variable i to 0. */
	i = 0;

	/* Checking to see if the value of i is less than the value of len. */
	while (i < len)
		/* Casting the value of c to an unsigned char and then storing it in the array b. */
		((unsigned char*)b) [i++] = (unsigned char)c;
		
	/* Returning the address of the first byte of the memory area b. */
	return (b);
}

int main (void)
{
	/* Declaring a pointer to an integer. */
	int *p;
	/* Declaring a variable of type int and initializing it to 42. */
	int a = 42;
	/* Declaring a variable of type size_t and initializing it to 3. */
	size_t x = 3;
	/* Allocating memory for the pointer p. */
	p = malloc(x*sizeof(int));
	/* Setting the value of a to the value of p. */
	ft_memset(a, p, x)
	/* Printing the value of p. */
	printf("%s", (unsigned char*)p);
	/* Returning the value 0 to the operating system. */
	return(0);
}
	


 