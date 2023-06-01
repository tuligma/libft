/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:42:22 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 03:46:40 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	char	*result;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		result = ft_strjoin(s1, s2);
		if (result == NULL)
			printf("Memory allocation failed.\n");
		else
		{
			printf("string1: \"%s\"\n", s1);
			printf("string2: \"%s\"\n", s2);
			printf("Concatenated string: \"%s\"\n", result);
			free(result);
		}
	}
	else
		printf("Usage: %s <string1> <string2>\n", argv[0]);
	return (0);
}
