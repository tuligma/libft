/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:50:47 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 12:04:18 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstiter
	*	Header:     	libft.h
	*	Prototype:  	void ft_lstiter(t_list *lst, void (*f)(void *));
	*	Parameters: 	lst (t_list **):	A pointer to the head of the linked
	*	            						list to be iterated.
	*	            	f (function pointer):	A pointer to the function to
	*	            							apply to the content of each node.
	*	Description:	This function iterates through a linked list and applies
	*	            	a given function 'f' to the content of each node.
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
	*	            	1.	The function takes two parameters: 'lst', a pointer to
	*	            		the head of the linked list, and 'f', a function pointer.
	*	            	2.	It checks if 'lst' and 'f' are valid (not NULL).
	*	            	3.	If both 'lst' and 'f' are valid, the function iterates
	*	            		through the linked list following the 'next' pointers.
	*	            	4.	For each node in the list, it calls the function 'f' and
	*	            		passes the content of the current node as an argument.
	*	            	5.	The 'lst' pointer is updated to point to the next node.
	*	            	6.	The function continues this process until it reaches the
	*	            		end of the linked list (lst is NULL).
	*	Summary:
	*	            	The 'ft_lstiter' function iterates through a linked list and
	*	            	applies a given function to the content of each node.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	void	node_uppercase(void *node)
	*	            	{
	*	            		char	*str;
	*	            		str = node;
	*	            		while (*str != '\0')
	*	            		{
	*	            		if (*str >= 'a' && *str <= 'z')
	*	            		*str -= 32;
	*	            		str++;
	*	            		}
	*	            	}

	*	            	void	print_linked_list(t_list *head)
	*	            	{
	*	            		t_list  *current;
	*	            		int	i;
	*
	*	            		current = head;
	*	            		i = 1;
	*	            		while (current != NULL)
	*	            		{
	*	            			printf("Node %d - Content: %s\n", i, (char *)current->content);
	*	            			if (current->next == NULL)
	*	            				printf("Reached the end of the linked list.\n");
	*	            			current = current->next;
	*	            		i++;
	*	            	}
}

	*	            	int	main(int argc, char **argv)
	*	            	{
	*	            		t_list  *node;
	*	            		t_list  *head;
	*	            		t_list  *current;
	*	            		t_list  *next;
	*	            		int      i;
	*
	*	            		if (argc > 2)
	*	            		{
	*	            			i = 1;
	*	            			node = ft_lstnew(argv[i]);
	*	            			if (node)
	*	            			{
	*	            				head = node;
	*	            				current = head;
	*	            			}
	*	            			else
    *	            			{
	*	            				printf("Node creation failed for argument %d\n", i);
	*	            				return (1);
	*	            			}
	*	            			i++;
	*	            			while (i < argc)
	*	            			{
	*	            				node = ft_lstnew(argv[i]);
	*	            				if (node)
	*	            				{
	*	            					current->next = node;
	*	            					current = current->next;
	*	            				}
	*	            				else
	*	            					printf("Node creation failed for argument %d\n", i);
	*	            				i++;
	*	            			}
	*	            			printf("Contents of all nodes before:\n");
	*	            			print_linked_list(head);
	*	            			ft_lstiter(head, node_uppercase);
	*	            			printf("\nContents of all nodes after:\n");
	*	            			print_linked_list(head);
	*	            			current = head;
	*	            			while (current)
	*	            			{
	*	            				next = current->next;
	*	            				free(current);
	*	            				current = next;
	*	            			}
	*	            		}
	*	            		else
	*	            			printf("Usage: program_name <content>\n");
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	None.
	*	Notes:
	*	            	The 'f' function is a user-defined function that specfies the
	*	            	action to be taken on the content of each node.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst || f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
