/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:35:08 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 00:04:25 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "Hello, World!";
//	char	dest[20];

	printf("Source String: %s\n", src);
	ft_memmove(src, src + 7, 5 * sizeof(char));
	//memmove(src, src + 8, 2 * sizeof(char));
	printf("Copied string: %s\n", src);
	return (0);
}
