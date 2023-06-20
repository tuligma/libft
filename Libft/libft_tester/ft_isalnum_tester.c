/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 13:19:25 by npentini          #+#    #+#             */
/*   Updated: 2023/06/16 19:26:53 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		c = argv[1][0];
		if (ft_isalnum(c) != (isalnum(c) != 0))
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\t\t\t\t\t%sError:%s\n", RE, CR);
			printf("\t\t\t\t\t%sThe return value of", RE);
			printf("%sft_isalnum%s is <%szero%s>.%s\n", YE, RE, YE, RE, CR);
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
			printf("\t\t\t\t\t|  %sft_isalnum%s   |    %sisalnum	%s|",
				BU, CR, BU, CR);
			printf("%s <-- ft_isalnum() vs isalnum() %s\n", YE, CR);
			printf("\t\t\t\t\t=================================\n");
			if (ft_isalnum(c) && isalnum(c))
			{
				printf("\t\t\t\t\t|		|		|\n");
				printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
					GR, c, CR, GR, c, CR);
				printf("%s <-- The character input.%s\n", YE, CR);
				printf("\t\t\t\t\t|	%s[%d]%s	|	%s[%d]%s	|",
					GR, ft_isalnum(c), CR, GR, isalnum(c), CR);
				printf("%s <-- The return value%s %s<non-zero>%s.\n",
					YE, CR, GR, CR);
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t=================================\n");
				printf("\n");
				printf("%s \t\t\t\t\t\"%c\"%s %sis an alphanumeric character.%s\n",
					YE, c, CR, GR, CR);
			}
			else
			{
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
					RE, c, CR, RE, c, CR);
				printf("%s <-- The input character.%s\n", YE, CR);
				printf("\t\t\t\t\t|	%s[%d]%s	|	%s[%d]%s	|",
					RE, ft_isalnum(c), CR, RE, isalnum(c), CR);
				printf("%s <-- The return value.%s %s<zero>%s\n",
					YE, CR, GR, CR);
				printf("\t\t\t\t\t|               |               |\n");
				printf("\t\t\t\t\t=================================\n");
				printf("\n");
				printf("%s \t\t\t\t\t\"%c\"%s %sis not an alphanumeric character!%s\n",
					YE, c, CR, RE, CR);
			}
			printf("\n\n\n");
			printf("%sisalnum():\n", GR);
			printf("\t%sDescription:\n", BU);
			printf("\t%schecks for an alphanumeric character; ", YE);
			printf("it is equivalent to (%sisalpha(c) %s||%s isdigit(c)%s).\n\n",
				GR, YE, GR, YE);
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
