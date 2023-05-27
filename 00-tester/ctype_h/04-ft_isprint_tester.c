/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-ft_isprint_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:00:34 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 21:06:28 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isprint(int c);

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = atoi(argv[1]);
		if (ft_isprint(c))
			printf("\"%c\" is a printable character.\n", c);
		else
			printf("\"%c\" is not printable character.\n", c);
	}
}
