/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:13:38 by npentini          #+#    #+#             */
/*   Updated: 2023/06/01 21:36:23 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	*	Function:   	ft_memcmp
	*	Header:     	libft.h
	*	Prototype:  	int	ft_memcmp(const void *s1, const void *s2, size_t n)
	*	Parameters: 	s1 (const void *):	a pointer to the first memory to be compare.
	*	            	s2 (const void *):	a pointer to the second memory to be compare.
	*	            	n (size_t):			the maximum number of bytes to compare.
	*	Description:	This function compares the first 'n' bytes of two memory blocks
	*	            	pointed to by 's1' and 's2'.
	*	Return:     	Returns an integer representation of comparison result.
	*	            	-	0 if the memory blocks are equal.
	*	            	-	a positive int value if 's1' is greater than 's2'.
	*	            	-	a negative int value if 's1' is less than 's2'.
	*	External Functions:
	*	            	None.
	*	Walkthrough:
	*	            	1.	Declare two pointer to unsigned char, p1 and p2.
	*	            		Using 'unsigned char' is essential to ensure that the
	*	            		function works with values ranging from 0 to 255 without
	*	            		encountering sign extention issues.
	*	            	2.	Assign the value of 's1' to 'p1' and s2 to p2, making
	*	            		'p1' and 'p2' pointing to the start of the memory block.
	*	            	3.	Enter a loop that runs 'n' times or until a difference
	*	            		is found.
	*	            	4.	Inside the loop, compare the value at the current memory
	*	            		locations pointed to by 'p1' and 'p2'.
	*	            	5.	If a difference is found, return the difference between the 
	*	            		two bytes as an integer.
	*	            	6. 	Increment the 'p1' and 'p2' to point to the next
	*	            		memory addresses.
	*	            	7.	If no difference is found after comparing the 'n' bytes,
	*	            		it will return 0.
	*	Summary:
	*	            	The ft_memcmp function compares the content of two memory
	*	            	blocks, 's1' and 's2', by examining the first 'n' bytes.
	*	            	It ensures a safe comparison of memory blocks and return an
	*	            	integer indicating whether the blocks are equal or one is
	*	            	greater or less than the other. This function is commonly
	*	            	used to check the equality of memory blocks and compare them
	*	            	based on their ASCII value.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h>  // Include the necessary header for printf
	*	            	#include "libft.h"  // Include the libft header
	*
	*	            	int main(void)
	*	            	{
	*	            		char s1[] = "Hello";
	*	            		char s2[] = "World";
	*	            		int	 result; 
	*
	*	            		result = ft_memchr(s1, s2, 5);
	*	            		if (result == 0)
	*	            			printf("s1 and s2 are equal (Result: %d)\n", result);
	*	            		else if (result < 0)
	*	            			printf("s1 is less than s2 (Result: %d)\n", result);
	*	            		else
	*	            			printf("s1 is greater than s2 (Result: %d)\n", result);
	*	            		return (0);
	*	            	}
	*
	*	Undefined Behavior:
	*	            	1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds
	*	            		the actual size of either the memory blocks pointed to by
	*	            		's1' and 's2'. Leading to unpredictable result.
	*	            	2.	Segmentation Fault (SIGSEGV): Occurs when 's1' or 's2' is a 
	*	            		NULL pointer. Leading to a crash.
	*	            	3.	Uninitialized Memory Access: Occurs when 's1' or 's2' points
	*	            		to uninitialized memory blocks, resulting in
	*	            		unpredictable program behavior.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
