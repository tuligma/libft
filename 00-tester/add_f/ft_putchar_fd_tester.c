/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 06:49:02 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 06:56:44 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	c;
	int		fd;

	if (argc == 3)
	{
		c = argv[1][0];
		fd = ft_atoi(argv[2]);
		ft_putchar_fd(c, fd);
		ft_putchar_fd('\n', 1);
	}
	else
		printf("Usage: %s <character> <fd>\n", argv[0]);
	return (0);
}
