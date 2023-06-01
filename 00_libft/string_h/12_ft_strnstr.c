/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:09:57 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 22:54:54 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		lil_len;

	b = big;
	l = little;
	lil_len = ft_strlen(little);
	if (lil_len == 0)
		return ((char *)b);
	while (*b != '\0' && len >= lil_len)
	{
		if (ft_strncmp(b, l, lil_len) == 0)
		{
			return ((char *)b);
		}
		b++;
		len--;
	}
	return (NULL);
}
