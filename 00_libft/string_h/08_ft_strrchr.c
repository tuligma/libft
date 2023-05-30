/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:58:26 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 00:04:15 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*count;

	count = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			count = (char *)s;
		s++;
	}
	if (count != NULL)
		return (count);
	else if (c == '\0')
		return ((char *)s);
	return (NULL);
}
