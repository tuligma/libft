/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:16:50 by npentini          #+#    #+#             */
/*   Updated: 2023/06/05 00:33:52 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	i = -1;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s > d)
	{
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		while (++i < n)
			d[n - i - 1] = s[n - i - 1];
	}
	return (d);
}
