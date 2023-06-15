/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 23:45:54 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 23:51:55 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*src;
	char	*dup;

	if (argc == 2)
	{
		src = argv[1];
		dup = ft_strdup(src);
		if (dup == NULL)
		{
			printf("Memory allocation failed.\n");
			return (1);
		}
		printf("Original string: %s\n", src);
		printf("Original address: %p\n", (void *)src);
		printf("Duplicated string: %s\n", dup);
		printf("Duplicated address: %p\n", (void *)dup);
		free(dup);
	}
	else
		printf("Usage: %s <src>\n", argv[0]);
	return (0);
}
