/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:50:23 by npentini          #+#    #+#             */
/*   Updated: 2023/09/29 17:59:19 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_split
	*	Header:     	libft.h
	*	Prototype:  	char	**ft_split(char const *s, char c);
	*	Parameters: 	s (char const *):	The string to split.
	*	            	c (char):		The character used as the delimiter.
	*	Description:	This function splits a string 's' into an array of substrings
	*	            	using the specified delimiter 'c'. Memory is allocated for the
	*	            	array and the substring, which must be freed by the caller.
	*	Return:     	A pointer to an array of strings representing the substrings
	*	            	in 's'. Returns NULL if memory allocation fails or if 's' is a
	*	            	NULL pointer.
	*	External Functions:
	*	            	1.	malloc
	*	            	2.	ft_calloc
	*	Walkthrough:
	*	            	1.	The function takes an input string 's' and delimiter
	*	            		character 'c'.
	*	            	2.	It checks if 's' is a NULL pointer, if so it returns
	*	            		NULL. (indicating that the string 's' is an invalid
	*	            		input).
	*	            	3.	It counts the number of substrings in 's' using
	*	            		'count_word' function.
	*	            	4.	Memory is allocated for the array of strings 'dest'
	*	            		using 'ft_calloc' function.
	*	            	5.	The 'splitter' function is called to populate 'dest' with
	*	            		substrings.
	*	            	6.	'splitter' process 's' and splits it into substrings,
	*	            		allocating memory for each substring using 'ft_range'.
	*	            	7.	The resulting array 'dest' is returned.
	*
	*	            	'count_word' Function:
	*
	*	            	Count the number of substrings in the input string.
	*
	*	            	Steps in 'count_word':
	*	            	1.	Initialize 'count_word' to 1 and 'i' to 0.
	*	            	2.	Iterate through 's':
	*	            		-	If the character at 's[i]' is not equal to 'c'
	*	            			increment 'count_word' and move 'i' to the end
	*	            			of the current word.
	*	            		-	Otherwise, increment 'i' to skip the delimiter.
	*	            	3.	Return 'count_word' as the number of substrings.
	* 
	*	            	'ft_range' Function:
	*
	*	            	Creates a substring from the input string based on the provided
	*	            	start and end indices.
	*
	*	            	Steps in 'ft_range':
	*	            	1.	Allocated memory fro the substring 'dest' based on the
	*	            		difference between 'end' and 'start plus 1 to account for
	*	            		the null terminator.
	*	            	2.	Copy characters from  's' at indices 'start' to 'end'
	*	            		(excluding 'end') to dest.
	*	            	3.	Null-terminate 'dest'.
	*	            	4.	Return 'dest' as the substring.
	*
	*	            	'free_me' Function:
	*
	*	            	Frees the memory allocated for the array of strings and
	*	            	substrings.
	*
	*	            	Steps in 'free_me':
	*	            	1.	Iterates through the array of strings 'dest':
	*	            		-	If 'dest[k]' is not NULL, free 'dest[k]'
	*	            	2.	Free the entire array 'dest'.
	*	            	3.	Return NULL.
	*
	*	            	'splitter' Function:
	*
	*	            	Splits the input string into substring and populates the array
	*	            	'dest'.
	*
	*	            	Steps in 'splitter':
	*	            	1.	Initialize 'i' and 'j' to 0 and 'start' to 0.
	*	            	2.	Iterate through 's'.
	*	            		-	Skip leading delimiters
	*	            		-	If non-delimiter character is encountered, set 'start'
	*	            			to 'i'
	*	            		-	Continue to the end of the current word.
	*	            		-	Create a substring using 'ft_range' and store it in
	*	            			'dest[j]'.
	*	            		-	If memory allocation fails, free the previously allocated
	*	            			memory using 'free_me'.
	*	            	3.	It will continue till 's' the end of string has been processed.
	*	            	4.	NULL-terminate 'dest[j]' and return 'dest'.
	*					
	*	Summary:
	*	            	The ft_split function splits a string into substrings using a
	*	            	specified delimiter and returns an array of strings. It handles
	*	            	memory allocation and provides function to count words, create
	*	            	substring and handle clean up. The caller of this function is
	*	            	responsible for freeing the allocated memory.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		char const *s = "Hello,World,Libft";
	*	            		char	c = ',';
	*	            		char **result;
	*	            		int		i;
	*
	*	            		result = ft_split(s, c);
	*	            		if (result)
	*	            		{
	*	            			i = 0;
	*	            			while (result[])
	*	            			{
	*	            				printf("Substring %d: %s\n", i, result);
	*	            				free(result);
	*	            				i++;
	*	            			}
	*	            		}
	*	            		else
	*	            			printf("Splitting failed (NULL result).\n");
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	1.	Segmentation Fault (SIGSEGV): Occurs if 's' is 
	*	            		uninitialized.
	*	            	2.	Conditional Jump : Occurs if 'c' is uninitialized 
	*	            		this can lead to unexpected result and memory
	*	            		issues.
	*	Notes:
	*	            	The function caller is responsible for freeing the memory
	*	            	allocated after using this function.
*/

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count_word;
	int	i;

	count_word = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count_word++;
			while (s[i] && s[i] != c)
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

	dest = malloc(sizeof(char) * ((end - start) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (start < end)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

static char	**free_me(char **dest, char const *s, char c)
{
	int	k;

	k = 0;
	while (k < count_word(s, c))
	{
		if (dest[k])
			free(dest[k]);
		k++;
	}
	free(dest);
	return (NULL);
}

static char	**splitter(char **dest, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			dest[j] = ft_range(s, start, i);
			if (dest[j] == NULL)
				return (free_me(dest, s, c));
			j++;
		}
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = ft_calloc(count_word(s, c), sizeof(char *));
	if (!dest)
		return (NULL);
	return (splitter(dest, s, c));
}
