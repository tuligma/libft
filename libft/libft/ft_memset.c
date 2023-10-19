/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:58:59 by npentini          #+#    #+#             */
/*   Updated: 2023/07/12 02:56:46 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_memset
	*	Header:			libft.h
	*	Prototype:		void	*ft_memset(void *s, int c, size_t n)
	*	Parameters:		s (void *):	a pointer to the memory area to be filled.
	*					c (int):	the value to be set to.
	*					n (size_t):	the number of byte to be set to the value 'c'.
	*	Description:	This function fills the first 'n' bytes of memory area pointed
	*					to by 's' with the constant byte 'c'.
	*	Return:			Returns a pointer to the memory area 's'.
	*	Walkthrough:
	*					1.	Declare a pointer to an unsigned char, 'p', Using 'unsigned char'
	*						is important because it ensures that the value 'c' is stored in
	*						memory without any sign extension issues. It allows 'p' to represent
	*						values from 0 to 255 (0xFF).
	*					2.	Assign the address of 's' to 'p', making 'p' the point to the start
	*						of the memory block.
	*					3.	Declare an unsigned char variable 'x' and assign it to the value of
	*						'c'. This ensure that 'x' holds the constant byte value to be copied
	*						into the memory.
	*					4.	Enter a loop  that runs 'n' times, effectively iterating through the
	*						first 'n' bytes of the memory area 's'.
	*					5.	Inside the loop, us dereferencing ('*p') to set the value at the
	*						current memory location pointed to by 'p' to the constant byte 'x'.
	*						This effectively replaces the current byte in the memory with the
	*						value of 'x'.
	*					6.	Increment 'p' to point to the next byte in memory, ensuring that the
	*						next iteration of the loop will operate on the next byte in memory.
	*					7.	Repeat the loop until 'n' bytes has been set to the constant value 'x'.
	*					8.	Return the pointer to the memory area 's' to indicate that the memory
	*						has been set, and it contains 'n' bytes, each set to the value 'x'. 
	*	Summary:
	*					The ft_memset function sets 'n' bytes in the memory area 's' to the 
	*					constant value of 'c' and returns the pointer to the memory area 's'
	*					after 'n' bytes has been set to the constant 'c'.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char	array[5];
	*						int		i;
	*
	*						i = -1;
	*						printf("\n\nBefore ft_memset function:\n");
	*						while (++i < (int)sizeof(buffer))
	*							printf("Add:    %p  | Value:    %c\n",
	*								(void *)&buffer[i], buffer[i]);
	*						ft_memset(array, A, 5);
	*						i = -1;
	*						printf("\n\nAfter ft_memset function:\n");
	*						while (++i < (int)sizeof(buffer))
	*							printf("Add:    %p  | Value:    %c\n",
	*								(void *)&buffer[i], buffer[i]);
	*						return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds
	*							the size of the memory area 's'. Leading to unpredictable
	*							result and potential memory curroption.
	*						2.	Segmentation Fault (SIGSEGV): Occurs when 's' is a NULL 
	*							pointer. This lead to a crash.
	*						3.	Uninitialized Memory Access: Occurs when 's' points to
	*							to uninitialized memory, resulting in unpredictable 
	*							program behavior. It may lead to unexpected memory writes.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	x;

	p = s;
	x = c;
	while (n--)
		*p++ = x;
	return (s);
}
