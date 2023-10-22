/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:24:43 by npentini          #+#    #+#             */
/*   Updated: 2023/09/24 17:21:57 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strjoin
	*	Header:			libft.h
	*	Prototype:		char *ft_strjoin(char const *s1, char const *s2)
	*	Parameters:		s1 (char const *):	The first null-terminated strings to be
	*										concatenated.
	*					s2 (char const *):	The second null-terminated strings to be
	*										concatenated.
	*	Description:	This function concatenates two null-terminated strings, 's1'
	*					and 's2', by allocating memory  for a new string that combines
	*					the contents of both strings. The newly created string contains
	*					the characters if 's1' followed by the characters of 's2' and
	*					is null-terminated.
	*	Return:			A pointer to a newly created null-terminated string containing
	*					the concatenated contents of 's1' and 's2'. Returns NULL if 
	*					memory allocation fails or if either 's1' or 's2' is a NULL
	*					pointer.
	*	Walkthrough:
	*					1.	The function takes two input strings, 's1' and 's2', as
	*						parameters.
	*					2.	It checks if either 's1' or 's2' is a NULL pointer, and if
	*						so it returns NULL to indicate an invalid input.
	*					3.	The lengths of 's1' and 's2' are calculated using the
	*						'ft_strlen' function and assigned to variables 's1_len'
	*						and 's2_len'.
	*					4.	Memory is allocation for new string with a size of
	*						's1_len + s2_len + 1' to account for the null terminator
	*						and assign to variable 'dest'.
	*					5.	If memory allocation fails (indicating by a NULL return
	*						from 'malloc'), the function returns NULL.
	*					6.	An index variable 'i' is initialized to -1 and incremented
	*						to start copying the characters from 's1' to 'dest'.
	*					7.	A loop is used to copy each character from 's1' to the
	*						corresponding position in the newly allocated memory
	*						'dest'.
	*					8.	Another loop is used to copy the characters from 's2' to
	*						the remaining positions in 'dest' after the 's1' characters.
	*					9.	The null terminator is added at the end of the concatenated
	*						string to make it a valid C string.
	*					10.	The pointer to the newly created string 'dest' is returned.
	*					
	*	Summary:
	*					The ft_strjoin function concatenates two null-terminated strings.
	*					's1' and 's2', by allocating memory for a new string and copying
	*					the contents of both strings into the newly created memory.
	*					The function performs checks for memory allocation and handles
	*					the concatenation process.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char const *s1 = "Hello, ";
	*						char const *s2 = "World!"
	*						char *result;
	*
	*						result = ft_strjoin(s1, s2)
	*						if (result)
	*							printf("Concatenated string: %s\n", result)
	*						else
	*							printf("Concatenation failed (NULL result).\n")
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if either 's1' 
	*							or 's2' is uninitialized.
	*	Notes:
	*						The function caller is responsible for freeing the memory
	*						allocated after using this function.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < s1_len)
		dest[i] = s1[i];
	while (i < s1_len + s2_len)
	{
		dest[i] = s2[i - s1_len];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
