/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:04:42 by npentini          #+#    #+#             */
/*   Updated: 2023/10/02 11:59:53 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last_node;

	if (!list || !new)
		return ;
	else if (!*list)
	{
		*list = new;
		return ;
	}	
	last_node = *list;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new;
}
