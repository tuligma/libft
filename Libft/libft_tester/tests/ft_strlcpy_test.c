/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/07 18:32:08 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_strlcpy_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*src;
	char					*dest1;
	char					*dest2;
	int						x;
	int						p;
	size_t					size;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	p = position(argv[2]);
	src = str_checker(argv[2]);
	dest1 = malloc(sizeof(char *) * atoi(argv[1]));
	dest2 = malloc(sizeof(char *) * atoi(argv[1]));
	if (dest1 == NULL || dest2 == NULL)
		return ;
	size = atoi(argv[3]);
	if (ft_strlcpy(dest1, &src[p], size) == strlcpy(dest2, &src[p], size))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	bzero(dest1, strlen(dest1));
	bzero(dest2, strlen(dest1));
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %s, %zu]%s\" <- [%s%p%s]",
			BHYE, argv[1], src, size, CR, IGR, &argv[2], CR);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_strlcpy : [%zu]-[%s] -> [%s]",
			ft_strlcpy(dest1, &src[p], size), dest1, result);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t strlcpy    : [%zu]-[%s]",
			strlcpy(dest2, &src[p], size), dest2);
		if (memcmp(dest1, dest2, size) == 0)
		{
			if (p + size <= strlen(src) + 1 && p <= strlen(src) + 1)
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s-[%zu]%s:"
					" returned as expected.%s\n\t\t\t\t\t",
					IGR, BHYE, src, dest1,
					ft_strlcpy(dest1, &src[p], size), IGR, CR);
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
					IRE, BHYE, src, dest1, IRE, YE, CR);
				x += 4;
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
