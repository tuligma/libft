/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:07:25 by npentini          #+#    #+#             */
/*   Updated: 2023/05/27 23:57:03 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	char		ch;
	size_t		buff_size;

	if (argc == 4)
	{
		ch = argv[2][0];
		buff_size = atoi(argv[3]);
		if (buff_size > strlen(argv[1]))
			printf("Buff_size should be lessthan or equal the lenght of str.\n");
		else
		{
			ft_memset(argv[1], ch, buff_size);
			printf("After ft_memset: \"%s\"\n", argv[1]);
			printf("After Native_memset: \"%s\"\n", (char *)memset(argv[1], ch, buff_size));
		}
	}
	else
		printf("Usage: ./program \"string\" buffer_size\n");
	return (0);
}
