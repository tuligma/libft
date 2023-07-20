/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:22:21 by npentini          #+#    #+#             */
/*   Updated: 2023/07/20 00:33:08 by npentini         ###   ########.fr       */
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

	current = head;
	while (current != NULL)
	{
		printf("Node - Content: %s\n", (char *)current->content);
		if (current->next == NULL)
			printf("Reached the end of the linked list.\n");
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	*head;
	t_list	*current;
	t_list	*next;
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
		to_delete = argv[1];
		current = head;
		prev = NULL;
		while (current != NULL)
		{
			if (strcmp((char *)current->content, to_delete) == 0)
			{
				if (prev == NULL)
					head = current->next;
				else
					prev->next = current->next;
				ft_lstdelone(current, delete_node);
				break ;
			}
			prev = current;
			current = current->next;
		}
		printf("\nContents of all nodes after:\n");
		print_linked_list(head);
		current = head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
	else
	{
		printf("Usage: program_name <content>\n");
		printf("Nodes: \"loves\" \"42\" \"Abu\" \"Dhabi\"\n");
	}
	return (0);
}
