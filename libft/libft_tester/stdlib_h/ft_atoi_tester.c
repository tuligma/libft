/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 01:04:08 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 01:09:10 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	const char	*nptr;
	int			result;

	if (argc == 2)
	{
		nptr = argv[1];
		result = ft_atoi(nptr);
		printf("Original input: \"%s\"\n", nptr);
		printf("Converted integer: %d\n", result);
	}
	else
		printf("Usage: %s <nptr>\n", argv[0]);
	return (0);
}
