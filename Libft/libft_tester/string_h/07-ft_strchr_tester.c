/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:27:27 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 23:50:32 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	const char	*s;
	int			c;
	char		*result;

	if (argc == 3)
	{
		s = argv[1];
		c = (unsigned char)argv[2][0];
		result = ft_strchr(s, c);
		printf("Original string: %s\n", s);
		if (result != NULL)
		{
			printf("Character '%c' found at the position %ld in the string.\n", c, result - s);
			printf("Remaining characters: %s\n", result);
		}
		else
			printf("Character '%c' not found in the string.\n", c);
	}
	else
		printf("Usage: %s <string> <character>\n", argv[0]);
	return (0);
}
