/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:41:35 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'calloc' = "clear allocation".
	 * 
	 * It allocates memory for a given size and sets all the bytes to 0.
	 * 
	 * @param count The number of elements to allocate.
	 * 
	 * @param size The size of the memory block, in bytes.
	 * 
	 * @return A pointer to the allocated memory.
	 * 
	 * Required libraries:
	 * #include <stdio.h>
	 * #include <stdlib.h>
	 **/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	i = 0;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
	// Three variables are declared:
		// void *ptr: Pointer used to store the memory 
		// address of the memory block to allocate.
		// size_t total_size: Used to store the total size 
		// of memory to allocate.
		// size_t i: Counter in the loop that initializes 
		// the contents of the allocated memory block to zero.

	// 'total_size = count * size;' calculates the total size 
	// of memory to be allocated for the required array. 
	// 	'total_size' stores that value for later use. 

	// The total memory size is reserved by doing 'malloc'. 

	// 	If 'malloc' returns NULL, the 'ft_calloc' function 
	// 	returns NULL immediately, indicating that enough 
	// 	memory could not be allocated.

	// 	'ptr = malloc(total_size)' dynamically allocates a
	// 	block of memory of the specified size and returns 
	// 	a pointer to the to the beginning of the allocated 
	// 	memory, which is stored in the the variable ptr.

	// 'while' loop to initialize the memory bytes allocated 
	// by 'malloc' to zero. At each iteration, the value zero 
	// is written to the corresponding byte in memory pointed 
	// by 'ptr'.

	// 	Casting 'ptr' to unsigned char to ensure that 
	// 	stored values are always positive. 
	// 	(in the range 0 to 255). 

	// The function returns a pointer to the beginning of the 
	// reserved memory.

// int	main(void)
// {
// 	int		*ptr;
// 	size_t	count;
// 	size_t	size;

// 	count = 5;
// 	size = sizeof(int);
// 	ptr = ft_calloc(count, size);
// 	if (ptr == NULL)
// 	{
// 		printf("Error while reserving memory.\n");
// 		return (1);
// 	}
// 	printf("Reserved memory address: %p\n", ptr);
// 	free(ptr);
// 	return (0);
// }

	// 'count' is the number of elements you want to reserve 
	// in the array (5), and 'size' is the size in bytes of 
	// each element of the array (the size of an int, 
	// usually 4 bytes).

	// 'ft_calloc' is called to reserve the memory space. 
	// 	The function allocates the memory and initializes 
	// 	it to zero (places the null character '0' 
	// 	in all bytes). The result of the function is 
	// 	stored in the 'ptr' pointer.

		// 	A check is made to see if the memory reservation 
		// 	was successful. If it was successful, the reserved 
		// 	memory address is displayed and the memory is freed 
		// 	using the free() function before exiting the program. 

		// 	If it was not, an error message is displayed and 
		// 	a non-zero value is returned to indicate error. 
