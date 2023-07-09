/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/07 22:22:25 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_memset_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*s;
	char					*sdup;
	int						x;
	int						c;
	size_t					p;
	size_t					n;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	else if (argv[1] == NULL || (size_t)atoi(argv[3]) > strlen(argv[1]))
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	p = position(argv[1]);
	sdup = strdup(argv[1]);
	s = strdup(str_checker(sdup));
	c = argv[2][0];
	n = atoi(argv[3]);
	if ((ft_memset(&s[p], c, n) && memset(&s[p], c, n)))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	reset_dup(&s, sdup);
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %c, %zu]%s\" <- [%s%p%s]",
			BHYE, s, c, n, CR, BHGR, &argv[1], CR);
		ft_memset(&s[p], c, n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_memset : [%s] -> [%s]", s, result);
		reset_dup(&s, sdup);
		memset(&s[p], c, n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t memset    : [%s]", s);
		reset_dup(&s, sdup);
		if ((ft_memset(&s[p], c, n) && memset(&s[p], c, n)))
		{
			reset_dup(&s, sdup);
			if (n <= strlen(s) && p <= strlen(s) && n <= (strlen(s) - p))
			{
				ft_memset(&s[p], c, n);
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\"%s:"
					" returned as expected.%s",
					IGR, BHYE, sdup, s, IGR, CR);
			}
			else
			{
				ft_memset(&s[p], c, n);
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\":%s"
					" undefined behavior!!!"
					" \n\t\t\t\t\t%s -if the size is morethan"
					" the length of the string"
					" \n\t\t\t\t\t  *(with or without pointer arithmetic).%s",
					IRE, BHYE, sdup, s, IRE, YE, CR);
				x += 2;
			}
		}
		else
		{
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%sThere is something"
				" wrong with your %s implementation!!%s\"",
				IRE, argv[0] + 2, CR);
		}
		free(sdup);
		free(s);
	}
	while (rows-- - x)
		printf("\n");
}
