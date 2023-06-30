/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_test_info.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 05:42:41 by npentini          #+#    #+#             */
/*   Updated: 2023/06/27 20:53:11 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	display_test_info(const t_function_info *info)
{
	int	cols;
	int	rows;
	int	x;

	cols = 0;
	rows = 0;
	x = 2;
	clear_screen();
	term_size(&cols, &rows);
	move_cursor_center((cols - strlen(L_TITLE)) / 2,
		rows - (rows - x), "%s", L_TITLE);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 3)), "%s%s", L_FUNCTION, info->name);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s%s", L_PROTOTYPE, info->prototype);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s%s%s%s", L_DESCRIPTION,
		IYE, info->description, CR);
	if (strlen(info->description) > 75)
		x++;
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s%s%s%s", L_RETURN,
		IGR, info->return_value, CR);
	if (strlen(info->return_value) > 75)
		x++;
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s", L_INPUT);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s", L_RESULT);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s", L_EXPECTED);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - (rows - (x += 2)), "%s", L_NOTES);
	while (rows-- - x)
		printf("\n");
}
