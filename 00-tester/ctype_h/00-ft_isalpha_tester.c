/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-ft_isalpha_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:22:43 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 17:25:32 by npentini         ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = argv[1][0];
		if (ft_isalpha(c))
			printf("\"%c\" is an alphabet.\n", c);
		else
			printf("\"%c\" is not alphabet.\n", c);
	}
	else
		printf("add 1 argument.\n");
	return (0);
}
