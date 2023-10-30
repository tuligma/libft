/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:52:18 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:05:57 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstlst
	*	Header:     	libft.h
	*	Prototype:  	t_list	*ft_lstlst(t_list *lst);
	*	Parameters: 	lst (t_list *):	A pointer to the head of the 
	*	            					linked list.
	*	Description:	This function returns a pointer to the last node in the
	*	            	linked list 'lst'. It traverses the list from the head
	*	            	and returns the last node found.
	*	Return:     	A pointer to the last node in the list or NULL if
	*	            	the list is empty.
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
	*	            	1.	The function takes a single input parameter, 'lst',
	*	            		which is a pointer to the head of the linked list.
	*	            	2.	It checks if 'lst' is NULL. If 'lst' is NULL (empty
	*	            		list), the function returns NULL.
	*	            		changes to the linked list.
	*	            	3.	If the list is not NULL, the function iterates through
	*	            		the list, moving from the head to the end, by following
	*	            		the 'next' pointers.
	*	            	4.	Once the end of the list is reached (i.e 'lst->next is
	*	            		NULL), the function returns  a pointer to the last node.
	*	Summary:
	*	            	The 'ft_lstlast' function returns a pointer to the last node
	*	            	in the linked list 'lst' or NULL if the list is empty.
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
	*	            		node5->next = node6
	*	            		printf("\nNode created:\n")
	*	            		t_list *current = node1head;
	*	            		while (current)
	*	            		{
	*	            			printf("Node content: %s\n"), (char *)current->content);
	*	            			current = current->next;
	*	            		}
	*	             		printf("\nThe last node is: \n")
	*	            		current = node1head;
	*	            		t_list	*last_node = ft_lstlast(node1head)
	*	            		printf("Node content: %s\n"), (char *)current->content);
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
	*	            	The function caller should ensure that 'lst' is not NULL
	*	            	to avoid unintended behavior. This function is designed for
	*	            	singly-linked list and does not work with doubly-linked lists.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
