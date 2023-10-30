/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:59:01 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 11:38:05 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_lstiter
	*	Header:     	libft.h
	*	Prototype:  	t_list *ft_lstiter(t_list *lst, void *(*f)(void *),
	*	            	void (*del)(void *));
	*	Parameters: 	lst (t_list **):	The original list to map.
	*	            						list to be iterated.
	*	            	f (function pointer):	A pointer to the function to
	*	            							apply to the content of each node.
	*	            	del (function pointer):	A pointer to the function used
	*	            							to delete the content of each
	*	            							node.
	*	Description:	This function iterates through a linked list  and applies
	*	            	a given function 'f' to the content of each node. Creates
	*	            	a new list resulting of the successive applications of the
	*	            	function 'f'. The 'del' function is used to delete the
	*	            	content of a node if needed.           	
	*	Return:     	A new list containing the modified content of each node, or
	*	            	NULL if memory allocation fails.
	*	External Functions:
	*	            	1.	ft_lstnew
	*	            	2.	ft_lstadd_back
	*	            	3.	ft_lstclear
	*	Data Structures:
	*	            	t_list (from libft.h)
	*	            	A structure used to represent a node in a linked list.
	*	            	-	void *content:			A pointer to the data to be
	*	            								stored in the node.
	*	            	-	struct s_list *next:	A pointer to the next node in
	*	            	-							in the linked list.
	*	Walkthrough:
	*	            	1.	The function takes three parameters: 'lst', a pointer to
	*	            		the head of the linked list,'f', a function pointer and
	*	            		del, a function pointer to delete the content of the node.
	*	            	2.	It checks if either 'lst','f', 'del' is NULL. If any is NULL
	*	            		it returns NULL.
	*	            	3.	The function initializes a pointer 'new_list' to NULL.
	*	            	4.	The function will enter a loop and will iterates through
	*	            		the linked list.
	*	            	5.	The content of 'lst' will be passed as an argument to
	*	            		the function pointer 'f' and the return value will be
	*	            		assigned to the pointer 'content'.
	*	            	6.	Node creation will be assign to the pointer 'node', by 
	*	            		calling the function 'ft_lstnew' and passing the pointer
	*	            		'content'.
	*	            	7.	If memory allocation fails for node creation, the 'content'
	*	            		will deleted by calling the function pointer 'del' and the
	*	            		function 'ft_lstclear' will be called to free the entire
	*	            		new list 'new_list' to prevent memory leaks, The function
	*	            		will be terminated by returning NULL.
	*	            	8.	If the node is successfully created, the node will be added
	*	            		to the list by calling the function 'ft_lstadd_back'.
	*	            	9.	After processing all nodes in 'lst', the 'new_list' is 
	*	            		returned.
	*	Summary:
	*	            	The 'ft_lstiter' function creates a new linked list by applying
	*	            	a function to each node's content from the original list. It
	*	            	handles memory allocation failures.
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
	*	            	void	node_uppercase(void *node)
	*	            	{
	*	            		char	*str;
	*	            		str = node;
	*	            		while (*str != '\0')
	*	            		{
	*	            		if (*str >= 'a' && *str <= 'z')
	*	            			*str -= 32;
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
	*	            		while (i < argc)
	*	            		{
	*	            			node = ft_lstnew(argv[i]);
	*	            			if (node)
	*	            			{
	*	            				current->next = node;
	*	            				current = current->next;
	*	            			}
	*	            			else
	*	            				printf("Node creation failed for argument %d\n", i);
	*	            			i++;
	*	            			}
	*	            			printf("Contents of all nodes before:\n");
	*	            			print_linked_list(head);
	*	            			new_list = ft_lstmap(head, node_uppercase, del_node);
	*	            			printf("\nContents of all nodes after:\n");
	*	            			print_linked_list(new_list);
	*	            			ft_lstclear(&head, del_node);
	*	            			ft_lstclear(&new_list, del_node);
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
	*	            	action to be taken on the content of each node. Any attempt to
	*	            	change the linked list's structure during the mapping process
	*	            	can lead to undefined behavior.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{	
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
