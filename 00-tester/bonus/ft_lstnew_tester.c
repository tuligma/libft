/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 21:22:21 by npentini          #+#    #+#             */
/*   Updated: 2023/06/06 21:43:41 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*node;

	if (argc == 2)
	{
		node = ft_lstnew(argv[1]);
		if (node == 0)
		{
			printf("Failed to create a new node.\n");
			return (1);
		}
		printf("New node created with content: %s\n", (char *)node->content);
	}
	else
		printf("Usage: program_name <content>\n");
	return (0);
}
