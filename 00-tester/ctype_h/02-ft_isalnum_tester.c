/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02-ft_isalnum_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuligma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:01:26 by tuligma           #+#    #+#             */
/*   Updated: 2023/05/26 20:06:01 by tuligma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c);

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = argv[1][0];
		if (ft_isalnum(c))
			printf("\"%c\" is an alphanumeric\n", c);
		else
			printf("\"%c\" is not an alphanumeric\n", c);
	}
	else
		printf("Add 1 argument.\n");
	return (0);
}
