/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 04:03:49 by npentini          #+#    #+#             */
/*   Updated: 2023/06/30 04:03:56 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_isalnum_test(int cols, int rows, int argc, char **argv)
{
	const t_function_info	*info;
	char					*result;
	int						c;
	int						x;

	info = get_function_info(argv[0]);
	if (argc != atoi(info->arguments)
		|| info == NULL || info->arguments == NULL)
	{
		display_error_info(info);
		return ;
	}
	x = 12;
	c = argv[1][0];
	if ((ft_isalnum(c) && isalnum(c)) || (!ft_isalnum(c) && !isalnum(c)))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	if (argc == 2)
	{
		display_test_info(info);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t \"%s%c%s\"", BHYE, c, CR);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_isalnum : [%d] -> [%s]", ft_isalnum(c), result);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t isalnum    : [%d]", isalnum(c));
		if ((ft_isalnum(c) && isalnum(c)) || (!ft_isalnum(c) && !isalnum(c)))
		{
			if (ft_isalnum(c))
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%c%s\":"
					" is an alphanumeric character.%s", IGR, BHYE, c, IGR, CR);
			}
			else
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%c%s\":"
					" is not an alphanumeric character.%s",
					IRE, BHYE, c, IRE, CR);
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
