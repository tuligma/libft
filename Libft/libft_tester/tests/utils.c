/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 05:56:15 by npentini          #+#    #+#             */
/*   Updated: 2023/07/05 01:56:40 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	move_cursor(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}

void	clear_screen(void)
{
	printf("\033[H\033[2J");
}

void	term_size(int *cols, int *rows)
{
	struct winsize	size;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
	*cols = size.ws_col;
	*rows = size.ws_row;
}

void	print_formatted(const char *format, va_list args)
{
	vprintf(format, args);
}

void	move_cursor_center(int cols, int rows, const char *format, ...)
{
	va_list	args;

	move_cursor(cols, rows);
	va_start(args, format);
	print_formatted(format, args);
	va_end(args);
}

char	*reset_dup(char **s, char *sdup)
{
	free(*s);
	*s = NULL;
	*s = strdup(sdup);
	return (*s);
}

char	*str_checker(char *str)
{
	int	i;
	int	plus_index;

	i = 0;
	plus_index = -1;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == ' ' && str[i + 2] == '+')
			|| (str[i + 1] == '+' && isdigit(str[i + 2])))
		{
			str[i + 1] = '\0';
			break ;
		}
		i++;
	}
	return (str);
}

char	position(char *str)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '+') && isdigit(str[i]))
		{
			p = atoi(&str[i]);
			break ;
		}
		i++;
	}
	return (p);
}
