/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:16:50 by npentini          #+#    #+#             */
/*   Updated: 2023/05/29 23:52:12 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;
	char				*e;

	d = dest;
	s = src;
	e = (char *)malloc(sizeof(char) * n);
	if (d == NULL && s == NULL)
		return (dest);
	i = 0;
	while (i < n)
	{
		e[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = e[i];
		i++;
	}
	return (d);
}
