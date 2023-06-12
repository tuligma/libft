/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_tester_memstress.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:51:34 by npentini          #+#    #+#             */
/*   Updated: 2023/06/06 22:04:13 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*node;
	int		num_nodes;
	int		i;

	num_nodes = 100000000;
	i = 0;
	while (i < num_nodes)
	{
		node = ft_lstnew(NULL);
		if (node == NULL)
		{
			printf("Failed to create a new node at index %d.\n", i);
			return (1);
		}
		if (i % 100000000000000 == 0)
			printf("Nodes created: %d\n", i);
		i++;
		free(node);
	}
	printf("All %d nodes created successfully.\n", num_nodes);
	return (0);
}
