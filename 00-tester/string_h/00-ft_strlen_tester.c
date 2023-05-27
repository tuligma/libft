/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:29:57 by npentini          #+#    #+#             */
/*   Updated: 2023/05/26 21:43:16 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	const char	*s;
	size_t		length;

	if (argc == 2)
	{
		s = argv[1];
		length = ft_strlen(s);
		printf("Myfunc: Length of \"%s\" is %zu.\n", s, length);
		printf("String.h: Leng of \"%s\" is %zu.\n", s, strlen(s));
	}
	else
		printf("Usage: ./program \"string\"\n");
	return (0);
}
