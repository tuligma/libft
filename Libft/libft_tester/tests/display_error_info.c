/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_error_info.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 05:42:41 by npentini          #+#    #+#             */
/*   Updated: 2023/06/30 13:36:28 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	display_error_info(const t_function_info *info)
{
	int	cols;
	int	rows;
	int	x;

	cols = 0;
	rows = 0;
	clear_screen();
	term_size(&cols, &rows);
	x = rows - ((rows / 5) * 2);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - ((rows / 5) * 4), "\t\t%s%s%s\a%s%s%s",
		BHRE, L_ERROR, CR, IYE, info->error, CR);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - ((rows / 5) * 3), "\t\t%s%s%s%s%s%s",
		BHRE, L_USAGE, CR, IYE, info->usage, CR);
	move_cursor_center(((cols - strlen(L_FUNCTION)) / 2) / 2,
		rows - ((rows / 5) * 2), "%s%s%s%s%s%s",
		BHRE, L_RECOM, CR, IYE, info->recom, CR);
	while (rows-- - x)
		printf("\n");
}
