/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/04 02:39:47 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

static char	*reset_dup(char **s, char *sdup)
{
	free(*s);
	*s = NULL;
	*s = strdup(sdup);
	return (*s);
}

static char	*str_checker(char *str)
{
	int	i;
	int	plus_index;
	int	start_index;

	i = 0;
	plus_index = -1;
	while (str[i] != '\0')
	{
		if (str[i + 1] == ' ' && str[i + 2] == '+' )
		{
			str[i + 1] = '\0';
			break ;
		}
		i++;
	}
	return (str);
}

static char	position(char *str)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if (isdigit(str[i]))
		{
			p = atoi(&str[i]);
			break ;
		}
		i++;
	}
	return (p);
}

void	ft_memset_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*s;
	char					*sdup;
	int						x;
	int						c;
	int						p;
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
			if (n <= strlen(s) && n < (p - n))
			{
				ft_memset(&s[p], c, n);
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\"%s:"
					" returned as expected.%s",
					IGR, BHYE, sdup, s, IGR, CR);
			}
			else
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s -> %s\"%s:"
					" \n\t\t\t\t\t the %s has an undefined behavior"
					" \n\t\t\t\t\t if the size is morethan the length of the s.%s",
					IRE, BHYE, sdup, s, IRE, argv[0] + 2, CR);
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
