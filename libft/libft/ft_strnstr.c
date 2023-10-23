/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 22:09:57 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 22:54:54 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_strnstr
	*	Header:     	libft.h
	*	Prototype:  	char *ft_strnstr(const char *big,
	*	            					const char *little,  size_t len)
	*	Parameters: 	big (const char *):		The main null-terminated string
	*	            							to search within.
	*	            	little (const char *):	The null-terminated substring
	*	            							to search for in 'big'.
	*	            	len (size_t):			The maximum number of character
	*	            							to search within 'big'.
	*	Description:	This function  searches for the first occurrence of the
	*	            	null-terminated substring 'little' within the null-
	*	            	terminating string 'big' up to the first 'len' characters.
	*	            	It returns a pointer to the beginning of the located substring
	*	            	or NULL if substring is not found.
	*	Return:     	A pointer to the begining of the located substring in 'big' and
	*	            	NULL if 'little' is not found within the first 'len' characters
	*	            	of 'big'.
	External Functions:
	*	            	1. ft_strlen
	*	            	2. ft_strncmp
	*	Walkthrough:
	*	            	1.	The function take a main string 'big', a substring 'little'
	*	            		and the maximum number of characters to search 'len'
	*	            		as input.
	*	            	2.	The function initializes two character pointers 'b' and 'l'
	*	            		to the beginning of 'big' and 'little' respectively.
	*	            	3.	The length of 'little' is calculated and assign to variable
	*	            		'lil_len'.
	*	            	4.	If 'lil_len' is 0 (an empty substring), the function returns
	*	            		a pointer to the beginning of 'b'. indicating that there is
	*	            		no substring to search in main string 'b'.
	*	            	5.	The function enters a loop while the character at 'b' (using
	*	            		dereferencing) is not a null terminator ('\0') and 'len' is
	*	            		greater than or equal to 'lil_len'.
	*	            	6.	In each iteration, it uses 'ft_strncmp' to compare the
	*	            		substring of 'big' starting from 'b' and 'little' up to
	*	            		'lil_len' characters.
	*	            	7.	If the comparison result is 0 (indicating a match), the
	*	            		functions returns a pointer to the current character of 'b'
	*	            		indicating that 'little' is found within 'big'.
	*	            	8.	If no match is found in the current iteration, 'b' and 'len'
	*	            		will be pre-increment. and the loop continues to search
	*	            		for 'little'.
	*	            	9.	If the loop finishes without finding 'little' within the
	*	            		specified 'len' characters, the function returns NULL to
	*	            		indicate that 'little' is not present in 'big'.
	*	Summary:
	*	            	The ft_strnstr function searches for the first occurrence of 
	*	            	null-terminated substring 'little' within the null-terminated
	*	            	string 'big' up to specified maximum number of characters 'len'
	*	            	It returns a pointer to the beginning of the located substring
	*	            	or NULL if 'little' is not found within 'big' within the 
	*	            	specified limits.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		const char *s1 = "Hello, World!";
	*	            		const char *s2 = "World";
	*	            		char *result;
	*
	*	            		result = ft_strnstr(big, little, sizeof(big));
	*	            		if (result)
	*	            			printf("Substring is found: %s\n", result)
	*	            		else
	*	            			printf("Substring is not found.\n")
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	1.	Segmentation Fault (SIGSEGV): Occurs if  either 'big'
	*	            		or 'little' is a NULL pointer or uninitialized.
	*	            	2.	Unexpected Results. If the 'len' argument is a negative
	*	            		number, the function may produce unexpected results.
	*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	lil_len;

	b = (char *)big;
	l = (char *)little;
	lil_len = ft_strlen(little);
	if (!lil_len)
		return (b);
	while (*b != '\0' && len >= lil_len)
	{
		if (ft_strncmp(b, l, lil_len) == 0)
			return (b);
		++b;
		--len;
	}
	return (NULL);
}
