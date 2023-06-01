/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:26:54 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 01:30:01 by npentini         ###   ########.fr       */
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
		low = argv[1][0];
		up = ft_toupper(low);
		printf("Original: %c\n", low);
		printf("Uppercase: %c\n", up);
	}
	else
		printf("Usage: %s <character>\n", argv[0]);
	return (0);
}
