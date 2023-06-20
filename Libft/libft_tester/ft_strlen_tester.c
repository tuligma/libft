/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:29:57 by npentini          #+#    #+#             */
/*   Updated: 2023/06/20 11:25:31 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

int	main(int argc, char **argv)
{
	const char	*s;
	size_t		user;
	size_t		native;

	if (argc == 2)
	{
		s = argv[1];
		user = ft_strlen(s);
		native = strlen(s);
		printf("\n\n\n");
		if (native != user)
		{
			printf("\t\t\t\t\t\t+:+:+:+:+:+:+:+:+:+\n");
			printf("\t\t\t\t\t\t:%sComparison Result%s:\n", RE, CR);
			printf("\t\t\t\t\t\t+:+:+:+:+:+:+:+:+:+\n\n\n\n");
			printf("\t\t\t\t\t%sINPUT STRING:	\"%s%s%s\"\n\n", YE, RE, s, YE);
			printf("\t\t\t\t\t%sFT_STRLEN():	[%s%zu%s]", YE, RE, user, YE);
			printf("%s <-- ERROR: The result is not the ", RE);
			printf("same as expected.\n\n");
		}
		else
		{
			printf("\t\t\t\t\t\t+:+:+:+:+:+:+:+:+:+\n");
			printf("\t\t\t\t\t\t:%sComparison Result%s:\n", GR, CR);
			printf("\t\t\t\t\t\t+:+:+:+:+:+:+:+:+:+\n\n\n\n");
			printf("\t\t\t\t\t%sINPUT STRING:	\"%s%s%s\"\n\n", YE, GR, s, YE);
			printf("\t\t\t\t\t%sFT_STRLEN():	[%s%zu%s]", YE, GR, user, YE);
			printf("%s <--%s Your Result.\n\n", YE, GR);
		}
		printf("\t\t\t\t\t%sSTRLEN():	[%s%zu%s]", YE, GR, native, YE);
		printf("%s <--%s Expected Result.\n\n", YE, GR);
		printf("\n\n%sstrlen():\n", YE);
		printf("\t%sDescription:\n", BU);
		printf("\t%sThe %sstrlen()%s function calculates ", YE, GR, YE);
		printf("the length of the string pointed to by %ss%s, ", GR, YE);
		printf("excluding the terminating null \n\tbyte (%s\'\\0\'%s).\n\n", GR, YE);
		printf("\t%sReturn Value:\n", BU);
		printf("\t%sThe %sstrlen()%s function returns the number ", YE, GR, YE);
		printf("of bytes in the string pointed to by %ss%s.", GR, YE);
		printf("\n\n\n");
	}
	else
	{
		printf("\n\n\n\n\n\n\n\n\n\n");
		printf("\n\t\t\t\t\t%sError: add a string after <%s%s%s>.%s\n\n",
			RE, YE, argv[0], RE, CR);
		printf("\t\t\t\t\t%sExample: %s$ %s \"%sHello, World!%s\"\n\n",
			RE, YE, argv[0], GR, YE);
		printf("\n\n\n\n\n\n\n\n\n\n");
	}
	return (0);
}
