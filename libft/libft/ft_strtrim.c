/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:23:17 by npentini          #+#    #+#             */
/*   Updated: 2023/07/17 00:36:20 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strtrim
	*	Header:			libft.h
	*	Prototype:		char	*ft_strtrim(char const *s1, char const *set)
	*	Parameters:		s (char const *):	The string to be trimmed.
	*					set (char const *):	A set of characters to be trimmed from
	*					the beginning and end of 's1'.	
	*	Description:	This function trims the specified set of characters from the
	*					beginning and end of input string 's1'. The newly created string
	*					with the unwanted characters removed. Memory for the new string
	*					is allocated with 'malloc, so the caller is responsible for
	*					freeing it.
	*	Return:			A pointer to a newly  created string with leading and trailing
	*					characters from 'set' removed. Returns NULL if memory allocation
	*					fails or if 's1'  is a NULL pointer.
	*	Walkthrough:
	*					1.	The function takes the input string 's1' and 'set'.
	*					2.	It checks if either 's1' or 'set' is a NULL pointer,
	*						if either is NULL, it returns NULL.
	*					3.	The variable start is initialized to 0 and end to the length
	*						of 's1 - 1'.
	*					4.	The function enters a while loop to move the 'start' index
	*						inward while the characters at that position match any
	*						characters in 'set'.
	*					5.	Another while loop is used to move the 'end' index inward
	*						while the characters at that position match any characters
	*						in 'set'.
	*					6.	Memory is allocated for new string using 'ft_substr' taking
	*						into account the trimmed 'start' and end indices.
	*					7.	The pointer to the newly created string is returned.
	*					
	*	Summary:
	*					The ft_strtrim function trims specified characters from the
	*					beginning and end of string, creating a new string with the
	*					unwanted characters removed. The function performs input
	*					validation and memory allocation.
 	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char const *s1 = "	\tHello, World!\n";
	*						char const	*set = "\t\n";
	*						char *result;
	*
	*						result = ft_strtrim(s1, set);
	*						if (result)
	*							printf("Trimmed string: %s\n", result);
	*						else
	*							printf("String trimming failed (NULL result).\n");
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if either 's1' or
	*							'set' is uninitialized.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end]))
		end--;
	trim_str = ft_substr(s1, start, (end - start) + 1);
	return (trim_str);
}
