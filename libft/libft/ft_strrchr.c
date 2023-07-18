/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:58:26 by npentini          #+#    #+#             */
/*   Updated: 2023/06/04 17:21:42 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	m_c;
	char			*count;

	m_c = (unsigned char)c;
	count = NULL;
	while (*s != '\0')
	{
		if (*s == m_c)
			count = (char *)s;
		s++;
	}
	if (count != NULL)
		return (count);
	else if (m_c == '\0')
		return ((char *)s);
	return (NULL);
}
