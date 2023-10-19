/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:53:57 by npentini          #+#    #+#             */
/*   Updated: 2023/06/04 13:58:02 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strncmp
	*	Header:			libft.h
	*	Prototype:		int	ft_strcmp(const char *s1, const char *s2,  size_t size)
	*	Parameters:		s1 (const char *):	The first null-terminated string to compare.
	*					s2 (const char *):	The second null-terminated string to compare.
	*					size (size_t):		The maximum number of character to compare.
	*	Description:	This function compares up to 'size' characters from null-
	*					terminated strings 's1' and 's2' and returns an integer
	*					representing the difference of thier ASCII decimal values.
	*	Return:			
	*					- 	Zero if 's1' is equal to 's2' within the first 'size'
	*						characters.
	*					-	A negative integer if 's1' is less than 's2'.
	*					-	A positive integer if 's1' is greater than 's2'.
	*	Walkthrough:
	*					1.	The function takes rwo null-terminated strings 's1' and 's2'
	*						and the maximum number of characters to compare 'size' as
	*						input.
	*					2.	It iterates through the strings while there are characters
	*						left to compare within the specified 'size' and until it
	*						reaches the end of either 's1' or 's2'.
	*					3.	In each iteration, it compares the characters at the current
	*						position of 's1' and 's2.
	*					4.	If the characters are not equal, it returns the difference
	*						between the unsigned values of those characters
	*						(to handle negative values).
	*					5.	If all characters are compared without finding any difference,
	*						it returns 0 to indicate that the strings are equal.
	*	Summary:
	*					The ft_strncmp function compares up to 'size' characters of two
	*					null-terminated strings 's1' and 's2' and returns an integer
	*					representing the difference of their ASCII decimal value.
	*					It is commonly used for comparing strings with a limit.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						const char *s1 = "Hello";
	*						const char *s2 = "World";
	*						int result;
	*
	*						result = ft_strncmp(s1, s2, 5);
	*						printf("The difference of s1 to s2 is %i\n", result);
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if  either 's1'
	*							or 's2' is a NULL pointer.
	*						2.	Heap-Use-After-Free: Occurs if either 's1' or 's2'
	*							is uninitialized, resulting in an attempt to access
	*							memory in the heap that has been freed. This can lead
	*							to unpredictable behavior and crashes.
	*						3.	Unexpected Results. If the 'size' argument is a negative
	*							number, the function may produce unexpected results.
	*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	while (size-- > 0 && (*s1 || *s2))
	{
		if (*s1 > *s2 || *s1 < *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
