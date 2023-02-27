/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:41:41 by macanald          #+#    #+#             */
/*   Updated: 2023/02/27 10:41:07 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * calloc = "clear allocation"
	 * 
	 * It allocates memory for a given size and sets all the
	 * bytes to 0.
	 * Asigna memoria para un tamaño determinado y pone todos
	 * los bytes a 0.
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
	// 1) Declaro tres variables para asignar una cantidad 
	// de memoria dinámica determinada por 'count' y 'size' 
	// e inicializar su contenido a cero.
	// 	void *ptr: Es un puntero de tipo void, que 
	// 	se utiliza para almacenar la dirección de memoria 
	// 	del bloque de memoria que se asignará.
	// 	size_t total_size: Es una variable de tipo size_t 
	// 	que se utiliza para almacenar el tamaño total de 
	// 	memoria que se debe asignar.
	// 	size_t i: Es una variable de tipo size_t que 
	// 	se utiliza como contador en el bucle que inicializa 
	// 	a cero el contenido del bloque de memoria asignado.

	// 2) 'total_size = count * size;' calcula el tamaño 
	// total de la memoria que se debe asignar para la matriz 
	// requerida.

		// La función 'ft_calloc' se utiliza para asignar un 
		// bloque de memoria de tamaño 'count * size' y devuelve 
		// un puntero al primer byte de la memoria asignada. 
		// Por lo tanto, 'count' es el número de elementos que 
		// se quieren almacenar en la memoria y 'size' es el
		// tamaño en bytes de cada elemento. La variable 
		// 'total_size' almacena este valor para su uso 
		// posterior en el programa.

	// 3) Calculo el tamaño total de la memoria que se va 
	// a reservar, y se reserva esa cantidad de memoria 
	// utilizando 'malloc'. 

		// Si 'malloc' devuelve NULL, la función 'ft_calloc' 
		// devuelve NULL inmediatamente, indicando que no se pudo 
		// reservar suficiente memoria.

		// ptr = malloc(total_size); asigna dinámicamente un bloque 
		// de memoria del tamaño especificado y devuelve un puntero 
		// al inicio de la memoria asignada, que se almacena en 
		// la variable ptr.

	// 4) Utilizo un bucle while para inicializar los bytes de 
	// memoria asignados por 'malloc' a cero. En cada iteración, 
	// el valor cero se escribe en el byte correspondiente en la 
	// memoria apuntada por 'ptr'.

		// Convierto el puntero genérico 'ptr' a un puntero de tipo 
		// unsigned char utilizando un casteo. Se utiliza unsigned 
		// char en lugar de char para asegurarse de que los valores 
		// almacenados sean siempre positivos (en el rango de 0 a 255). 

	// 5) Finalmente, la función devuelve un puntero al inicio 
	// de la memoria reservada.

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

	// 1) Declaro las variables 'ptr', 'count' y 'size'. 
	// 'count' y 'size' son utilizados para reservar memoria 
	// para el puntero 'ptr' utilizando la función 'ft_calloc'.

	// 2) Después de llamar a ft_calloc, verifico si la 
	// reserva de memoria fue exitosa. Si no lo fue, 
	// se muestra un mensaje de error y se devuelve un 
	// valor diferente de cero para indicar un error. 

	// 3) De lo contrario, se muestra la dirección de 
	// memoria reservada y se libera la memoria 
	// utilizando la función free() antes de 
	// salir del programa.
