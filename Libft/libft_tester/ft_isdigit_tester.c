/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01-ft_isdigit_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 03:56:58 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:32:20 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = argv[1][0];
		printf("\n");
		printf("*********************************\n");
		printf("|	Comparison Results	|\n");
		printf("*********************************\n");
		printf("|  %sft_isdigit%s   |    %sisdigit	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_isdigit() vs isdigit() %s\n", YE, CR);
		printf("*********************************\n");
		if (ft_isdigit(c) && isdigit(c))
		{
			printf("|		|		|\n");
			printf("|	%s%c%s	|	%s%c%s	|", GR, c, CR, GR, c, CR);
			printf("%s<-- The character input.%s\n", YE, CR);
			printf("|	%s%d%s	|	%s%d%s	|", GR, ft_isdigit(c), CR, GR, isdigit(c), CR);
			printf("%s<-- The return value%s %s<non-zero>%s.\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("*********************************\n");
			printf("     %s>>This is a digit!<<%s   \n", GR, CR);
		}
		else
		{
			printf("|               |               |\n");
			printf("|	%s!%c%s	|	%s!%c%s	|", RE, c, CR, RE, c, CR);
			printf("%s<-- The input character.%s\n", YE, CR);
			printf("|	%s%d%s	|	%s%d%s	|", RE, ft_isdigit(c), CR, RE, isdigit(c), CR);
			printf("%s<-- The return value.%s %s<zero>%s\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("*********************************\n");
			printf("  %s>>This is not a digit!<<%s   \n", RE, CR);
		}
		printf("\n");
	}
	else
		printf("Usage: %s < ><-- one element argument.\n", argv[0]);
	return (0);
}
