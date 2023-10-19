/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 00:08:27 by npentini          #+#    #+#             */
/*   Updated: 2023/07/12 12:19:05 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_bzero
	*	Header:			libft.h
	*	Prototype:		void	ft_bzero(void *s, size_t n)
	*	Parameters:		s (void *): a pointer to the memory to be zeroed.
	*					n (size_t): the number of bytes to zero.
	*	Description:	This function sets the first 'n' bytes of the memory pointed to 
	*					by 's' to zero. This function is used to clear a block of memory.
	*	Walkthrough:
	*					1.	Declare a pointer to unsigned char, p. Using Using 'unsigned char'
	*						is important because it ensures that the value 0 is stored in memory
	*						without any sign extension issues. It allows 'p' to represent values
	*						from 0 to 255 (0xFF).
	*					2.	Assign the address 's' to 'p', making 'p' point to the start of the
	*						memory block.
	*					3.	Enter a loop that runs 'n' times.
	*					4.	Inside the loop, use dereferencing (*p) to set the value at the current
	*						memory location pointed to by 'p' to 0 (zero). This effectively replaces
	*						the current byte in the memory with the value zero.
	*					5.	Increment 'p' to point to the next byte in memory.
	*					6. 	Repeat the loop until 'n' bytes have been set to zero.
	*					7.	Exit the loop, and the memory pointed to by 's' now contains
	*						'n' zeroed bytes.
	*	Summary:
	*					The ft_bzero function clears a block of memory by setting 'n' bytes
	*					starting from the address 's' to zero. It ensures consistent and
	*					safe memory clearing by using 'unsigned char' to avoid sign-related
	*					issues, such as sign extension, comparison problems, and overflow.
	*					This approach guarantees that all 'n' bytes are set to zero,
	*					making it suitable for initializing memory blocks, ensuring data
	*					integrity, and preventing unintended behavior related to signed
	*					values and mixed data types.
	*	Usage:
	*					```c
	*					#include <stdio.h>      // Include the necessary header for printf
	*					#include "libft.h"		// Include the libft header
	*
	*					int	main(void)
	*					{
	*						char	s[] = "Hello world!"; // Use an array to store the string
	*						printf("s before ft_bzero: %s\n", s); // Print the string before clearing
	*
	* 						ft_bzero(s, 5); // Clear the first 5 bytes of 's'
	*
	* 						printf("s after ft_bzero: %s\n", s); // Print the string after clearing
	* 						return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds the
	*							actual size of the memory block pointed to by 's.'
	*						2.	Segmentation Fault (SIGSEGV): Occurs when 's' is a NULL pointer.
	*						3.	Uninitialized Memory Access: Occurs when 's' points to uninitialized
	*							memory, resulting in unpredictable program behavior.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}
