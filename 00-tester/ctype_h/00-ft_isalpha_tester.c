/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-ft_isalpha_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:22:43 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:31:55 by npentini         ###   ########.fr       */
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
		printf("|  %sft_isalpha%s   |    %sisalpha	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_isalpha() vs isalpha() %s\n", YE, CR);
		printf("*********************************\n");
		if (ft_isalpha(c) && isalpha(c))
		{
			printf("|		|		|\n");
			printf("|	%s%c%s	|	%s%c%s	|", GR, c, CR, GR, c, CR);
			printf("%s<-- The character input.%s\n", YE, CR);
			printf("|	%s%d%s	|	%s%d%s	|", GR, ft_isalpha(c), CR, GR, isalpha(c), CR);
			printf("%s<-- The return value%s %s<non-zero>%s.\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("*********************************\n");
			printf("     %s>>This is an alphabet!<<%s   \n", GR, CR);
		}
		else
		{
			printf("|               |               |\n");
			printf("|	%s!%c%s	|	%s!%c%s	|", RE, c, CR, RE, c, CR);
			printf("%s<-- The input character.%s\n", YE, CR);
			printf("|	%s%d%s	|	%s%d%s	|", RE, ft_isalpha(c), CR, RE, isalpha(c), CR);
			printf("%s<-- The return value.%s %s<zero>%s\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("*********************************\n");
			printf("  %s>>This is not an alphabet!<<%s   \n", RE, CR);
		}
		printf("\n");
	}
	else
		printf("add 1 argument.\n");
	return (0);
}
