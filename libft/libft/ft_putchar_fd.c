/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 06:46:25 by npentini          #+#    #+#             */
/*   Updated: 2023/06/03 06:47:21 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_putchar_fd
	*	Header:			libft.h
	*	Prototype:		void	ft_putchar_fd(char c, int fd)
	*	Parameters:		c (char):	The character to be written to the given file
	*								descriptor.
	*					fd (int):	The file descriptor to which character is
	*								written.
	*	Description:	This function writes a single character 'c' to the specified
	*					file descriptor 'fd'.
	*	Return:			None. 
	*	Walkthrough:
	*					1.	The function takes two parameters: a character 'c' and an
	*						integer 'fd' representing the file descriptor.
	*					2.	It uses the 'write' system call to write the character 'c'
	*						(one byte) to the specified file descriptor 'fd'.
	*	Summary:
	*					The ft_putchar_fd function writes one byte of data, containing
	*					the character 'c', to the specified file descriptor 'fd'.
	*	Usage:
	*					```c
	*					#include <unistd.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char	character = 'A';
	*						int		fd = 1;
	*
	*						ft_putchar_fd(character, fd);
	*                    	return (0);
	*					}
	*					```
	*	Undefined Behavior:
	*						1.	Invalid File Descriptor: Using an invalid or negative file
	*							descriptor as 'fd' when calling 'write' function, as in
	*							'write(fd, &c, 1)', is undefined behavior. It can lead to
	*							unpredictable result and is not a valid use of this function.
	*						2.	Invalid File Descriptor for 'close': If the 'fd' passed to the
	*							'write' function is invalid or negative, and the issue is not
	*							addressed, it can result in errors when the 'write' function
	*							attempt to perform the write operation and close the file
	*							descriptor, causing undefined behavior.
	*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
