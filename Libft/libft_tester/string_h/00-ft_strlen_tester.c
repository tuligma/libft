/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00-ft_strlen_tester.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:29:57 by npentini          #+#    #+#             */
/*   Updated: 2023/06/14 00:29:04 by npentini         ###   ########.fr       */
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
		printf("\n");
		printf("%sInput String:%s %s\"%s\"%s\n\n", YE, CR, BU, s, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("+	Comparison Results	+\n");
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		printf("+	%sft_strlen%s vs %sstrlen%s	+", BU, CR, BU, CR);
		printf("%s<-- ft_strlen() vs strlen() %s\n", YE, CR);
		printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
		if (user == native)
		{
			printf("|		|		|\n");
			printf("|	%s[%zu]%s	|	%s[%zu]%s	|",
				GR, user, CR, GR, native, CR);
			printf("%s<-- the return value should be the same.%s\n", YE, CR);
			printf("|		|		|\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s  expected result should equal.%s\n", GR, CR);
			printf("\n");
		}
		else
		{
			printf("|		|		|\n");
			printf("|%s		[ERROR]		%s|\n", RE, CR);
			printf("|%s	Result: %zu vs %zu	%s|\n", RE, user, native, CR);
			printf("|		|		|\n");
			printf("+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+:+\n");
			printf("%s  expected result should equal. %s\n", RE, CR);
			printf("\n");
		}
	}
	else
		printf("Usage: ./program \"string\"\n");
	return (0);
}
