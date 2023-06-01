/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:53:34 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 13:31:24 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	const void	*s;
	const void	*result;
	unsigned char	c;
	size_t		size;

	if (argc == 4)
	{
		s = argv[1];
		c = argv[2][0];
		size = atoi(argv[3]);
		result = ft_memchr(s, c, size);
		printf("Original string: %s\n", (const char *)s);
		if (result != NULL)
		{
			printf("Character '%c' found at the position %ld in the string.\n", c, (char *)result - (char *)s);
			printf("Remaining characters: %s\n", (const char *)result);
		}
		else
			printf("Character '%c' not found in the string.\n", c);
	}
	else
		printf("Usage: %s <string> <character>\n", argv[0]);
	return (0);
}
