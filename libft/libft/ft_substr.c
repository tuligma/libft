/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 02:43:23 by npentini          #+#    #+#             */
/*   Updated: 2023/10/03 21:59:34 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_substr
	*	Header:     	libft.h
	*	Prototype:  	char *ft_substr(char const *s, unsigned int start, size_t len)
	*	Parameters: 	s (const char *):		The input null-terminated string from
	*	            							which the substring will be extracted.
	*	            	start (unsigned int):	The starting index from which the
	*	            							substring extraction begins.
	*	            	len (size_t):			The maximum length of substring to
	*	            							extract.
	*	Description:	This function extracts a substring from the input string 's' 
	*	            	starting at index 'start' and with a maximum length of 'len'
	*	            	characters. The extracted substring is returns as a dynamically
	*	            	allocated null-terminated string.
	*	Return:     	A pointer to the extracted substring on success, or NULL if any
	*	            	of the following conditions are met:
	*	            	1.	The input string 's' is NULL.
	*	            	2.	The 'start' index is greater than or equal to the length
	*	            		of 's'.
	*	            	3.	The specified 'len' exceeds the available characters in
	*	            		's' starting from 'start'.
	*	            	4.	Memory allocationg fails.
	*	External Functions:
	*	            	1. ft_strlen
	*	            	2. malloc
	*	Walkthrough:
	*	            	1.	The function takes the input string 's', the starting index
	*	            		'start', and the maximum length 'len' as parameters.
	*	            	2.	If 's' is NULL, The function returns NULL to indicate
	*	            		an invalid input.
	*	            	3.	If 'start' is greater than or equal to the length of 's',
	*	            		len is set to 0 to indicate that no valid substring can
	*	            		be extracted.
	*	            	4.	If 'len' is greater than the available characters in 's'
	*	            		starting from 'start', it adjusted to available length.
	*	            	5.	The function allocates memory for the substring using malloc
	*	            		and assign it to the variable 'substr'.
	*	            	6.	If memory allocation fails, the function returns NULL.
	*	            	7.	An index variable 'i' is initialized to -1 and incremented
	*	            		to start the loop for extracting the substring.
	*	            	8.	The function enters a loop to extract 'len' characters from
	*	            		's' starting from the 'start' index and store them in the 
	*	            		allocated memory.
	*	            	9.	A null terminator is added at the end of the extracted
	*	            		substring to make it a valid C string.
	*	            	10.	The pointer to the extracted substring 'substr' is returned.
	*					
	*	Summary:
	*	            	The ft_substr function extracts a substring from input string 's'
	*	            	and returns it as a dynamically allocated null-terminated string.
	*	            	It provides checks for invalid input and handles memory allocation.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		const char *s = "Hello, World!";
	*	            		char *result;
	*
	*	            		result = ft_substr(s, 7, 5);
	*	            		if (result)
	*	            			printf("Extracted substring: %s\n", result)
	*	            		else
	*	            			printf("Extraction failed (NULL result).\n")
	*	            		return (0);
	*	            	}
	*	            	```
	*	Undefined Behavior:
	*	            	None.
	*	Notes:
	*	            	The function demonstrate adapted behavior for negative values
	*	            	of 'start' and 'len', treating them as valid and well-defined,
	*	            	in alignment withe thier respective data types (unsinged and
	*	            	size_t). This can be beneficial for specific use cases where
	*	            	negative values are considered differently. The function caller
	*	            	is responsible for freeing the memory allocated after using
	*	            	this function.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < len)
		substr[i] = s[i + start];
	substr[i] = '\0';
	return (substr);
}
