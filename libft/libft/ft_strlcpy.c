/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:26:59 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 09:36:38 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_strlcpy
	*	Header:			libft.h
	*	Prototype:		size_t	ft_strlcpy(char *dest, const char *src, size_t size)
	*	Parameters:		dest (char *):			The destination buffer to store the 
	*											copied string.
	*					src	 (const char *): 	The source null-terminated string to
	*											be copied.
	*					size (size_t):			The size of the destination buffer
	*											'dest'.
	*	Description:	This function copies up to 'size - 1' characters from the 
	*					null-terminated source string 'src' to the destination
	*					buffer 'dest'. It ensures that the destination string is
	*					null-terminated. It computes the length of the source
	*					string 'src' and returns the length of 'src'.
	*	Return:			The length of the source string 'src', which does not
	*					include null terminator. If size is zero or dest is a
	*					NULL pointer, the function returns the length that
	*					would have been copies if 'size' was sufficiently
	*					large.
	*	Walkthrough:
	*					1.	The function takes a destination buffer 'dest', a 
	*						source string 'src', and the size of the destination
	*						buffer 'size' as input.
	*					2.	It calculates the length of the source string 'src'
	*						and initialize it with variable 'src_len'.
	*					3.	The function ensures that 'size' represents the size
	*						of the destination buffer 'dest'. It starts a loop
	*						to copy characters from 'src' to 'dest'.
	*					4.	In each iteration, the function copies characters from
	*						'src' to 'dest' until 'size -1' characters are copied
	*						or until a null terminator is encountered in 'src'.
	*					5.	After the loop, the function null-terminate 'dest' to
	*						ensure it is a valid null-terminated string.
	*					6.	The function returns the length of the source string 'src'.
	*					7.	If 'size' is zero or 'dest' is a NULL pointer, the
	*						function returns the length that would have been copied
	*						if size was sufficiently large. No copying is done
	*						int this case.
	*	Summary:
	*					The ft_strlcpy function safely copies up to 'size - 1'
	*					characters from source string 'src' to destination buffer
	*					'dest', ensuring a valid null-terminated string. It returns
	*					the length of 'src'. If 'size'  is zero or 'dest' is NULL,
	*					it returns the required buffer size.
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

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		len = -1;
		while (++len < size - 1 && src[len] != '\0')
			dest[len] = src[len];
		dest[len] = '\0';
	}
	return (src_len);
}
