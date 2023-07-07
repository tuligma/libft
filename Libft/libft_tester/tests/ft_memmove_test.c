/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/06 14:26:17 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_memmove_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*src;
	char					*dest1;
	char					*dest2;
	int						x;
	int						p;
	int						p1;
	size_t					n;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	p = position(argv[2]);
	p1 = position(argv[1]);
	src = str_checker(argv[2]);
	dest1 = strdup(src);
	dest2 = strdup(src);
	n = atoi(argv[3]);
	ft_memmove(&dest1[p1], &src[p], n);
	memmove(&dest2[p1], &src[p], n);
	if (memcmp(dest1, dest2, n) == 0)
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	strcpy(dest1, src);
	strcpy(dest2, src);
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %s, %zu]%s\" <- [%s%p%s]",
			BHYE, argv[1], src, n, CR, IGR, &argv[2], CR);
		ft_memmove(&dest1[p1], &src[p], n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_memmove : [%s] -> [%s]", dest1, result);
		memmove(&dest2[p1], &src[p], n);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t bzero      : [%s]", dest2);
		if (memcmp(dest1, dest2, n) == 0)
		{
			if (p + n <= strlen(src) + 1 && p <= strlen(src) + 1)
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\"%s:"
					" returned as expected.%s\n\t\t\t\t\t",
					IGR, BHYE, src, dest1, IGR, CR);
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
					IRE, BHYE, src, dest1, IRE, YE, CR);
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
		free(dest1);
		free(dest2);
	}
	while (rows-- - x)
		printf("\n");
}
