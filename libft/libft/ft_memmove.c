/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:16:50 by npentini          #+#    #+#             */
/*   Updated: 2023/06/05 00:33:52 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:		ft_memmove
	*	Header:			libft.h
	*	Prototype:		void	*ft_memmove(void *dest, const void *src, size_t n)
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
	*					3.	Check if 'd' and 's' are both NULL pointers.If they are,
	*						it returns NULL. to indicate an error (potential segmentation fault)
	*					4.	If 's' is ahead of 'd' (no overlap), copy data from 'src' to 'dest'
	*						moving forward.
	*							a.	Use a loop that runs 'n' times.
	*							b.	In each iteration, decerement 'n' by 1 and copy the byte from
	*								'src' to 'dest' and increment both s and d to point 
	*								to the next addresses.
	*					5.	If 's' overlaps with dest. (e.g. 'src' is behind 'dest'),
	*						copy data from 'src' to 'dest' moving backward.
	*							a.	Use a loop that runs 'n' times.
	*							b.	In each iteration, decrement n by 1 and copy the element
	*								at position 'n' of both 's' and 'n'.
	*					6.	Return a pointer to the destination memory ('dest').
	*	Summary:
	*					The ft_memmove function copies 'n' bytes from 'src' to 'dest' memory
	*					ensuring data integrity even if the source and destination memory
	*					regions overlap.
	*	Usage:
	*					```c
	*					#include <stdio.h>  // Include the necessary header for printf
	*					#include "libft.h"  // Include the libft header
	*                
	*					int main(void)
	*					{
	*						char	dest[10];
	*						char	src[] = "Hello";
	*
	*						ft_memmove(dest, src, 5);
	*						printf("Using ft_memmov %s\n, dest); //Output: Copied: Hello
	*						return (0);
	*					}
	*
	*	Undefined Behavior:
	*						1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds
	*							the size of block 'dest' or the source memory block 'src'.
	*							If n is not sufficient based on the size of src.
	*							Leading to unpredictable result.
	*						2.	Segmentation Fault (SIGSEGV): Occurs when either 'dest' 
	*							or 'src' is a NULL pointer and if the  'src' or both are
	*							uninitialized. Leading to a crash.
	*						3.	Uninitialized Memory Access: Occurs when 'dest' points to
	*							to uninitialized memory, resulting in
	*							unpredictable program behavior.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!d && !s)
		return (NULL);
	if (s > d)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
