/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 07:09:56 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 07:11:09 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_putendl_fd
	*	Header:     	libft.h
	*	Prototype:  	void	ft_putendl_fd(char *s, int fd)
	*	Parameters:  	s (char *):	The string to be written to the specified file
	*	            				descriptor
	*	            	fd (int):	The file descriptor to which character is
	*	            				written.
	*	Description:	This function writes a null-terminated string 's' to the
	*	            	specified file descriptor 'fd', followed by a newline
	*	            	character '\n'.
	*	Return:     	None.
	*	External Functions:
	*	            	None.
	*	Walkthrough:
	*	            	1.	The function takes two parameters: a string 's' and an
	*	            		integer 'fd' representing the file descriptor.
	*	            	2.	Declared a variable int 'x' and initialized to -1, which will
	*	            		be used as an index to traverse the string.
	*	            	3.	The function enters a loop that continues incrementing 'x'
	*	            		until it encounters the null-terminator character ('\0') at
	*	            		the end of the string.
	*	            	4.	In each iteration of the loop, it uses the 'write' system call
	*	            		to write a single character from the string 's' to the
	*	            		specified file descriptor 'fd'.
	*	            	5.	After writing the entire string, it uses the 'write'
	*	            		system call again to write a newline character '\n'
	*	            		to the specified file descriptor 'fd'.
	*	Summary:
	*	            	The ft_putendl_fd function writes a string 's' to the
	*	            	specified file descriptor 'fd' character by character
	*	            	until null-terminator is reached and appends a newline
	*	            	character '\n' to the end of the string.
	*	Usage:
	*	            	```c
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		char	str = "Hello, World!";
	*	            		int		fd = 1;
	*
	*	            		ft_putendl_fd(str, fd);
	*               		return (0);
	*					}
	*					```
	*	Undefined Behavior:
	*	            	1.	Invalid File Descriptor: Using an invalid or 
	*	            		negative file descriptor as 'fd' when calling
	*	            		'write' function, as in 'write(fd, &c, 1)', is
	*	            		undefined behavior. It can lead to unpredictable
	*	            		result and is not a valid use of this function.
	*	            	2.	Null Pointer (Segmentation Fault): If the input
	*	            		string 's' is a null pointer, it will result
	*	            		in a segmentation fault.
	*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	x;

	x = -1;
	while (s[++x] != '\0')
		write(fd, &s[x], 1);
	write(fd, "\n", 1);
}
