/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:05:08 by macanald          #+#    #+#             */
/*   Updated: 2023/03/06 17:34:41 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'lstlac' = "last elemetin a linked list"
	 * Return the last node of the list.
	 * Devuelve el último nodo de la lista.
	 * 
	 * @param lst A pointer to the first node of a linked list.
	 * lst: el principio de la lista.
	 * 
	 * @return The last node of the list.
	 * Devuelve el último nodo de la lista.
	 */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

	// Implements a simple algorithm to find the last element 
	// of a linked list, using a while loop to traverse
	// the nodes of the list until the last node is reached.

	// It takes as argument a pointer to the first element of 
	// a linked list and returns a pointer to the last 
	// element of a linked list. 

	// The function starts by checking if the argument 
	// 'lst' is null. If it is null, it means that the 
	// list is empty and the function returns a null 
	// pointer to the last element. 

	// If it is not null, the function uses a while loop 
	// to step through the linked list, advancing from 
	// the linked list, advancing from the first element 
	// to the last element of the list. 

	// 	Within the loop, the condition 'lst->next != NULL' 
	// 	The condition 'lst->next != NULL' checks if the current 
	// 	node (lst) has a next node, 
	// if it is not the last node in the list. If that is the case, 
	// 	the lst pointer is updated to point to the next node in 
	// 	the list, using the expression 'lst' in the list, using t
	// 	he expression 'lst = lst->next'.
	// 	This process is repeated until the last node in the list, 
	// 	which has a pointer to the next node in the list, is reached. 
	// 	of the list, which has a null pointer as the next node. 

	// 	Once the loop has ended, the function has reached 
	// 	last node in the list, and returns a pointer to it 
	// 	using 'return (lst)'.

	// In a linked list, each item is represented as a node 
	// which contains two fields: one to store the value of the element 
	// and another to point to the next node in the list.

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*last;
// 	lst = ft_lstnew("Hola");
// 	ft_lstadd_front(&lst, ft_lstnew("Mundo"));
// 	ft_lstadd_front(&lst, ft_lstnew("¡"));
// 	last = ft_lstlast(lst);
// 	if (last != NULL)
// 		printf("Last node: %s\n", (char *)last->content);
// 	else
// 		printf("La lista está vacía.\n");
// 	ft_lstclear(&lst, free);
// 	return (0);
// }
