/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:59:29 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 20:24:03 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'lstsize' = "list size".
	 * 
	 * Counts the number of elements in a linked list.
	 * 
	 * @param lst The list to be counted.
	 * 
	 * @return The number of elements in the linked list.
	 * 
	 * * Required libraries:
	 * #include <stdio.h>
	 **/

#include "libft.h"

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

	// The function "ft_lstsize" takes as argument a pointer 
	// ('lst') to a node in the linked list and returns the 
	// number of nodes contained in the list ('count').

	// The function starts by initializing a variable 'count' 
	// to 0, which is used to keep track of the number of 
	// nodes in the list. 

	// Next, the function enters a while loop that runs as long 
	// as the pointer to the list is not null. 
	// 	At each iteration of the loop, the function increments 
	// 	the value of "count" by 1, and then updates the list 
	// 	pointer to point to the next node in the list. 

	// 	The loop repeats itself until the list pointer 
	// 	is null, which means that the end of the list has been 
	// 	reached. 
	// 	At this point, the function returns the current value 
	// 	of "count", which is the total number of nodes in the list. 

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

	// An initial node called "head" is created using "ft_lstnew" 
	// with the content "Hello". Then, the function "ft_lstsize" 
	// is used to count the number of nodes in the list, which 
	// should be equal to 1 at this point.

	// Two new nodes are added at the front of the list 
	// using the "ft_lstadd_front" function. The first new node has 
	// content "World" and the second new node has content "42".

	// The "head" pointer is updated to point to the newly added node.

	// The program prints the size of the list using the variable 
	// variable "count", which is still equal to 1, since the list 
	// was counted before adding the two new nodes. 

	// The printed result will be "List size: 1".
