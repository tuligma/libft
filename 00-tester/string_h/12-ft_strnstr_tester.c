/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:57:33 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 23:27:05 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	const char	*b;
	const char	*l;
	size_t		len;
	char		*result;

	if (argc == 4)
	{
		b = argv[1];
		l = argv[2];
		len = atoi(argv[3]);
		result = ft_strnstr(b, l, len);
		if (*l == '\0')
		{
			printf("Empty string provided for <l- argv[2]>.");
			printf("The result is: %s\n", b);
			return (0);
		}
		if (result != NULL)
			printf("Match found!!!\nChar: %c\nString: %s\nPointer: %p\n", *result, result, (void *)result);
		else
			printf("No match found\n");
	}
	else
		printf("Usage: %s <big> <little> <len>\n", argv[0]);
	return (0);
}
