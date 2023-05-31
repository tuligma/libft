/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 00:08:58 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 11:33:11 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	char	*str;
	int		c;
	char	*last;
	int		position;

	if (argc == 3)
	{
		str = argv[1];
		c = argv[2][0];
		last = ft_strrchr(str, c);
		if (last != NULL)
		{
			position = last - str;
			printf("Original String: %s\n", str);
			printf("Position of '%c': %d\n", c, position);
			printf("Remaining String: %s\n", last);
		}
		else
			printf("Character '%c' not found in the string.\n", c);
	}
	else
		printf("Usage: %s <string> <character>\n", argv[0]);
	return (0);
}
