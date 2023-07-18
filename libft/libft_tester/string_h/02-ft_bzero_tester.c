/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:13:16 by npentini          #+#    #+#             */
/*   Updated: 2023/05/28 18:41:40 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	size_t	buff_size;

	if (argc == 3)
	{
		buff_size = atoi(argv[2]);
		if (buff_size > strlen(argv[1]))
		{
			printf("Buff_size should be lessthan or equal the lenght of str.\n");
		}
		else
		{
			ft_bzero(argv[1], buff_size);
			printf("After ft_bzero: \"%.s\"\n", argv[1]);
			ft_bzero(argv[1], buff_size);
			printf("After Native_bzero: \"%s\"\n", (char *)memset(argv[1], 0, buff_size));
		}
	}
	else
		printf("Usage: ./program \"string\" buffer_size\n");
	return (0);
}
