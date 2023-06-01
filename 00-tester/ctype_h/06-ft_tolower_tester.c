/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:30:30 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 01:33:18 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	low;
	char	up;

	if (argc == 2)
	{
		up = argv[1][0];
		low = ft_tolower(up);
		printf("Original: %c\n", up);
		printf("Uppercase: %c\n", low);
	}
	else
		printf("Usage: %s <character>\n", argv[0]);
	return (0);
}
