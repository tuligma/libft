/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-ft_memset_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:07:25 by npentini          #+#    #+#             */
/*   Updated: 2023/06/14 23:48:42 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	char		*s;
	char		c;
	size_t		buff_size;
	size_t		i;

	if (argc == 4)
	{
		s = argv[1];
		c = argv[2][0];
		buff_size = atoi(argv[3]);
		i = 0;
		printf("\n");
		printf("Before\n");
		printf("Input string: %s. --> %p\n", s, s);
		while (i < strlen(s))
		{
			printf("%c\n|\n", s[i]);
			printf("[%p]\n", &s[i]);
			i++;
		}
		printf("After\n");
		printf("Input string: %s. --> %p\n", (char *)ft_memset(s, c, buff_size), s);
		printf("Input string: %s. --> %p\n", (char *)memset(s, c, buff_size), s);
	}
	else
		printf("Usage: ./program \"string\" buffer_size\n");
	return (0);
}
