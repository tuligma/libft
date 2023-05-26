/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-ft_isdigit_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:52:54 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 18:03:20 by npentini         ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = argv[1][0];
		if (ft_isdigit(c))
			printf("\"%c\" is a digit\n", c);
		else
			printf("\"%c\" is not a number\n", c);
	}
	else
		printf("Add 1 argument.\n");
	return (0);
}
