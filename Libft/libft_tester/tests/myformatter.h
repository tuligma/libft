/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myformatter.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 00:08:39 by npentini          #+#    #+#             */
/*   Updated: 2023/07/04 23:14:30 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFORMATTER_H
# define MYFORMATTER_H

# include <unistd.h>
# include <sys/ioctl.h>
# include <termios.h>
# include <stdio.h>
# include <stdarg.h>
# include <stddef.h>

char	*reset_dup(char **s, char *sdup);
char	*str_checker(char *str);
char	position(char *str);
void	move_cursor(int x, int y);
void	clear_screen(void);
void	term_size(int *cols, int *rows);
void	print_formatted(const char *format, va_list args);
void	move_cursor_center(int cols, int rows, const char *format, ...);

typedef struct function_info
{
	const char	*name;
	const char	*prototype;
	const char	*description;
	const char	*return_value;
	const char	*arguments;
	const char	*error;
	const char	*usage;
	const char	*recom;
}	t_function_info;

typedef struct test_info
{
	const char	*test_name;
	void		(*test_function)(int cols, int row, int argc, char **argv);
}	t_test_entry;

#endif
