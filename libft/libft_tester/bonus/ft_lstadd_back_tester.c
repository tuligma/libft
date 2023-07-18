/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_tester.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 22:13:49 by npentini          #+#    #+#             */
/*   Updated: 2023/06/06 22:45:54 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*list;
	t_list	*new_node;
	t_list	*current;
	int		i;

	if (argc >= 2)
	{
		i = 1;
		list = NULL;
		while (i < argc)
		{
			new_node = ft_lstnew(argv[i]);
			if (new_node == NULL)
			{
				ft_lstclear(&list, free);
				printf("Memory allocation failed.\n");
				return (1);
			}
			ft_lstadd_back(&list, new_node);
			i++;
		}
		current = list;
		while (current != NULL)
		{
			printf("%s\n", (char *)current->content);
			current = current->next;
		}
	}
	else
	{
		printf("Error: No command-line arguments provided.\n");
		printf("Usage: %s <argument1> <argument2> ...\n", argv[0]);
	}
	return (0);
}
