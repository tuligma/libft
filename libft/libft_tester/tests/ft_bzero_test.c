/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/07 21:52:08 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

static void	print_ascii_value(char *s, size_t n)
{
	size_t	i;

	i = 0;
	printf("{ %s", BHGR);
	while (i < n)
	{
		printf("%d, ", s[i]);
		if (i == n - 1)
			printf("%d", s[i]);
		i++;
	}
	printf("%s }", CR);
}

void	ft_bzero_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*s;
	char					*s1;
	char					*s2;
	int						x;
	size_t					p;
	size_t					n;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	p = position(argv[1]);
	s = str_checker(argv[1]);
	s1 = strdup(s);
	s2 = strdup(s);
	n = atoi(argv[2]);
	ft_bzero(&s1[p], n);
	bzero(&s2[p], n);
	if (memcmp(s1, s2, n) == 0)
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	strcpy(s1, s);
	strcpy(s1, s);
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %zu]%s\" <- ",
			BHYE, s, n, CR);
		print_ascii_value(s, strlen(s));
		ft_bzero(&s1[p], n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_bzero : [%s] -> [%s]", s1, result);
		bzero(&s1[p], n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t bzero    : [%s]", s2);
		if (memcmp(s1, s2, n) == 0)
		{
			if (n <= strlen(s) + 1 && p <= strlen(s) + 1
				&& n <= ((strlen(s) + 1) - p))
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\"%s:"
					" returned as expected.%s\n\t\t\t\t\t\t\t ",
					IGR, BHYE, s, s1, IGR, CR);
				print_ascii_value(s1, strlen(s));
				x += 1;
			}
			else
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\":%s"
					" undefined behavior!!!"
					" \n\t\t\t\t\t%s -if the size is morethan"
					" the length of the string."
					" \n\t\t\t\t\t  *(with or without pointer arithmetic)."
					" \n\t\t\t\t\t  *(buffer overflow).%s \n\t\t\t\t\t\t\t ",
					IRE, BHYE, s, s1, IRE, YE, CR);
				print_ascii_value(s1, strlen(s));
				x += 3;
			}
		}
		else
		{
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%sThere is something"
				" wrong with your %s implementation!!%s\"",
				IRE, argv[0] + 2, CR);
		}
		free(s1);
		free(s2);
	}
	while (rows-- - x)
		printf("\n");
}
