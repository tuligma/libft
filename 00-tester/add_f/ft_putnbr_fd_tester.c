/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 07:26:31 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 07:28:10 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	n;
	int	fd;

	if (argc == 3)
	{
		n = ft_atoi(argv[1]);
		fd = ft_atoi(argv[2]);
		ft_putnbr_fd(n, fd);
		ft_putchar_fd('\n', 1);
	}
	else
		printf("Usage: %s <character> <fd>\n", argv[0]);
	return (0);
}
