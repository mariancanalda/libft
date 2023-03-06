/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:58:17 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:43:47 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'lstadd_front' = "add to front of list"
	 * 
	 * Adds a new element to the beginning of a linked list.
	 * 
	 * @param lst A pointer to a pointer to a linked list.
	 * 
	 * @param new the new element to add to the list.
	 * 
	 **/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

	// 'lst' is a pointer to a pointer to the first node 
	// in the list.  

	// 'new' is a pointer to a pointer to a new node.

	// What the function does is to access 'new' so that 'next' 
	// property of the new node (through the arrow operator) 
	// points to the first node in the list. 
	// In this way, the new node becomes the first node in 
	// the list and the original first node becomes the 
	// second node. 
		// Each node in a linked list contains a property 
		// called "next" which is a pointer to the next 
		// node in the list. The only exception is the 
		// last node in the list, which has its "next" 
		// property set to NULL to indicate that there 
		// are no more nodes after it. 
		// In this way, the nodes in the list are "linked" 
		// to each other through their "next" properties, 
		// which allows the list to be traversed sequentially.

	// Then the value of the pointer pointed to by 'lst' is 
	// updated to point to the new node. 

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*node;
// 	t_list	*new_node;

// 	head = ft_lstnew("Node 1");
// 	new_node = ft_lstnew("Node 2");
// 	ft_lstadd_front(&head, new_node);
// 	new_node = ft_lstnew("Node 3");
// 	ft_lstadd_front(&head, new_node);
// 	node = head;
// 	while (node)
// 	{
// 		printf("%s\n", (char *)node->content);
// 		node = node->next;
// 	}
// 	return (0);
// }

	// A new node with the content "Node 1" and a next pointer 
	// pointing to NULL. The memory address of this node is 
	// assigned to 'head'.
	// Another new list is created with the content 'Node 2' 
	// and its memory address is assigned to its memory address 
	// is assigned to 'new_node'.

	// The first node in the "head" list is assigned to "node".
	// Since the ft_lstadd_front function modifies the pointer 
	// *lst pointer passed as an argument, the contents of head 
	// now points to new_node, which in turn points to the node 
	// previously created with the content "Node 1". Thus, 
	// the node created with the content "Node 2" remains as the 
	// first node in the list.

	// Afterwards, a new node with the content "Node 3" is created 
	// and its memory address is assigned to new_node.

	//  ft_lstadd_front is called to add this node to the 
	//  front of the list. 

	//  At this point, 'new_node' contains the memory address of the 
	//  node created with the content "Node 3", which is added to the 
	//  front of the linked list. 

	// Finally, the memory address of the first node in the list 
	// (which is the node with the content "Node 3") is assigned to 
	// a pointer called 'node', to traverse through the list in a 
	// while loop and display the contents of each node.

	// As long as there is a node in the list, a while loop is used 
	// to traverse the linked list. 
	// You start by initializing a 'node' pointer to the beginning of the 
	// list, which in this case is the memory address that has been stored 
	// in the variable 'head'.
			// printf("%sname", (char *)node->content) 
			// in each iteration of the loop, the content of the current node 
			// is accessed by the current node via the 'node->content' pointer 
			// and printed to the screen is printed to the screen using the 
			// 'printf'. 
				// The data type of the 'content' property 
				// is a void * pointer that must be converted 
				// 	to char * before being printed, since printf 
				// 	expects a character string. 
					// This conversion is done by the expression 
					// (char *)node->content.

				// 'node = node->next' What this line does is to
				// update the value of node to the next node 
				// in the list. This allows the next of the loop 
				// prints the contents of the next node and so on 
				// until the end of the list is reached.
				// of the list (when 'node' is NULL and the loop 
				// is terminated). 

	// A 0 is returned to indicate that the program has finished successfully.
