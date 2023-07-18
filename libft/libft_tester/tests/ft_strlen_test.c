/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:27:57 by npentini          #+#    #+#             */
/*   Updated: 2023/07/02 15:31:42 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_strlen_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	const char				*s;
	int						x;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 11;
	s = argv[1];
	if ((ft_strlen(s) && strlen(s)) || (!ft_strlen(s) && !strlen(s)))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	if (argc == 2)
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t \"%s%s%s\"", BHYE, s, CR);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_strlen : [%d] -> [%s]", ft_strlen(s), result);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t strlen    : [%d]", strlen(s));
		if ((ft_strlen(s) && strlen(s)) || (!strlen(s) && !strlen(s)))
		{
			if (ft_strlen(s))
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%d%s\":"
					" return the total number of characters in the string.%s",
					IGR, BHYE, ft_strlen(s), IGR, CR);
			}
			else
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%s%s\":"
					" returned nothing.%s",
					IRE, BHYE, s, IRE, CR);
		}
		else
		{
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%sThere is something"
				" wrong with your %s implementation!!%s\"", IRE, argv[0], CR);
		}
	}
	while (rows-- - x)
		printf("\n");
}
