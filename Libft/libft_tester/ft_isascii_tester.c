/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:03:47 by npentini          #+#    #+#             */
/*   Updated: 2023/06/16 20:08:49 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = atoi(argv[1]);
		if (ft_isascii(c) != (isascii(c) != 0))
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\t\t\t\t\t%sError:%s\n", RE, CR);
			printf("\t\t\t\t\t%sThe return value of", RE);
			printf("%sft_isascii%s is <%szero%s>.%s\n", YE, RE, YE, RE, CR);
			printf("\t\t\t\t\t%swhile the %sexpected return value", RE, GR);
			printf("%s is<%snon-zero%s>.%s\n", RE, GR, RE, CR);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
		}
		else
		{
			printf("\n\n\n\n\n");
			printf("\t\t\t\t\t=================================\n");
			printf("\t\t\t\t\t|%s	Comparison Results	%s|\n", BU, CR);
			printf("\t\t\t\t\t=================================\n");
			printf("\t\t\t\t\t|  %sft_isascii%s   |    %sisascii	%s|",
				BU, CR, BU, CR);
			printf("%s <-- ft_isascii() vs isascii() %s\n", YE, CR);
			printf("\t\t\t\t\t=================================\n");
			if (ft_isascii(c) && isascii(c))
			{
				printf("\t\t\t\t\t|		|		|\n");
				printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
					GR, c, CR, GR, c, CR);
				printf("%s <-- The character input.%s\n", YE, CR);
				printf("\t\t\t\t\t|	%s[%d]%s	|	%s[%d]%s	|",
					GR, ft_isascii(c), CR, GR, isascii(c), CR);
				printf("%s <-- The return value%s %s<non-zero>%s.\n",
					YE, CR, GR, CR);
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t=================================\n");
				printf("\n");
				printf("%s \t\t\t\t\t\"%c\"%s %sis an ascii character.%s\n",
					YE, c, CR, GR, CR);
			}
			else
			{
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
					RE, c, CR, RE, c, CR);
				printf("%s <-- The input character.%s\n", YE, CR);
				printf("\t\t\t\t\t|	%s[%d]%s	|	%s[%d]%s	|",
					RE, ft_isascii(c), CR, RE, isascii(c), CR);
				printf("%s <-- The return value.%s %s<zero>%s\n",
					YE, CR, GR, CR);
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t=================================\n");
				printf("\n");
				printf("%s \t\t\t\t\t\"%c\"%s %sis not an ascii character!%s\n",
					YE, c, CR, RE, CR);
			}
			printf("\n\n\n");
			printf("%sisascii():\n", GR);
			printf("\t%sDescription:\n", BU);
			printf("\t%schecks whether c is a %s7-bit unsigned char ", YE, GR);
			printf("%svalue that fits into the %sASCII%s character set.\n\n",
				YE, GR, YE);
			printf("\t%sReturn Value:\n", BU);
			printf("\t%sThe values returned are <%snon-zero%s> if the ",
				YE, GR, YE);
			printf("character %sc%s falls into the tested class, ", GR, YE);
			printf("and <%szero%s> if not.", GR, YE);
			printf("\n\n\n");
		}
	}
	else
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\t\t\t\t\t%sError: add a character after <%s%s%s%s%s>).%s\n",
			RE, CR, YE, argv[0], CR, RE, CR);
		printf("\t\t\t\t\t%sExample:%s\n\t\t\t\t\t%s\"$ %s c\"%s", BU, CR, YE, argv[0], CR);
		printf("\n\n\n\n\n\n\n\n\n\n\n");
	}
	return (0);
}
