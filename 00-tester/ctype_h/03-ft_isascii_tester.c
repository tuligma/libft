/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03-ft_isascii_tester.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 04:58:08 by npentini          #+#    #+#             */
/*   Updated: 2023/06/12 06:32:57 by npentini         ###   ########.fr       */
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
		printf("|  %sft_isascii%s   |    %sisascii	%s|", BU, CR, BU, CR);
		printf("%s<-- ft_isascii() vs isascii() %s\n", YE, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		if (ft_isascii(c) && isascii(c))
		{
			printf("|		|		|\n");
			if (isprint(c))
			{
				printf("|      %s\"%c\"%s	|      %s\"%c\"%s	|", GR, c, CR, GR, c, CR);
			}
			else
				printf("|%s  !printable%s   |%s  !printable%s   |", GR, CR, GR, CR);
			printf("%s<-- The character input.%s\n", YE, CR);
			printf("|      %s[%d]%s	|      %s[%d]%s	|", GR, ft_isascii(c), CR, GR, isascii(c), CR);
			printf("%s<-- The return value%s %s<non-zero>%s.\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s>>This is an ascii chararcter!<<%s   \n", GR, CR);
		}
		else
		{
			printf("|               |               |\n");
			printf("|    %s!(%c)%s	|   %s!(%c)%s	|", RE, c, CR, RE, c, CR);
			printf("%s<-- The input character.%s\n", YE, CR);
			printf("|     %s[%d]%s	|    %s[%d]%s	|", RE, ft_isascii(c), CR, RE, isascii(c), CR);
			printf("%s<-- The return value.%s %s<zero>%s\n", YE, CR, GR, CR);
			printf("|               |               |\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s>>This is not an ascii character!<<%s   \n", RE, CR);
		}
		printf("\n");
	}
	else
		printf("Usage: %s < > <--one argument.\n", argv[0]);
	return (0);
}
