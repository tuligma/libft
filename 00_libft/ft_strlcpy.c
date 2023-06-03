/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:26:59 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 00:33:18 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (len < size && src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	while (src[len] != '\0')
		len++;
	return (len);
}
