/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-ft_isascii_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 20:33:50 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 20:49:29 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isascii(int c);

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = atoi(argv[1]);
		if (ft_isascii(c))
			printf("\"%c\" is an ASCII character.\n", c);
		else
			printf("\"%c\" is not an ASCII character.\n", c);
	}
	else
		printf("Add 1 argument.\n");
	return (0);
}
