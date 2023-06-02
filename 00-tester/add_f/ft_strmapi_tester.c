/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 02:31:12 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 03:42:30 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	r_x(unsigned int i, char s)
{
	char	a;

	a = '-';
	(void)i;
	(void)s;
	return (a);
}

int	main(int argc, char **argv)
{
	char	*s;
	char	(*f)(unsigned int, char);
	char	*result;

	if (argc == 2)
	{
		s = argv[1];
		f = r_x;
		result = ft_strmapi(s, f);
		if (result == NULL)
			printf("Memory allocation failed.\n");
		else
		{
			printf("Input: %s\n", s);
			printf("Result: %s\n", result);
			free(result);
		}
	}
	else
		printf("Usage: %s <input_string> <replacement_char>\n", argv[0]);
	return (0);
}
