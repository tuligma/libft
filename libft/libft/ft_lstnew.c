/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:09:35 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:06:58 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstnew
	*	Header:     	libft.h
	*	Prototype:  	t_list	*ft_lstnew(void *content);
	*	Parameters: 	content (void *):	The data to be stored in the new
	*	            						list node.
	*	Description:	This function creates a new list node, allocates memory
	*	            	for it, and initialized its content and 'next' pointer.
	*	            	It is commonly used to create the first node in a linked
	*	            	list.
	*	Return:     	A pointer to the newly created list node. Returns NULL
	*	            	if memory allocation fails.
	*	External Functions:
	*	            	1. malloc
	*	Data Structures:
	*	            	t_list (from libft.h)
	*	            	A structure used to represent a node in a linked list.
	*	            	-	void *content:	A pointer to the data to be stored
	*	            						in the node.
	*	            	-	struct s_list *next:	A pointer to the next node in
	*	            	-							in the linked list.
	*	Walkthrough:
	*	            	1.	The function takes 'content' as input, which is the
	*	            		data to be stored in the new list node.
	*	            	2.	Allocate memory for new list node 'new_node' of type
	*	            		't_list' using 'malloc'.
	*	            	3.	Checks if memory allocation is successful, if not,
	*	            		it returns NULL.
	*	            	4.	Initialize the 'content' member of 'new_node' with
	*	            		the provided 'content'.
	*	            	5.	Set the 'next' member of 'new_node' to NULL to
	*	            		indicate the end of the list.
	*	            	6.	Return a pointer to newly created list node 'new_node'.
	*	Summary:
	*	            	The 'ft_lstnew' takes 'content' as input. allocates memory
	*	            	for new list node, initializes its 'contents' member with
	*	            	the provided data, and sets the 'next' pointer to NULL.
	*	            	It returns a pointer to the 'new_node' or NULL on memory
	*	            	allocation failure.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	                    char *hello = "Hello"
	*	            		t_list *node1 = ft_lstnew("Hello");
	*	            		t_list *node2 = ft_lstnew("World!");
	*	            		t_list *node3 = ft_lstnew("I");
	*	            		t_list *node4 = ft_lstnew("am");
	*	            		t_list *node5 = ft_lstnew("Banjo");
	*
	*	            		node1->next = node2;
	*	            		node2->next = node3;
	*	             		node3->next = node4;
	*	             		node4->next = node5;
	*						t_list *current = node1;
	*	            		while (current)
	*	            		{
	*	            			printf("Node content: %s\n"), (char *)current->content);
	*	            			current = current->next;
	*	            		}
	*						t_list *next;
	*						current = node1;
	*	            		while (current)
	*	            		{
	*	            			next = current->next;
	*							free(current);
	*	            			current = next;
	*	            		}
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	1.	Segmentation Fault (SIGSEGV): Occurs if 'content'
	*	            		is uninitialized, this may lead to memory issues
	*	            		as well.
	*	Notes:
	*	            	The function caller is responsible for freeing the memory
	*	             	allocated after using this function.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
