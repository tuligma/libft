/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testutils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 02:52:46 by npentini          #+#    #+#             */
/*   Updated: 2023/07/04 23:25:15 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTUTILS_H
# define TESTUTILS_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <stdbool.h>

# include "mycolors.h"
# include "myformatter.h"
# include "libft.h"

# define L_TITLE "TEST INFORMATION"
# define L_FUNCTION "Function:\t "
# define L_PROTOTYPE "Prototype:\t "
# define L_DESCRIPTION "Description:\t "
# define L_RETURN "Return:\t "
# define L_INPUT "Input:\t "
# define L_RESULT "Result:\t "
# define L_EXPECTED "Expected:\t "
# define L_NOTES "Note:\t "
# define L_ERROR "ERROR:\t "
# define L_USAGE "Usage:\t"
# define L_RECOM "Input recommendation:\t "

const t_function_info	*get_function_info(const char *func_name);

void					execute_test(const char *test, int argc, char **argv);
void					display_test_info(const t_function_info *info);
void					display_error_info(const t_function_info *info);
void					ft_isalnum_test(int cols,
							int rows, int argc, char **argv);
void					ft_isalpha_test(int cols,
							int rows, int argc, char **argv);
void					ft_isascii_test(int cols,
							int rows, int argc, char **argv);
void					ft_isdigit_test(int cols,
							int rows, int argc, char **argv);
void					ft_isprint_test(int cols,
							int rows, int argc, char **argv);
void					ft_tolower_test(int cols,
							int rows, int argc, char **argv);
void					ft_toupper_test(int cols,
							int rows, int argc, char **argv);
void					ft_strlen_test(int cols,
							int rows, int argc, char **argv);
void					ft_memset_test(int cols,
							int rows, int argc, char **argv);
void					ft_memcpy_test(int cols,
							int rows, int argc, char **argv);
void					ft_bzero_test(int cols,
							int rows, int argc, char **argv);
void					ft_memmove_test(int cols,
							int rows, int argc, char **argv);
void					ft_strlcpy_test(int cols,
							int rows, int argc, char **argv);
void					ft_strlcat_test(int cols,
							int rows, int argc, char **argv);
void					ft_strchr_test(int cols,
							int rows, int argc, char **argv);
void					ft_strrchr_test(int cols,
							int rows, int argc, char **argv);
void					ft_strncmp_test(int cols,
							int rows, int argc, char **argv);
void					ft_memchr_test(int cols,
							int rows, int argc, char **argv);
void					ft_memcmp_test(int cols,
							int rows, int argc, char **argv);
void					ft_strnstr_test(int cols,
							int rows, int argc, char **argv);
void					ft_strdup_test(int cols,
							int rows, int argc, char **argv);
void					ft_atoi_test(int cols,
							int rows, int argc, char **argv);
void					ft_calloc_test(int cols,
							int rows, int argc, char **argv);

#endif
