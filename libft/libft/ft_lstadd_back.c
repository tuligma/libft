/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:04:42 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 11:59:53 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstadd_back
	*	Header:     	libft.h
	*	Prototype:  	void	ft_lstadd_back(t_list **lst, t_list *new);
	*	Parameters: 	lst (t_list **):	A pointer to pointer to  the head
	*	            						of the  linked list.
	*	            	new (t_list *): 	The new list node to be added to
	*	            						the end of the linked list.
	*	Description:	This function adds a new list node 'new' to the end
	*	            	of the linked list 'lst'. It checks if either 'lst'
	*	            	is NULL. If either is NULL, the function returns
	*	            	without making any changes to the linked list. If
	*	            	the linked list is empty, it simply assign the 'new'
	*	            	node as the head of the list. Otherwise, it iterates
	*	            	through the list to find the last node, and appends
	*	            	the 'new' node to the end by updating the 'next'
	*	            	pointer of the last node.
	*	Return:     	None.
	*	External Functions:
	*	            	1.	ft_lstlast
	*	Data Structures:
	*	            	t_list (from libft.h)
	*	            	A structure used to represent a node in a linked list.
	*	            	-	void *content:			A pointer to the data to be
	*	            								stored in the node.
	*	            	-	struct s_list *next:	A pointer to the next node in
	*	            	-							in the linked list.
	*	Walkthrough:
	*	            	1.	The function takes two input parameters: a pointer to
	*	            		pointer to the head of linked list ('lst') and a
	*	            		pointer to the new list node to be added to the end
	*	            		of the list ('new').
	*	            	2.	It checks if either 'lst' or 'new' is NULL. If either
	*	            		is NULL, the function returns without making any
	*	            		changes to the linked list.
	*	            	3.	If the list is empty (*list is NULL), it simply assigns
	*	            		the 'new' node as the head of the list and returns.
	*	            	4.	Otherwise, it finds the last node in the list using the
	*	            		'ft_lstlast' function and appends the 'new' node to the
	*	            		end by updating 'next' pointer of the last node.
	*	Summary:
	*	            	The 'ft_lstadd_back' function add a new list node 'new' to
	*	            	the end of the linked list 'lst'.
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
	*
	*	            		node1head->next = node2;
	*	            		node2->next = node3;
	*	            		node3->next = node4;
	*	            		node4->next = node5;
	*	            		printf("\nNode created:\n")
	*	            		t_list *current = node1head;
	*	            		while (current)
	*	            		{
	*	            			printf("Node content: %s\n"), (char *)current->content);
	*	            			current = current->next;
	*	            		}
	*	             		printf("\nNode after ft_lstadd_front:\n")
	*	            		ft_lstadd_back(&node1head, node6);
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
	*	            	None.
	*	Notes:
	*	            	The function caller should ensure that 'lst' and 'new'
	*	            	are not NULL to avoid unintended behavior. Also note 
	*	            	that if you created a new node using 'ft_lstnew' function
	*	            	and passed that newly created node on against function it
	*	            	will result to a segmentation fault.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last_node;

	if (!list || !new)
		return ;
	else if (!*list)
	{
		*list = new;
		return ;
	}	
	last_node = ft_lstlast(*list);
	last_node->next = new;
}
