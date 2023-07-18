/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:01:07 by npentini          #+#    #+#             */
/*   Updated: 2023/05/28 19:30:08 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n);

int	main(int argc, char **argv)
{
	const char	*src;
	char		*d_ft;
	char		d_st[100];

	if (argc == 3)
	{
		src = argv[1];
		d_ft = argv[2];
		printf("Original source string: \"%s\"\n", argv[1]);
		printf("Memory Address: %p\n", (const void *)argv[1]);
		ft_memcpy(d_ft, argv[1], strlen(src) + 1);
		printf("\nMyfunc: Copied string: \"%s\"\n", d_ft);
		printf("Memory Address: %p\n", (void *)d_ft);
		ft_memcpy(d_st, argv[1], strlen(src) + 1);
		printf("\nStandard: Copied string: \"%s\"\n", d_st);
		printf("Memory Address: %p\n", (void *)d_st);
	}
	else
		printf("Usage: ./program \"string\" \"destination\"\n");
	return (0);
}
