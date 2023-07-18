/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 00:51:30 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 01:01:13 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	x;
	int	sign;
	int	result;

	x = 0;
	sign = 1;
	result = 0;
	while (nptr[x] == ' ' || (nptr[x] >= '\t' && nptr[x] <= '\r'))
		x++;
	if (nptr[x] == '-')
	{
		sign = -1;
		x++;
	}
	else if (nptr[x] == '+')
		x++;
	while (nptr[x] >= '0' && nptr[x] <= '9')
	{
		result *= 10;
		result += nptr[x] - '0';
		x++;
	}
	result *= sign;
	return (result);
}
