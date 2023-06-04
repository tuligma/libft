/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:26:59 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 09:36:38 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	src_len;

	src_len = ft_strlen(src);
	len = 0;
	if (size > 0)
	{
		while (len < size - 1 && src[len] != '\0')
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	return (src_len);
}
