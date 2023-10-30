/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 23:43:40 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:08:29 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstsize
	*	Header:     	libft.h
	*	Prototype:  	int	ft_lstlst(t_list *lst);
	*	Parameters: 	lst (t_list *):	A pointer to the head of the 
	*	            					linked list.
	*	Description:	This function counts the number of nodes in the
	*	            	linked list 'lst'.
	*	Return:     	The number of nodes in the linked list 'lst'.
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
	*	            	2.	It initializes a counter 'size' to 0.
	*	            	3.	It iterates through the list, moving from head to the
	*	            		end, by following the 'next' pointers, and increments
	*	            		'size' for each node.
	*	            	4.	Once the end of the list is reached (i.e 'lst is
	*	            		NULL), the function returns the 'size', which is the 
	*	            		number of nodes in the list.
	*	Summary:
	*	            	The 'ft_lstsize' function counts the number of nodes in the
	*	            	linked list 'lst'.
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
	
	*	            		int	lstsize = ft_lstsize(node1head)
	*	            		printf("The count of nodes in linked list is: %d\n"), lstsize);
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
	*	            	The function caller should ensure that 'lst' is not NULL
	*	            	to avoid unintended behavior. This function is designed for
	*	            	singly-linked list and counts the number of nodes in the list.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
