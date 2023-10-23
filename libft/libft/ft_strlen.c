/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:21:48 by npentini          #+#    #+#             */
/*   Updated: 2023/09/24 16:59:26 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_strlen
	*	Header:     	libft.h
	*	Prototype:  	size_t	ft_strlen(const char *s)
	*	Parameters: 	s (const char *):	The null-terminated string to be measured
	*	Description:	This function calculates and returns the length of the given
	*	            	string 's', which is the number of characters in the string
	*	            	excluding the null terminator ('\0').
	*	Return:     	The length of the string 's'.
	External Functions:
	*	            	None.
	*	Walkthrough:
	*	            	1.	The function takes a null-terminated string 's'as input.
	*	            	2.	It initializes a variable 'x' to zero, which will be used
	*	            		to count the number of characters.
	*	            	3.	The function enters a loop that iterates through the
	*	            		characters of the string 's' until it encounters the
	*	            		null terminator '\0'.
	*	            	4.	In each iteration, it increments the count variable 'x'
	*	            		to keep track of the number of character and use as an
	*	            		index to navigate the string 's' character by character.
	*	            	5.	Once the null terminator '\0' is reached, the loop exits,
	*	            		and the function returns the count 'x' as the length of
	*	            		the string, which excludes the null terminator.
	*	Summary:
	*	            	The ft_strlen function calculates and returns the length of the
	*	            	null-terminated string 's', which is the number of characters in
	*	            	the string excluding the null terminator '\0'.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		const char *str = "Hello, World!";
	*	            		size_t	len;
	*
	*	            		len = ft_strlen(str);
	*	            		printf("Length of the string: %zu\n", length);
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	1.	Segmentation Fault (SIGSEGV): Occurs if the input string
	*	            		's' is a NULL pointer or if string 's' is uninitialized.
	*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}
