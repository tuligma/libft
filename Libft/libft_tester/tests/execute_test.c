/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:49:01 by npentini          #+#    #+#             */
/*   Updated: 2023/07/06 14:54:32 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

void	execute_test(const char *test, int argc, char **argv)
{
	bool	test_found;
	int		cols;
	int		rows;
	int		i;
	static const t_test_entry	tests[] = {
	{"ft_isalnum", ft_isalnum_test},
	{"ft_isalpha", ft_isalpha_test},
	{"ft_isascii", ft_isascii_test},
	{"ft_isdigit", ft_isdigit_test},
	{"ft_isprint", ft_isprint_test},
	{"ft_tolower", ft_tolower_test},
	{"ft_toupper", ft_toupper_test},
	{"ft_strlen", ft_strlen_test},
	{"ft_memset", ft_memset_test},
	{"ft_memcpy", ft_memcpy_test},
	{"ft_bzero", ft_bzero_test},
	{"ft_memmove", ft_memmove_test},
	{"ft_strlcpy", ft_strlcpy_test},
	/*{"ft_strlcat", ft_strlcat_test},
	{"ft_strchr", ft_strchr_test},
	{"ft_strrchr", ft_strrchr_test},
	{"ft_strncmp", ft_strncmp_test},
	{"ft_memchr", ft_memchr_test},
	{"ft_memcmp", ft_memcmp_test},
	{"ft_strnstr", ft_strnstr_test},
	{"ft_strdup", ft_strdup_test},
	{"ft_atoi", ft_atoi_test},
	{"ft_calloc", ft_calloc_test},
	{"ft_substr", ft_substr_test},
	{"ft_strjoin", ft_strjoin_test},
	{"ft_strtrim", ft_strtrim_test},
	{"ft_split", ft_spit_test},
	{"ft_itoa", ft_itoa_test},
	{"ft_strmapi", ft_strmapi_test},
	{"ft_striteri", ft_striteri_test},
	{"ft_putchar_fd", ft_putchar_fd_test},
	{"ft_putstr_fd", ft_putstr_fd_test},
	{"ft_putendl_fd", ft_putendl_test},
	{"ft_putnbr_fd", ft_putnbr_test},
	{"ft_ft_lstnew", ft_lstnew_test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},
	{"ft_", ft__test},*/
	};

	cols = 0;
	rows = 0;
	test_found = false;
	i = 0;
	term_size(&cols, &rows);
	while (i < sizeof(tests) / sizeof(tests[0]) && !test_found)
	{	
		if (strcmp(test + 2, tests[i].test_name) == 0)
		{
			tests[i].test_function(cols, rows, argc, argv);
			test_found = true;
		}
		i++;
	}
	if (!test_found)
		printf("ERROR!: There is no available test for %s .", test + 2);
}
