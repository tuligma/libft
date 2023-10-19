/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:58:26 by npentini          #+#    #+#             */
/*   Updated: 2023/06/04 17:21:42 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strrchr
	*	Header:			libft.h
	*	Prototype:		char	*ft_strrchr(const char *s, int c)
	*	Parameters:		s (const char *):	The string to be searched.
	*					c (int):			The character to search in the string.
	*	Description:	This function locates the last occurrence of character 'c'
	*					(interpreted as an unsigned char) in the string 's',
	*					searching from the end of the string toward the beginning.
	*	Return:			A pointer to the last occurrence of character 'c' in the
	*					string, or NULL if the character 'c' is not found.
	*	Walkthrough:
	*					1.	The function takes a string 's' and an integer 'c' as input.
	*					2.	It calculates the length of the string 's' using ft_strlen
	*						and assigns it to the variable 'n'.
	*					3.	The variable 'str' is initialized as a pointer to the
	*						beginning of the string 's'. This cast (char *)s is used
	*						to indicate that 'str' is of type 'char *' and allows us
	*						to work with the characters in the string while iterating,
	*						providing flexibility and respecting the immutability of
	*						the original input 's'.
	*					4.	If 'c' is the null terminator ('\0'), the function returns
	*						a pointer to the null terminator at the end of the string
	*						by pointer arithmetic, effectively indicating the end of
	*						the string.
	*					5.	If 'c' is not the null terminator, the function enters a
	*						loop that iterates in reverse order through string.
	*					6. 	If a match is found, the function returns the pointer to 
	*						the found character in string. Effectively pointing to the
	*						last occurence of the character within the string.
	*					7. 	If no match is found, the loop continues to iterate in
	*						in reverse order, moving backwards through the string
	*						'n' times.
	*					8.	If the loop reaches the beginning of the string without
	*						finding a matching character, the function returns NULL,
	*						indicating that the character 'c' was not found in the
	*						string. 
	*	Summary:
	*					The ft_strrchr function searches for the last occurrence of
	*					character 'c' in the given string 's' by searching from the
	*					end of the string toward the beginning and returns a pointer
	*					to the first occurence (backwards) of 'c' in the string or
	*					NULL if 'c' is not found.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						const char *str = "Hello, World!";
	*						int	c = 'o';
	*						char	*result;
	*
	*						result = ft_strchr(str, c);
	*						if (result)
	*							printf("Char '%c' at index %ld -> %s\n", c,result - s, result);
	*						else
	*							printf("'%c' not found in the first 13 bytes\n", target);
	*                    return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if the input string 's' is a 
	*							NULL pointer. If string 's' is uninitialized or both 's' and 'c'
	*							are uninitialized it leads to Segmentation fault.
	*						3.	Unpridictable Return: Occurs if int 'c' is uninitialized. it leads
	*							to undefined behavior when attempting to search nothing. 
	*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	n;

	str = (char *)s;
	n = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (str + n);
	while (0 < n--)
	{
		if (str[n] == (unsigned char)c)
			return (str + n);
	}
	return (NULL);
}
