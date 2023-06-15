/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 07:02:07 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 07:05:44 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		fd;

	if (argc == 3)
	{
		str = argv[1];
		fd = ft_atoi(argv[2]);
		ft_putstr_fd(str, fd);
		printf("\n");
	}
	else
		printf("Usage: %s <character> <fd>\n", argv[0]);
	return (0);
}
