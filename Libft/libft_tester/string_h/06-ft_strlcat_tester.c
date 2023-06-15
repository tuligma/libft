/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:36:05 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 22:47:22 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char		dest[20] = "Hello ";
	const char	*src;
	size_t		size;
	size_t		result;

	src = "World!";
	size = sizeof(dest);
	result = ft_strlcat(dest, src, size);
	printf("Concatenated string: \"%s\"\n", dest);
	printf("Length of concatenated string: %zu\n", result);
}
