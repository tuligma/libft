/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 22:56:45 by npentini          #+#    #+#             */
/*   Updated: 2023/06/19 22:58:50 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	int	c;

	if (argc == 2)
	{
		if (strlen(argv[1]) > 1)
			c = atoi(argv[1]);
		else
			c = argv[1][0];
		if (ft_toupper(c) != toupper(c))
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			printf("\n\t\t\t\t\t%sError:%s\n", RE, CR);
			printf("\t\t\t\t\t%sThe return value of", RE);
			printf("%s ft_toupper%s is <%s\"%c\"%s>.%s\n",
				YE, RE, YE, ft_toupper(c), RE, CR);
			printf("\t\t\t\t\t%swhile the %sexpected return value", RE, GR);
			printf("%s is <%s\"%c\"%s>.%s\n", RE, GR, toupper(c), RE, CR);
			printf("\n\n\n\n\n\n\n\n\n\n\n");
		}
		else
		{
			printf("\n\n\n\n\n");
			printf("\t\t\t\t\t=================================\n");
			printf("\t\t\t\t\t|%s	Comparison Results	%s|\n", BU, CR);
			printf("\t\t\t\t\t=================================\n");
			printf("\t\t\t\t\t|  %sft_toupper%s   |    %stoupper	%s|",
				BU, CR, BU, CR);
			printf("%s <-- ft_toupper() vs toupper() %s\n", YE, CR);
			printf("\t\t\t\t\t=================================\n");
			printf("\t\t\t\t\t|		|		|\n");
			printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
				BU, c, CR, BU, c, CR);
			printf("%s <-- The character input%s <lowercase char>%s.%s\n",
				YE, GR, YE, CR);
			printf("\t\t\t\t\t|		|		|\n");
			printf("\t\t\t\t\t|	%s\"%c\"%s	|	%s\"%c\"%s	|",
				GR, ft_toupper(c), CR, GR, toupper(c), CR);
			printf("%s <-- Results%s <UPPERCASE char>%s.%s\n", YE, GR, YE, CR);
			printf("\t\t\t\t\t|		|		|\n");
			printf("\t\t\t\t\t|	%s[%d]%s	|	%s[%d]%s	|",
				GR, ft_toupper(c), CR, GR, toupper(c), CR);
			printf("%s <-- The return value%s <ascii decimal value>%s.%s\n",
				YE, GR, YE, CR);
			printf("\t\t\t\t\t|               |               |\n");
			printf("\t\t\t\t\t=================================");
			printf("\n\n");
			printf("%stoupper():\n", GR);
			printf("\t%sDescription:\n", BU);
			printf("\t%sIf c is a lowercase letter, %stoupper() ", YE, GR);
			printf("%sreturns its uppercase equivalent, ", YE);
			printf("if a uppercase representation \n");
			printf("\texists in the current locale. ");
			printf("Otherwise, it returns %sc.\n\n", GR);
			printf("\t%sReturn Value:\n", BU);
			printf("\t%sThe value returned is that of the converted ", YE);
			printf("letter, or %sc%s if the conversion was not possible.",
				GR, YE);
			printf("\n\n\n");
		}
	}
	else
	{
		printf("\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n\t\t\t\t\t%sError: add a character after <%s%s%s%s%s>.%s\n",
			RE, CR, YE, argv[0], CR, RE, CR);
		printf("\t\t\t\t\t%sExample:%s\n\t\t\t\t\t%s\"$ %s c\"%s",
			BU, CR, YE, argv[0], CR);
		printf("\n\n\n\n\n\n\n\n\n\n\n");
	}
	return (0);
}
