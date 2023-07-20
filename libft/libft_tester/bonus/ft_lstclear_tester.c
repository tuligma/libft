/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_tester.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:22:21 by npentini          #+#    #+#             */
/*   Updated: 2023/07/20 02:38:42 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	delete_node(void *content)
{
	(void)content;
}

void	print_linked_list(t_list *head)
{
	t_list	*current;
	int		i;

	current = head;
	i = 1;
	if (head == NULL)
		return ;
	while (current != NULL)
	{
		printf("Node %i - Content: %s\n", i, (char *)current->content);
		if (current->next == NULL)
			printf("Reached the end of the linked list.\n");
		current = current->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	*head;
	t_list	*current;
	t_list	*next_node;
	t_list	*prev;
	char	*to_delete;
	int		i;

	if (argc == 2)
	{
		char	*contents[] = {"loves", "42", "Abu", "Dhabi"};
		i = 0;
		node = ft_lstnew(contents[i]);
		if (node != NULL)
		{
			head = node;
			current = head;
		}
		else
		{
			printf("Node creation failed for argument %d\n", i);
			return (1);
		}
		i++;
		while (i < 4)
		{
			node = ft_lstnew(contents[i]);
			if (node != NULL)
			{
				current->next = node;
				current = current->next;
			}
			else
				printf("Node creation failed for argument %d\n", i);
			i++;
		}
		printf("Contents of all nodes before:\n");
		print_linked_list(head);
		printf("\nContents of all nodes after:\n");
		to_delete = argv[1];
		current = head;
		prev = NULL;
		while (current != NULL)
		{
			next_node = current->next;
			if (strcmp((char *)current->content, to_delete) == 0)
			{
				ft_lstclear(&current, delete_node);
				if (prev == NULL)
					head = NULL;
				else
					prev->next = NULL;
				break ;
			}
			prev = current;
			current = next_node;
		}
		print_linked_list(head);
		if (head == NULL)
			printf("\nAll nodes has been deleted.\n");
		ft_lstclear(&head, delete_node);
	}
	else
	{
		printf("Usage: program_name <content>\n");
		printf("Nodes: \"loves\" \"42\" \"Abu\" \"Dhabi\"\n");
	}
	return (0);
}
