/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/03/01 12:59:10 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * calloc = "clear allocation"
	 * 
	 * It allocates memory for a given size and sets all the bytes to 0.
	 * Asigna memoria para un tamaño determinado y pone todos los bytes a 0.
	 * 
	 * @param count The number of elements to allocate.
	 * El número de elementos a asignar.
	 * 
	 * @param size The size of the memory block, in bytes.
	 * El tamaño del bloque de memoria, en bytes.
	 * 
	 * @return A pointer to the allocated memory.
	 * La función devuelve un puntero a la memoria 
	 * reservada, o NULL si no se pudo reservar suficiente 
	 * memoria.
	 * 
	 * Required libraries. Librerías necesarias:
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
	// Se declaran tres variables:
	// 	void *ptr: Puntero que se utiliza para almacenar la 
	// dirección de memoria del bloque de memoria a asignar.
	// 	size_t total_size: Se utiliza para almacenar el tamaño 
	// total de memoria que se debe asignar.
	// 	size_t i: Contador en el bucle que inicializa 
	// 	a cero el contenido del bloque de memoria asignado.

	// 'total_size = count * size;' calcula el tamaño 
	// total de la memoria que se debe asignar para la matriz 
	// requerida. 'total_size' almacena ese valor para su uso 
	// posterior

	// El tamaño total de la memoria se reserva haciendo 'malloc'. 

		// Si 'malloc' devuelve NULL, la función 'ft_calloc' 
		// devuelve NULL inmediatamente, indicando que no se pudo 
		// reservar suficiente memoria.

		// ptr = malloc(total_size); asigna dinámicamente un bloque 
		// de memoria del tamaño especificado y devuelve un puntero 
		// al inicio de la memoria asignada, que se almacena en 
		// la variable ptr.

	// Bucle while para inicializar los bytes de memoria asignados 
	// por 'malloc' a cero. En cada iteración, el valor cero 
	// se escribe en el byte correspondiente en la memoria apuntada 
	// por 'ptr'.

		// Casteo de 'ptr' a unsigned char para asegurar que los 
		// valores almacenados sean siempre positivos 
		// (en el rango de 0 a 255). 

	// La función devuelve un puntero al inicio de la memoria reservada.

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

	// 'count' es el número de elementos que se desean reservar 
	// en el array (5), y 'size' es el tamaño en bytes de 
	// cada elemento del array (el tamaño de un int, es 
	// generalmente 4 bytes).

	// Se llama a 'f't_calloc' para reservar el espacio en memoria. 
	// La función asigna la memoria y la inicializa a cero 
	// (coloca el carácter nulo '\0' en todos los bytes). 
	// El resultado de la función se almacena en el puntero ptr.

	// Se verifica si la reserva de memoria fue exitosa. Si lo fue,
	// se muestra la dirección de memoria reservada y se libera 
	// la memoria utilizando la función free() antes de salir 
	// del programa. 

	// Si no lo fue, se muestra un mensaje de error y 
	// se devuelve un valor diferente de cero para indicar error. 
