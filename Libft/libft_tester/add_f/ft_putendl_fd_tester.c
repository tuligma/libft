/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 07:02:07 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 07:15:07 by npentini         ###   ########.fr       */
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
		ft_putendl_fd(str, fd);
	}
	else
		printf("Usage: %s <character> <fd>\n", argv[0]);
	return (0);
}
