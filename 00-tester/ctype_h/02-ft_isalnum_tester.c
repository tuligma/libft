/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02-ft_isalnum_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 04:06:41 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:32:39 by npentini         ###   ########.fr       */
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
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("+	Comparison Results	+\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("|  %sft_isalnum%s   |    %sisalnum	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_isalnum() vs isalnum() %s\n", YE, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		if (ft_isalnum(c) && isalnum(c))
		{
			printf("|		|		|\n");
			printf("|	%s%c%s	|	%s%c%s	|", GR, c, CR, GR, c, CR);
			printf("%s<-- The character input.%s\n", YE, CR);
			printf("|      %s[%d]%s	|      %s[%d]%s	|", GR, ft_isalnum(c), CR, GR, isalnum(c), CR);
			printf("%s<-- The return value%s %s<non-zero>%s.\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("     %s>>This is alphanumeric!<<%s   \n", GR, CR);
		}
		else
		{
			printf("|               |               |\n");
			printf("|	%s!%c%s	|	%s!%c%s	|", RE, c, CR, RE, c, CR);
			printf("%s<-- The input character.%s\n", YE, CR);
			printf("|	%s%d%s	|	%s%d%s	|", RE, ft_isalnum(c), CR, RE, isalnum(c), CR);
			printf("%s<-- The return value.%s %s<zero>%s\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("  %s>>This is not alphanumeric!<<%s   \n", RE, CR);
		}
		printf("\n");
	}
	else
		printf("Usage: %s < ><-- one element argument.\n", argv[0]);
	return (0);
}
