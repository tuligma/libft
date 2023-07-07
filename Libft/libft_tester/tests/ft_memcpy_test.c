/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/05 02:23:43 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_memcpy_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	char					*src;
	int						dest_size;
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
	else if (argv[1] == NULL || atoi(argv[3]) > strlen(argv[2]))
	{
		display_error_info(info);
		return ;
	}
	x = 10;
	dest_size = atoi(argv[1]);
	char	dest[dest_size];
	p = position(argv[2]);
	src = str_checker(argv[2]);
	n = atoi(argv[3]);
	if ((ft_memcpy(dest, &src[p], n) && memcpy(dest, &src[p], n)))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	if (argc == atoi(info->arguments))
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 3)), "\t\t \"%s[%s, %s, %zu]%s\" <- [%s%p%s]",
			BHYE, argv[1], argv[2], n, CR, BHGR, &argv[2], CR);
		ft_memcpy(dest, &src[p], n);
		dest[n] = '\0';
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_memcpy : [%s] -> [%s]", dest, result);
		memset(dest, 0, dest_size);
		memcpy(dest, &src[p], n);
		dest[n] = '\0';
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t memcpy    : [%s]", dest);
		if ((ft_memcpy(dest, &src[p], n) && ft_memcpy(dest, &src[p], n)))
		{
			memset(dest, 0, dest_size);
			if (n <= strlen(src) && p <= strlen(src) && n <= (strlen(src) - p)
				&& n <= dest_size)
			{
				ft_memcpy(dest, &src[p], n);
				dest[n] = '\0';
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\"%s:"
					" returned as expected.%s",
					IGR, BHYE, src, dest, IGR, CR);
			}
			else
			{
				memcpy(dest, &src[p], n);
				dest[n] = '\0';
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s\" -> %s\":%s"
					" undefined behavior!!!"
					" \n\t\t\t\t\t%s -if the size is morethan"
					" the size of the dest size or length of src."
					" \n\t\t\t\t\t  *(with or without pointer arithmetic)."
					" \n\t\t\t\t\t  *(buffer overflow).%s",
					IRE, BHYE, src, dest, IRE, YE, CR);
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
	}
	while (rows-- - x)
		printf("\n");
}
