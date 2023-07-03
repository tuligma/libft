/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/02 23:53:07 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

char	*reset_dup(char **s, char *sdup)
{
	free(*s);
	*s = NULL;
	*s = strdup(sdup);
	return (*s);
}

void	ft_memset_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*s;
	char					*sdup;
	int						x;
	int						c;
	size_t					n;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	sdup = strdup(argv[1]);
	s = strdup(sdup);
	c = argv[2][0];
	n = atoi(argv[3]);
	if ((ft_memset(s, c, n) && memset(s, c, n))
		|| (!ft_memset(s, c, n) && !memset(s, c, n)))
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
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_memset : [%s] -> [%s]", ft_memset(s, c, n), result);
		reset_dup(&s, sdup);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t memset    : [%s]", memset(s, c, n));
		reset_dup(&s, sdup);
		if ((ft_strlen(s) && strlen(s)) || (!strlen(s) && !strlen(s)))
		{
			reset_dup(&s, sdup);
			if (n <= strlen(s))
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\"%s:"
					" returned as expected.%s",
					IGR, BHYE, argv[1], ft_memset(s, c, n), IGR, CR);
			}
			else
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\"%s:"
					" \n\t\t\t\t\t the %s has an undefined behavior"
					" \n\t\t\t\t\t if the size is morethan the length of the s.%s",
					IRE, BHYE, argv[1],
					ft_memset(s, c, n), IRE, argv[0] + 2, CR);
				x += 2;
			}
		}
		else
		{
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%sThere is something"
				" wrong with your %s implementation!!%s\"", IRE, argv[0], CR);
		}
		free(sdup);
		free(s);
	}
	while (rows-- - x)
		printf("\n");
}
