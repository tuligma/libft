/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:53:57 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:58:50 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (size > 0 && (*s1 || *s2))
	{
		if (*s1 > *s2 || *s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		size--;
	}
	return (0);
}
