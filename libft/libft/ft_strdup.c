/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 23:37:17 by npentini          #+#    #+#             */
/*   Updated: 2023/08/01 08:06:58 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strdup
	*	Header:			libft.h
	*	Prototype:		char *ft_strdup(char const *s)
	*	Parameters:		s (const char *):	The null-terminated string to duplicate.
	*	Description:	This function duplicates a null-terminated string 's' by
	*					allocating memory for new null-terminated string and copying
	*					the content of 's' into the newly allocated memory. It returns
	*					a pointer to the newly created string.
	*	Return:			A pointer to a newly created null-terminated string containing
	*					a duplicate of the input string 's'. Returns NULL  if memory
	*					allocation fails.
	*	Walkthrough:
	*					1.	The function takes the input string 's' as a parameter.
	*					2.	It calculates the length of 's' using the 'ft_strlen'
	*						function and assign it to the variable 'len'.
	*					3.	Memory is allocated for a new string with a size of
	*						'len + 1' to account for the null terminator and assign
	*						to variable 'dest'.
	*					4.	If memory allocation fails (indicating by a NULL return
	*						from 'malloc'), the function returns NULL.
	*					5.	An index variable 'i' is initialized to -1 and incremented
	*						to start the loop for copying the character from 's' to 'dest'.
	*					6.	The function enters a loop to copy each character from 's'
	*						to the corresponding position in the newly allocated memory
	*						'dest'.
	*					7.	The null terminator is added at the end of  the copied string
	*						to makit it a valid C string.
	*					8.	The pointer to the newly created string 'dest' is returned.	
	*					
	*	Summary:
	*					The ft_strdup function duplicates a null-terminated string 's'
	*					by allocating memory for a new null-terminated string and
	*					copying the content of 's' into the newly allocated memory.
	*					It provides checks for memory allocation and handles the
	*					copying process.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						const char *s = "Hello, World!";
	*						char *result;
	*
	*						result = ft_strdup(s);
	*						if (result)
	*							printf("Duplicated string: %s\n", result)
	*						else
	*							printf("Duplication failed (NULL result).\n")
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if 's' is 
	*							either a NULL pointer or uninitialized.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	while (++i < len)
		dest[i] = s[i];
	dest[i] = '\0';
	return (dest);
}
