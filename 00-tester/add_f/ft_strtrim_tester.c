/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:08:19 by npentini          #+#    #+#             */
/*   Updated: 2023/06/02 11:19:52 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*s1;
	char	*set;
	char	*trim_str;

	if (argc == 3)
	{
		s1 = argv[1];
		set = argv[2];
		trim_str = ft_strtrim(s1, set);
		if (trim_str == NULL)
			printf("Null pointer returned.\n");
		else
		{
			printf("Original String: \"%s\"\n", s1);
			printf("Set: \"%s\"\n", set);
			printf("Trimmed String: \"%s\"\n", trim_str);
			free(trim_str);
		}
	}
	else
		printf("Usage: %s <string> <set>\n", argv[0]);
	return (0);
}
