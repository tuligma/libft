/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:58:59 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 22:58:47 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	x;
	size_t			i;

	i = 0;
	p = s;
	x = c;
	while (n--)
	{
		p[i] = x;
		p++;
	}
	return (s);
}
