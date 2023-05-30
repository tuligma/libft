/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:33:50 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 00:46:22 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(int argc, char **argv)
{
	char	*src;
	char	dest[25];
	size_t	size;
	size_t	result;

	if (argc == 3)
	{
		src = argv[1];
		size = atoi(argv[2]);
		printf("Original string: \"%s\"\n", src);
		result = ft_strlcpy(dest, src, size);
		printf("\nCopied string: \"%s\"\n", dest);
		printf("Length of Orignal string: %ld\n", result);
	}
	else
		printf("<./program name>  <string> <number of char to copy>");
	return (0);
}
