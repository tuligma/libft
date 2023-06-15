/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04-ft_isprint_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:31:29 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:33:13 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = atoi(argv[1]);
		printf("\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("+	Comparison Results	+\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("|  %sft_isprint%s   |    %sisprint	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_isprint() vs isprint() %s\n", YE, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		if (ft_isprint(c) && isprint(c))
		{
			printf("|		|		|\n");
			printf("|      %s\"%c\"%s	|      %s\"%c\"%s	|", GR, c, CR, GR, c, CR);
			printf("%s<-- The character input.%s\n", YE, CR);
			printf("|      %s[%d]%s	|      %s[%d]%s	|",
				GR, ft_isprint(c), CR, GR, isprint(c), CR);
			printf("%s<-- The return value%s %s<non-zero>%s.\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s>>This is a printable chararcter!<<%s   \n", GR, CR);
		}
		else
		{
			printf("|               |               |\n");
			printf("|%s  !printable%s   |%s  !printable%s   |", RE, CR, RE, CR);
			printf("%s<-- The input character.%s\n", YE, CR);
			printf("|     %s[%d]%s	|    %s[%d]%s	|",
				RE, ft_isprint(c), CR, RE, isprint(c), CR);
			printf("%s<-- The return value.%s %s<zero>%s\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s>>This is not a printable character!<<%s   \n", RE, CR);
		}
		printf("\n");
	}
	else
		printf("Usage: %s < > <--one argument.\n", argv[0]);
	return (0);
}
