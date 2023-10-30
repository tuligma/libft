/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:39:56 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:03:08 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstclear
	*	Header:     	libft.h
	*	Prototype:  	void ft_lstclear(t_list **lst, void (*del)(void *));
	*	Parameters: 	lst (t_list **):	A pointer to a pointer to the first
	*	            						node of the linked list to be cleared.
	*	            	del (function pointer):	A pointer to the function used
	*	            							to delete the content of each
	*	            							node.
	*	Description:	This function clears an entire linked list and frees the
	*	            	memory associated with each node.
	*	Return:     	None.
	*	External Functions:
	*	            	None.
	*	Data Structures:
	*	            	t_list (from libft.h)
	*	            	A structure used to represent a node in a linked list.
	*	            	-	void *content:			A pointer to the data to be
	*	            								stored in the node.
	*	            	-	struct s_list *next:	A pointer to the next node in
	*	            	-							in the linked list.
	*	Walkthrough:
	*	            	1.	The function takes two parameters: a pointer to a pointer 
	*	            		to the first node of the list ('lst') and a function
	*	            		pointer ('del') that specifies how to delete the content
	*	            		of the node.
	*	            	2.	It checks if either 'lst' or 'del' is NULL or if the list
	*	            		itself is empty ('*lst' is NULL). If any condition is
	*	            		true, the function returns without making any changes.
	*	            	3.	If both 'lst' and 'del' are valid, the function proceeds
	*	            		to clear the list. It initializes two pointers, 'current'
	*	            		to track the current node and 'next' to temporary store
	*	            		the next node.
	*	            	4.	The function iterates through the list, starting from 
	*	            		the first node, and uses 'del' to delete the content of
	*	            		each node and 'free' to free the node itself.
	*	            	5.	After clearing the list, the list pointer ('*lst') is set
	*	            		to NULL to prevent further access.
	*	Summary:
	*	            	The 'ft_lstclear' function clears an entire linked list and
	*	            	frees the memory associated wit each node.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	void delete_content(t_list *list)
	*	            	{
	*	            		(void)list;
	*	            	}
	*
	*	            	int main(void)
	*	            	{
	*	            		t_list *node6 = ft_lstnew("6th");
	*	            		t_list *node5 = ft_lstnew("5th");
	*	            		t_list *node4 = ft_lstnew("4th");
	*	            		t_list *node3 = ft_lstnew("3rd");
	*	            		t_list *node2 = ft_lstnew("2nd");
	*	            		t_list *node1head = ft_lstnew("1st");
	*	            		t_list *next;
	*	            		t_list *prev;
	*
	*	            		node1head->next = node2;
	*	            		node2->next = node3;
	*	            		node3->next = node4;
	*	            		node4->next = node5;
	*	            		node5->next = node6
	*	            		printf("\nNode created:\n")
	*	            		t_list *current = node1head;
	*	            		while (current)
	*	            		{
	*	            			printf("Node content: %s\n"), (char *)current->content);
	*	            			current = current->next;
	*	            		}
	*	             		printf("\nAfter using ft_lstdelone \n")
	*	            		current = node1head;
	*            			prev = NULL;
	*	            		while (current)
	*	            		{
	*	            			if (current == node3)
	*	            			{
	*	            				if (prev)
	*	            					prev->next = current->next;
	*	            				else
	*	            					node1head = current->next;
	*	            				ft_lstdelone(current, delete_content);
	*	            				break;
	*	            			}
	*	            			prev = current;
	*	            			current = current->next;
	*	            		}	
	*	            		ft_lstdelone(node3, free);
	*	            		current = node1head;
	*	            		while (current)
	*	            		{
	*	            			printf("Node content: %s\n"), (char *)current->content);
	*	            			current = current->next;
	*	            		}
	*	            		ft_lstclear(&node1head, delete_content);
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	Attempting to access the list after calling 'ft_lstclear' will
	*	            	result in undefined behavior.
	*	Notes:
	*	            	The 'del' function is crucial to properly free any dynamically
	*	            	allocated memory within the content of the list node.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	next = NULL;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
