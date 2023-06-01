/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:44:21 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 21:48:15 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	const void	*s1;
	const void	*s2;
	size_t		n;
	int			result;

	if (argc == 4)
	{
		s1 = argv[1];
		s2 = argv[2];
		n = atoi(argv[3]);
		result = ft_memcmp(s1, s2, n);
		printf("Comparison result: %d\n", result);
	}
	else
		printf("Usage: %s s1 s2 size\n", argv[0]);
	return (0);
}
