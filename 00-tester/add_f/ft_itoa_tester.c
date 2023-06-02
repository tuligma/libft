/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 22:41:48 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 22:45:20 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		n;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		str = ft_itoa(n);
		if (str == NULL)
			printf("Memory allocation failed\n");
		printf("Integer: %d\n", n);
		printf("String: \"%s\"\n", str);
		free(str);
	}
	else
		printf("Usage: ./program <integer>\n");
	return (0);
}
