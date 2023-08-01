/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:50:23 by npentini          #+#    #+#             */
/*   Updated: 2023/07/31 09:04:05 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	on(char s, char c)
{
	if (s == c)
		return (0);
	else
		return (1);
}

static int	count_word(char const *s, char c)
{
	int	count_word;
	int	i;

	count_word = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (on(s[i], c))
		{
			count_word++;
			while (s[i] != '\0' && on(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (count_word);
}

static char	*ft_range(char const *s, size_t start, size_t end)
{
	char	*dest;
	size_t	i;
	size_t	size;

	size = end - start;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**splitter(char **dest, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (!on(s[i], c) && s[i] != '\0')
			i++;
		if (on(s[i], c) && s[i] != '\0')
		{
			start = i;
			while (on(s[i], c) && s[i] != '\0')
				i++;
			dest[j] = ft_range(s, start, i);
			if (dest[j] == NULL)
				return (NULL);
			j++;
		}
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	char	**arr;
	int		k;

	if (s == NULL)
		return (NULL);
	dest = (char **)malloc(sizeof(char *) * (count_word(s, c)));
	if (dest == NULL)
		return (NULL);
	arr = splitter(dest, s, c);
	if (arr == NULL)
	{
		k = 0;
		while (k < count_word(s, c))
		{
			free(arr[k]);
			k++;
		}
		free(arr);
		return (NULL);
	}
	return (arr);
}
