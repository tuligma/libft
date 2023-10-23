/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 23:19:32 by npentini          #+#    #+#             */
/*   Updated: 2023/06/05 00:45:49 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_strchr
	*	Header:     	libft.h
	*	Prototype:  	char	*ft_strchr(const char *s, int c)
	*	Parameters: 	s (const char *):	The string to be searched.
	*	            	c (int):			The character to search in the string.
	*	Description:	This function locates the first occurrence of character 'c'
	*	            	(interpreted as an unsigned char) in the string 's'.
	*	Return:     	A pointer to the first occurrence of character 'c' in the
	*	            	string, or NULL if the character 'c' is not found.
	*	External Functions:
	*	            	1. ft_strlen
	*	Walkthrough:
	*	            	1.	The function takes a string 's' and an integer 'c' as input.
	*	            	2.	If 'c' is the null terminator ('\0'), The function calculates
	*	            		the length of the string using ft_strlen function and returns
	*	            		a pointer to the null terminator using pointer arithmetic.
	*	            	3.	If 'c' is not the null terminator, the function enters a loop
	*	            		to iterate through the characters in the string 's'.
	*	            	4.	In each iteration, it checks if the current character matches
	*	            		the character 'c' and increments the 's' pointer to point to
	*	            		the next character for further comparison.
	*	            	5.	If a match is found, the function returns a pointer to that
	*	            		character in the string.
	*	            	6.	If the loop reaches the end of the string without finding a
	*	            		matching character, the function returns NULL.
	*	Summary:
	*	            	The ft_strchr function searches for a character 'c' in the given
	*	            	string 's' and returns a pointer to the first occurrence of 'c'
	*	            	in the string or NULL if 'c' is not found.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		const char *str = "Hello, World!";
	*	            		int	c = '0';
	*	            		char	*result;
	*
	*	            		result = ft_strchr(str, c);
	*	            		if (result)
	*	            			printf("Char '%c' at index %ld -> %s\n", c,result - s, result);
	*	            		else
	*	            			printf("'%c' not found in the first 13 bytes\n", target);
	*	            		return (0);
	*	            	}
	*
	*	Undefined Behavior:
	*	            	1.	Segmentation Fault (SIGSEGV): Occurs if the input string
	*	            		's' is a NULL pointer. If string 's' is uninitialized or
	*	            		both 's' and 'c' are uninitialized it leads to
	*	            		Segmentation fault.
	*	            	2.	Unpridictable Return: Occurs if int 'c' is uninitialized.
	*	            		It leads to undefined behavior when attempting to
	*	            		search nothing. 
	*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
