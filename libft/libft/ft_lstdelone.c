/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:30:33 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:03:37 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstdelone
	*	Header:     	libft.h
	*	Prototype:  	void ft_lstdelone(t_list *lst, void (*del)(void *));
	*	Parameters: 	lst (t_list *):	A pointer to the list node to be
	*	            					deleted.
	*	            	del (function pointer):	A pointer to the function used
	*	            							to delete the content of the
	*	            							list node.
	*	Description:	This function deletes a single node in a linked list.
	*	            	It takes two parameters, the node to be deleted and a
	*	            	function pointer that specifies how to delete the
	*	            	content of the node.
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
	*	            	1.	The function takes two parameters: a pointer to the node
	*	            		to be deleted ('lst') and a function pointer ('del') that
	*	            		specifies how to delete the content of the node.
	*	            	2.	It checks if either 'lst' or 'del' is NULL. If either
	*	            		is NULL, the function returns without making any changes.
	*	            	3.	If both 'lst' and 'del' are valid, the function first
	*	            		calls the 'del' function, passing the content of the node
	*	            		('lst->content') as an argument. This is done to free any
	*	            		memory associated with the content.
	*	            	4.	The 'lst' node is then freed using 'free' function, and
	*	            		the pointer is set to NULL to prevent further access.
	*	Summary:
	*	            	The 'ft_lstdelone' function deletes a single node in a
	*	            	linked list.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
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
	*	            		current = node1head;
	*	            		while (current)
	*	            		{
	*	            			next = current->next;
	*	            			free(current);
	*	            			current = next;
	*	            		}
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	Attempting to access the deleted node or its content after
	*	            	calling 'ft_lstdelone' will result in undefined behavior.
	*	Notes:
	*	            	The 'del' function is crucial to properly free any dynamically
	*	            	allocated memory within the content of the list node.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
