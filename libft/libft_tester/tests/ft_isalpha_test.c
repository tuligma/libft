/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:45:28 by npentini          #+#    #+#             */
/*   Updated: 2023/07/07 21:53:44 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	ft_isalpha_test(int cols, int rows, int argc, char **argv)
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
	if (strlen(argv[1]) == 1)
		c = argv[1][0];
	else if (strlen(argv[1]) > 1 && (isdigit(argv[1][0]) || atoi(argv[1]) < 0))
		c = atoi(argv[1]);
	else if (strlen(argv[1]) > 1 && isalpha(argv[1][1]))
		c = argv[1][0];
	else
		c = argv[1][0];
	if ((ft_isalpha(c) && isalpha(c)) || (!ft_isalpha(c) && !isalpha(c)))
		result = "\e[1;92mOK\e[0m";
	else
		result = "\e[1;91mKO\e[0m";
	if (argc == 2)
	{
		display_test_info(info);
		if (c >= '\t' && c <= '\r')
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%s\\t - \\r%s\":",
				BHYE, CR);
		else
			move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
				rows - (rows - (x += 2)), "\t\t \"%s%c%s\"", BHYE, c, CR);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)),
			"\t\t ft_isalpha : [%d] -> [%s]", ft_isalpha(c), result);
		move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
			rows - (rows - (x += 2)), "\t\t isalpha    : [%d]", isalpha(c));
		if ((ft_isalpha(c) && isalpha(c)) || (!ft_isalpha(c) && !isalpha(c))
			|| (c < 0))
		{
			if (ft_isalpha(c))
			{
				move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
					rows - (rows - (x += 2)), "\t\t %s\"%s%c%s\":"
					" is an alphabet character.%s", IGR, BHYE, c, IGR, CR);
			}
			else
			{
				if (c >= '\t' && c <= '\r')
					move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
						rows - (rows - (x += 2)), "\t\t %s\"%s\\t - \\r%s\":"
						" is not an alphabet character.%s", IRE, BHYE, IRE, CR);
				else
					move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
						rows - (rows - (x += 2)), "\t\t %s\"%s%c%s\":"
						" is not an alphabet character.%s",
						IRE, BHYE, c, IRE, CR);
			}
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
