/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_tester.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 04:12:37 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 06:36:18 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	rev_func(unsigned int i, char *s)
{
	char	last;
	size_t	len;
	size_t	x;

	len = ft_strlen(s);
	x = len - 1;
	last = s[len - 1];
	(void)i;
	while (x > 0)
	{
		s[x] = s[x -1];
		x--;
	}
	s[x] = last;
}

int	main(int argc, char **argv)
{
	char	*s;
	void	(*f)(unsigned int, char*);

	if (argc == 2)
	{
		s = argv[1];
		f = rev_func;
		printf("Original string: \"%s\"\n", s);
		ft_striteri(s, f);
		printf("Modified string: \'%s\'\n", s);
	}
	else
		printf("Usage: %s <string>\n", argv[0]);
	return (0);
}
