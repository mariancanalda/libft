/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:57:10 by macanald          #+#    #+#             */
/*   Updated: 2023/03/05 19:44:52 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/**
	 * 'lstnew' = "list new".
	 * 
	 * Create a new list node with the given content.
	 * 
	 * @param content the content of the new element.
	 * 
	 * @return A pointer to a new t_list element.
	 * 
	 * * Required libraries:
	 * #include <stdlib.h>
	 * #include <stdio.h>
	 **/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

	// The function receives a is a generic pointer (void *), 
	// which is used to store the contents of the node, 
	// called 'content'. 

	// 'new' is a new node containing a pointer to the content 
	// (called 'content') and a pointer to the next node in 
	// the list (named 'next'). 

	// 'new = (t_list *)malloc(sizeof(t_list))'
	// A new node ('new') is created in the dynamic memory
	// with that content.
	// 	The reserved block of memory is the size of the 
	// 	of the entire 't_list' structure in bytes, 
	// 	which contains both the contains both the pointer 
	// 	to the content and the pointer to the next node ('new'). 
	// 	and the pointer to the next node in the list (next). 

	// 	if (!new) Check if the memory could be allocated.
	// 		return (NULL) If not, a null pointer is returned.

	// 		If the memory allocation was successful,
	// 		a new node is created in the list. 
	// 		'new->content = content' The node 
	// 		contains the pointer to the content passed as 
	// 		argument and the pointer to the next node in 
	// 		the list set to NULL. 
	// 		(since it is the last node in the list). 

	// 		In the ft_lstnew function, the pointer 'content' 
	// 		received as an argument is assigned to the 
	// 		'content' member of the new node that is created  
	// 		in the list 'new->content = content'. 
	// 		Therefore, in this case, they are the same thing and 
	// 		both store the content of the new node.

	// Finally, the function returns a pointer to the newly 
	// created node.

// int	main(void)
// {
// 	char	*str;
// 	t_list	*node;

// 	str = "Hello world";
// 	node = ft_lstnew(str);
// 	if (node)
// 	{
// 		printf("Node created with content: %s\n", (char *)node->content);
// 		printf("Next node is: %p\n", node->next);
// 	}
// 	else
// 	{
// 		printf("Error: Failed to create new node.\n");
// 	}
// 	return (0);
// }

// A char * variable named 'str' is declared and assigned the
// string "Hello world".

// Then, a pointer to a node of type 't_list' named 'node' is declared.

// The function 'ft_lstnew()' is called and passed 'str' as an argument 
// to create a new node. The pointer returned by the function is 
// is assigned to 'node'.

// It is checked if 'node' is not null. 
	// 	If it is not null, a message is printed indicating that a new node 
	// 	with the contents of 'str' is created and the address of the next node 
	// 	in the list (which in this case is null because this is the 
	// 	only node created). 

	// 	If 'node' is null, an error message is printed indicating that a 
	// 	new node could not be created. 

// Finally, the function returns 0 to indicate that it completed 
// without errors.
