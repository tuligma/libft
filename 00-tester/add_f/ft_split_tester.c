/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:08:44 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 20:47:20 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	**result;
	char	*s;
	char	*c;
	int		i;

	if (argc == 3)
	{
		s = argv[1];
		c = argv[2];
		result = ft_split(s, c[0]);
		printf("Original String: %s\n", s);
		if (result == NULL)
			printf("Memory allocation failed.\n");
		i = 0;
		while (result[i] != NULL)
		{
			printf("Substring %i:%s\n", i, result[i]);
			i++;
		}
		i = 0;
		while (result[i] != NULL)
		{
			free(result[i]);
			i++;
		}
		free(result);
	}
	else
		printf("Usage: %s <string> <delimiter>\n", argv[0]);
	return (0);
}
