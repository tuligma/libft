/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:22:21 by npentini          #+#    #+#             */
/*   Updated: 2023/07/20 05:03:54 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	del_node(void *content)
{
	(void)content;
}

void	node_uppercase(void *node)
{
	char	*str;

	str = node;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

void	*node_duplicate(void *content)
{
	char	*duplicate;

	duplicate = ft_strdup((const char *) content);
	return ((void *)duplicate);
}

void	print_linked_list(t_list *head)
{
	t_list	*current;
	int		i;

	current = head;
	i = 1;
	while (current != NULL)
	{
		printf("Node %d - Content: %s\n", i, (char *)current->content);
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
	t_list	*next;
	t_list	*new_list;
	int		i;

	if (argc > 2)
	{
		i = 1;
		node = ft_lstnew(argv[i]);
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
		while (i < argc)
		{
			node = ft_lstnew(argv[i]);
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
		new_list = ft_lstmap(head, node_duplicate, del_node);
		ft_lstiter(head, node_uppercase);
		printf("\nContents of all nodes after using ft_lstiter:\n");
		print_linked_list(head);
		printf("\nContents of all nodes after using ft_lstmap:\n");
		print_linked_list(new_list);
		ft_lstclear(&head, del_node);
		current = new_list;
		while (current != NULL)
		{
			next = current->next;
			free(current->content);
			free(current);
			current = next;
		}
	}
	else
		printf("Usage: program_name <content>\n");
	return (0);
}
