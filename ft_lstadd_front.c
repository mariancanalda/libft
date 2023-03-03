/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:58:17 by macanald          #+#    #+#             */
/*   Updated: 2023/03/03 18:20:56 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Adds a new element to the beginning of a linked list.
 * Añade un nuevo elemento al principio de una lista 
 * enlazada.
 * 
 * @param lst A pointer to a pointer to a linked list.
 * Un puntero a un puntero a una lista enlazada.
 * 
 * @param new the new element to add to the list.
 * El nuevo elemento a añadir a la lista.
 */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node;

// 	head = ft_lstnew("Node 1");
// 	ft_lstadd_front(&head, ft_lstnew("Node 2"));
// 	ft_lstadd_front(&head, ft_lstnew("Node 3"));
// 	node = head;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);
// }
