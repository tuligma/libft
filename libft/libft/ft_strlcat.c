/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:09:26 by npentini          #+#    #+#             */
/*   Updated: 2023/05/30 22:25:29 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strlcat
	*	Header:			libft.h
	*	Prototype:		size_t	ft_strlcat(char *dest, const char *src, size_t size)
	*	Parameters:		dest (char *):			The destination buffer to which 'src' 
	*											is appended.
	*					src	 (const char *): 	The source null-terminated string to
	*											be appended to 'dest'.
	*					size (size_t):			The size of the destination buffer
	*											'dest'.
	*	Description:	This function appends at most 'size - ft_strlen(dest) - 1'
	*					characters from the null-terminated string 'src' to the
	*					null-terminated string 'dest'. The result is null-terminated
	*					and guaranteed to be no longer than 'size'.
	*	Return:			The length of concatenated string, which is the initial
	*					length of 'dest' plus the length of 'src'. If 'size' is less
	*					than the length of 'dest', it returns 'src_len + size'.
	*	Walkthrough:
	*					1.	The function takes a destination buffer 'dest', a 
	*						source string 'src', and the size of the destination
	*						buffer 'size' as input.
	*					2.	It calculates the length of the destination buffer
	*						'dest' and the source string 'src' and assign them
	*						to 'dest_len' and 'src_len' variables respectively.
	*					3.	The total length of concatenated string is calculated
	*						as 'total_len' which is 'dest_len + src_len'.
	*					4.	If 'size' is less than or equal to 'dest_len', the
	*						function returns 'src_len + size' as there is no room
	*						to append 'src' to 'dest'.
	*					5.	The number of characters that can be copied without
	*						exceeding 'size' is calculated as 'copy_len', which
	*						is 'size - dest_len - 1'.
	*					6.	The function enters a loop to copy characters from
	*						'src' to 'dest' while 'copy_len is greater than zero
	*						and 'src' at index 'i' is not a null terminator
	*						character ('\0').
	*					7.	In each iteration, 'src[i]' is copied to 'dest[dest_len],
	*						and both 'i' and 'dest_len' are incremented while
	*						'copy_len' is being decremented.
	*					8.	After the loop, 'dest[dest_len]' is set to null terminator
	*						character ('\0') to ensure proper null-termination.
	*					9.	The function returns 'total_len', which is the total
	*						length of the concatenated string while respecting
	*						the specified 'size'.
	*	Summary:
	*					The ft_strlcat function safely concatenate 'src' onto the 
	*					end of 'dest', ensuring that the result is null-terminated
	*					and does not exceed the specified 'size'. It returns the
	*					total length of the concatenated string, considering
	*					'size' limitations.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char	det[16];
	*						const char	*src = "Hello, World!"
	*						size_t	size = sizeof(dest);
	*
	*						size = ft_strlcpy(dest, src, size);
	*						printf("Copied string: %s\n", dest);
	*						printf("Length of the string: %zu\n", size);
	*                    	return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Segmentation Fault (SIGSEGV): Occurs if either the
	*							'dest' or 'src' pointer is a null pointer or 
	*							uninitialized. 
	*/


#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	copy_len = size - dest_len - 1;
	i = -1;
	while (src[++i] != '\0' && copy_len-- > 0)
		dest[dest_len++] = src[i];
	dest[dest_len] = '\0';
	return (total_len);
}
