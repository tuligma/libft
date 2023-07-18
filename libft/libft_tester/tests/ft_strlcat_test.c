/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:02:54 by npentini          #+#    #+#             */
/*   Updated: 2023/07/09 19:27:22 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"
#include <string.h>

void	ft_strlcat_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*src;
	char					*dest1;
	char					*dest2;
	int						x;
	size_t					p;
	size_t					size;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	dest1 = malloc(sizeof(char *) * atoi(argv[1]));
	dest2 = malloc(sizeof(char *) * atoi(argv[1]));
	if (dest1 == NULL || dest2 == NULL)
		return ;
	strncpy(dest1, argv[2], strlen(argv[2]) + 1);
	strncpy(dest2, argv[2], strlen(argv[2]) + 1);
	p = position(argv[3]);
	src = str_checker(argv[3]);
	size = atoi(argv[4]);
	if (ft_strlcat(dest1, &src[p], size) == strlcat(dest2, &src[p], size))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	strcpy(dest1, argv[2]);
	strcpy(dest2, argv[2]);
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %s, %s, %zu]%s\" <- [%s%p%s]",
			BHYE, argv[1], argv[2], src, size, CR, IGR, &argv[2], CR);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_strlcat : [%zu]-[%s] -> [%s]",
			ft_strlcat(dest1, &src[p], size), dest1, result);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t strlcat    : [%zu]-[%s]",
			strlcat(dest2, &src[p], size), dest2);
		if (memcmp(dest1, dest2, size) == 0)
		{
			bzero(dest1, atoi(argv[1]));
			strcpy(dest1, argv[2]);
			if ((size_t)atoi(argv[1]) >= strlen(src) + 1
				&& p <= strlen(src) + 1)
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> [%zu]-%s%s:"
					" returned as expected.%s\n\t\t\t\t\t",
					IGR, BHYE, src,
					ft_strlcat(dest1, &src[p], size), dest1, IGR, CR);
				x += 1;
			}
			else
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\":%s"
					" undefined behavior!!!"
					" \n\t\t\t\t\t%s -if the size is morethan"
					" the length of the string."
					" \n\t\t\t\t\t  *(with orpointer arithmetic)."
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
