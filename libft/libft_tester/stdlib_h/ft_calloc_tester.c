/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 00:44:47 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 00:45:23 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	unsigned char	*size_ptr;
	size_t			nmemb;
	size_t			size;
	size_t			i;
	void			*ptr;

	if (argc == 3)
	{
		nmemb = atoi(argv[1]);
		size = atoi(argv[2]);
		ptr = ft_calloc(nmemb, size);
		size_ptr = (unsigned char *)ptr;
		if (ptr == NULL)
			printf("Memory allocation failed.\n");
		printf("Memory allocated successfully.\n");
		printf("Address of allocated memory: %p\n", ptr);
		i = 0;
		while (i < nmemb)
		{
			printf("Element %zu: %u (Value: 0, Size: %zu bytes)\n", i, size_ptr[i], size);
			i++;
		}
		free(ptr);
	}
	else
		printf("Usage: ./program_name <nmemb> <size>\n");
	return (0);
}
