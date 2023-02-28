/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:59:29 by macanald          #+#    #+#             */
/*   Updated: 2023/02/28 18:34:08 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Counts the number of elements in a linked list.
 * 
 * @param lst The list to be counted.
 * 
 * @return The number of elements in the linked list.
 */

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*head;
// 	int		count;

// 	head = ft_lstnew("Hello");
// 	count = ft_lstsize(head);
// 	ft_lstadd_front(&head, ft_lstnew("World"));
// 	ft_lstadd_front(&head, ft_lstnew("42"));
// 	printf("List size: %d\n", count);
// 	return (0);
// }
