/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:13:33 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 03:19:22 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	unsigned int	start;
	char			*s;
	char			*result;
	size_t			size;

	if (argc == 4)
	{
		s = argv[1];
		start = ft_atoi(argv[2]);
		size = ft_atoi(argv[3]);
		result = ft_substr(s, start, size);
		printf("Original String: %s\n", s);
		printf("Starting Position: %u\n", start);
		printf("Size: %zu\n", size);
		printf("Substring: %s\n", result);
		free(result);
	}
	else
		printf("Usage: %s <string> <start> <size>\n", argv[0]);
	return (0);
}
