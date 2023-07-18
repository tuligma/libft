/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:22:21 by npentini          #+#    #+#             */
/*   Updated: 2023/07/19 00:40:26 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	*head;
	t_list	*current;
	t_list	*next;
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
		printf("Contents of all nodes:\n");
		current = head;
		while (current != NULL)
		{
			printf("Node - Content: %s\n", (char *)current->content);
			if (current->next == NULL)
				printf("Reached the end of the linked list.\n");
			current = current->next;
		}
		current = head;
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
	else
		printf("Usage: program_name <content>\n");
	return (0);
}
