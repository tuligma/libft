/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:27:39 by npentini          #+#    #+#             */
/*   Updated: 2023/05/31 12:50:34 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*	Function:   	ft_memchr
	*	Header:     	libft.h
	*	Prototype:  	void	*ft_memchr(const void *s, int c, size_t n)
	*	Parameters: 	s (const void *):	a pointer to the memory to be searched.
	*	            	c (int):			the value to be seached in the memory.
	*	            	n (size_t):			the maximum number of bytes to search.
	*	Description:	This function scans the first 'n' bytes of the memory
	*	            	pointed to by 's' for the first occurrence of the
	*	            	value 'c' (interpreted as an unsigned char).
	*	Return:     	If 'c' is found, a pointer to the matching byte is returned;
	*	            	otherwise, NULL is returned.
	*	External Functions:
	*	            	None.
	*	Walkthrough:
	*	            	1.	Declare a pointer to unsigned char, p. Using
	*	            		'unsigned char' is essential to ensure that the
	*	            		function works with values ranging from 0 to 255
	*	            		without encountering sign extention issues.
	*	            	2.	Assign the value of 's' to 'p', making 'p' pointing to
	*	            		the start of the memory block.
	*	            	3.	Enter a loop that runs 'n' times or until 'c' is found.
	*	            	4.	Inside the loop, compare the value at the current memory
	*	            		location pointed to by 'p' with the value 'c'
	*	            		(casted to unsigned char).
	*	            	5.	If a match is found, return the pointer 'p' pointing
	*	            		to the matching byte.
	*	            	6. 	Increment the 'p' to point to the next memory address.
	*	            	7.	If no match is found after it scanned the 'n' bytes,
	*						it will return NULL.
	*	Summary:
	*	            	The ft_memchr function searches for a specific value 'c'
	*	            	within the first 'n' bytes of the memory block pointed
	*	            	to by 's'. It uses 'unsigned char' to ensure consistent
	*	            	and safe comparison without any signed-related issues.
	*	            	This function for finding a character or byte within a
	*	            	memory block and returnin a pointer to the matching byte
	*	            	if found; otherwise, will return NULL.
	*	Usage:
	*	            	```c
	*	            	#include <stdio.h> // Include the necessary header for printf
	*					#include "libft.h" // Include the libft header
	* 
	*	            	int main(void)
	*	            	{
	*	            		void *result;
	*	            		char	s[] = "Hello, world!";
	*	            		char	target;
	*	            		printf("s before ft_memchr: %s\n", s); 
	*
	*	            		target = o;
	*	            		result = ft_memchr(s, target, 13);
	*	            		if (result != NULL)
	*	            			printf("Found '%c' at position %ld\n",
	*	            				target, (char *)result - s);
	*	            		else
	*	            			printf("'%c' not found in the first 13 bytes\n", target);
	*	            		return (0);
	*	            	}
	*
	*	Undefined Behavior:
	*	            	1.	Buffer-Overflow (stack or heap): Occurs when 'n' exceeds
	*	            		the actual size of the memory block pointed to by 's.' 
	*	            		and c is not found.
	*	            	2.	Segmentation Fault (SIGSEGV): Occurs when 's' 
	*	            		is a NULL pointer.
	*	            	3.	Uninitialized Memory Access: Occurs when 's'
	*						points to uninitialized memory, resulting in
	*	            		unpredictable program behavior.
	*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}
