/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:34:49 by npentini          #+#    #+#             */
/*   Updated: 2023/06/05 03:46:54 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countw(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**alloc_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (ft_countw(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

static void	f_split(char **arr, int x)
{
	while (x > 0)
	{
		free(arr[x]);
		x--;
	}
	free(arr);
}

static void	set_arr(const char *s, char c, char **arr, int i)
{
	int	x;
	int	min;

	x = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			min = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			arr[x] = ft_substr(s, min, i - min);
			if (arr[x] == NULL)
			{
				f_split(arr, x);
				return ;
			}
			x++;
		}
		else
			i++;
	}
	arr[x] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	arr = alloc_split(s, c);
	if (arr == NULL)
		return (NULL);
	set_arr(s, c, arr, i);
	return (arr);
}
