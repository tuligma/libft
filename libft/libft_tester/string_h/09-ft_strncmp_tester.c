/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:05:02 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 12:20:38 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size);

int	main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	size_t		size;
	int			result;

	if (argc == 4)
	{
		s1 = argv[1];
		s2 = argv[2];
		size = atoi(argv[3]);
		result = ft_strncmp(s1, s2, size);
		if (result == 0)
		{
			printf("\"%s\" and \"%s\" are equal", s1, s2);
			printf(" in the first %d bytes\n", atoi(argv[3]));
		}
		else if (result < 0)
			printf("\"%s\" is less than \"%s\" (%d)\n", s1, s2, result);
		else
			printf("\"%s\" is greater than \"%s\" (%d)\n", s1, s2, result);
	}
	else
		printf("Usage: %s <string1> <string2> <size>\n", argv[0]);
	return (0);
}
