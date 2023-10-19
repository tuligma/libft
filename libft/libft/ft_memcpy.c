/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:48:27 by npentini          #+#    #+#             */
/*   Updated: 2023/07/12 12:56:21 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_memcpy
	*	Header:			libft.h
	*	Prototype:		void	*ft_memcpy(void *dest, const void *src, size_t n)
	*	Parameters:		s1 (void *):	a pointer to the destination memory.
	*					s2 (const void *):	a pointer to the source memory.
	*					n (size_t):			the number of byte to copy.
	*	Description:	This function copies 'n' bytes from 'src' memory to the
	*					'dest' memory.
	*	Return:			Returns a pointer to the destination memory ('dest');
	*	Walkthrough:
	*					1.	Declare two pointers to unsigned char, 'd' for destination
	*						and 's' for the source. the unsigned char is essential to ensure
	*						that the function works with values ranging from 0 to 255
	*						without encountering sign extention issues.
	*					2.	Assign the value of 'dest' to 'd' and 'src' to 's', making 
	*						'd' and 's' point to the start of their respective memory block.
	*					3.	Check if 'd' and 's' are NULL pointers.If either is NULL.
	*						it returns NULL. to indicate an error (potential segmentation fault)
	*					4.	Enter a loop that runs 'n' times.
	*					5.	Inside the loop, copy the value at the current location
	*						pointed to by 's' to the location pointed to by 'd'.
	*					6.	Increment bot 's' and 'd' to point to the next memory addresses.
	*					7. 	Repeat until 'n' bytes have been copied.
	*					8.	Return a pointer to the destination memory ('dest').
	*	Summary:
	*					The ft_memcpy function is used to copy 'n' bytes of memory from the
	*					'src' to the 'dest'. It is commonly used to perform low-level memory
	*					operations, such as copying binary data, ensuring that the data
	*					integrity is preserved during the copy operation.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char	src[] = "Hello, world!";
	*						char	s2[14]; // Make sure it has enough space.
	*
	*						ft_memcpy(dest, src, 14);
	*						printf("Copied: %s\n, dest); //Output: Copied: Hello, world!
	*						return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds
	*							the size of block 'dest' or the source memory block 'src'.
	*							Leading to unpredictable result.
	*						2.	Segmentation Fault (SIGSEGV): Occurs when either 'dest' 
	*							or 'src' is a NULL pointer and if the  'src' or both are
	*							uninitialized. Leading to a crash.
	*						3.	Uninitialized Memory Access: Occurs when 'dest' points to
	*							to uninitialized memory, resulting in
	*							unpredictable program behavior.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = dest;
	s = src;
	if (!d && !s)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
