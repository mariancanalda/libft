/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macanald <macanald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 07:57:10 by macanald          #+#    #+#             */
/*   Updated: 2023/03/02 15:22:11 by macanald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Create a new list node with the given content
 * 
 * @param content the content of the new element
 * 
 * @return A pointer to a new t_list element.
 */

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
