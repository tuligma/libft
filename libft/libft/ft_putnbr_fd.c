/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 07:17:10 by npentini          #+#    #+#             */
/*   Updated: 2023/06/04 13:53:51 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_putnbr_fd
	*	Header:			libft.h
	*	Prototype:		void	ft_putchar_fd(int n, int fd)
	*	Parameters:		n (int):	The integer to be written to the specified
	*								file descriptor.
	*					fd (int):	The file descriptor where the integer will be
	*								written.
	*	Description:	This function writes an integer 'n' to the specified
	*					file descriptor 'fd'.
	*	Return:			None. 
	*	Walkthrough:
	*					1.	The function takes two parameters, an integer 'n' and an
	*						integer 'fd' that represents the file descriptor.
	*					2.	If 'n' is equal to 0, it writes '0' to the file descriptor
	*						'fd' using ft_putchar_fd and returns.
	*					3.	If 'n' is equal to the minimum integer value (-2147483648),
	*						it writes '-2147483648' to the file descriptor 'fd' using
	*						ft_putstr_fd and returns.
	*					4.	If 'n' is negative, it writes a '-' to the file descriptor
	*						'fd', multiplies 'n' by -1 to make it positive and proceeds.
	*					5.	If 'n' is greater than or equal to 10, it recursively calls
	*						ft_putnbr_fd with 'n / 10' to process the remaining digits.
	*						(Recursion is a process in which a function calls itself,
	*						which allows it to break the number into smaller parts).
	*	Summary:
	*					The ft_putnbr_fd function writes an integer 'n' to the specified
	*					file descriptor 'fd'.
	*	Usage:
	*					```c
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						int		n = 5678;
	*						int		fd = 1; //Standard Ouput (stdout)
	*
	*						ft_putnbr_fd(n, fd);
	*                    	return (0);
	*					}
	*					```
	*	Undefined Behavior:
	*						1.	Invalid File Descriptor: Using an invalid or negative file
	*							descriptor as 'fd' when calling 'write' function, as in
	*							'write(fd, &c, 1)', is undefined behavior. It can lead to
	*							unpredictable result and is not a valid use of this function.
	*						2.	Integer Overflow: If 'n' is outside the representable range
	*							of integers, it may result in undefined behavior. For example,
	*							calling 'ft_putnbr(-2147483649, fd) might lead to undefined
	*							behavior.
	*						3.	Out-of-Bounds Memory Access (Segmentation Fault): If the input
	*							integer 'n' is derived from an invalid memory location or is 
	*							used to access memory outside the bounds of an array, It can
	*							lead to undefined behavior. This potential issue is related to
	*							how the integer is obtained before calling the function.
	*						4.	Non-Integer Values (e.g. 'A' as an input): The ft_putnbr_fd
	*							function is intended to handle integers. Passing non-integer
	*							values or non-numeric character as an input 'n' would result
	*							in an undefined behavior, as the function may not handle these
	*							cases gracefully. In practice, its important to ensure that
	*							the input provided to the function is indeed an integer.
	*	Recursive Process:
	*					-	The function uses recursion to break down the integer 'n' into
	*						individual digits.
	*					-	The digits are proccess from right to left and are stored in a
	*						call stack.
	*					-	Each digit is written to the file descriptor as it is processed
	*						and control moves back to the previous call.
	*					-	The recursion continues until all digits have been written.
	*	Example:		***IN***
	*					1.	Intial Call: 			ft_putnbr_fd(5678/10, fd)
	*						- Call Stack (Level 1): value-> 5678
	*					2.	First Recursive Call: 	ft_putnbr_fd(567/10, fd)
	*						- Call Stack (Level 2): value-> 567
	*					3.	Second Recursive Call: 	ft_putnbr_fd(56/10, fd)
	*						- Call Stack (Level 3): value-> 56
	*					4.	Third Recursive Call: 	ft_putnbr_fd(5/10, fd)
	*						- Call Stack (Level 4): value-> 5
	*					***OUT***
	*					1.	Process Level 4 Stack:	ft_putchar_fd(5 % 10 + '0', fd)
	*						- writes '5' to the file descriptor and released from the stack.
	*					2.	Process Level 3 Stack:	ft_putchar_fd(56 % 10 + '0', fd)
	*						- writes '6' to the file descriptor and released from the stack.
	*					3.	Process Level 2 Stack:	ft_putchar_fd(567 % 10 + '0', fd)
	*						- writes '7' to the file descriptor and released from the stack.
	*					4.	Process Level 1 Stack:	ft_putchar_fd(5678 % 10 + '0', fd)
	*						- writes '8' to the file descriptor and released from the stack.
	*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}
